#include "setfunc.h"
#include <iostream>
#include <sstream>
using namespace std;

set<int> parseSet(const string& str) {
    string element;
    set<int>sliced;
    stringstream ss(str);
    while (ss >> element) {
        if (element == "{" || element == "}") {
            continue;
        }
        sliced.insert(stoi(element));
    }
    return sliced;
}
void print(const set<int>&set) {
    cout << "{ ";
    for (auto it = set.begin(); it != set.end(); it++) {
        cout << (*it) << ' ';
    }
    cout << "}" << endl;
}
set<int> getIntersection(const set<int>& set0, const set<int>& set1) {
    set<int>intersection;
    set_intersection(begin(set0), end(set0), begin(set1), end(set1), inserter(intersection, begin(intersection)));
    return intersection;
}
set<int> getUnion(const set<int>& set0, const set<int>& set1) {
    set<int>merged;
    set_union(begin(set0), end(set0), begin(set1), end(set1), inserter(merged, begin(merged)));
    return merged;
}
set<int> getDifference(const set<int>& set0, const set<int>& set1) {
    set<int>difference;
    set_difference(begin(set0), end(set0), begin(set1), end(set1), inserter(difference, begin(difference)));
    return difference;
}