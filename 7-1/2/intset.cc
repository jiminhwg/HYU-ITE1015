#include "intset.h"
#include <iostream>
#include <algorithm>
using namespace std;

IntegerSet::IntegerSet() {
    numbers_ = vector<int>();
}
IntegerSet::~IntegerSet() {
}
void IntegerSet::AddNumber(int num) {
    if (count(numbers_.begin(), numbers_.end(), num) == 0) {
        numbers_.push_back(num);
    }
}
void IntegerSet::DeleteNumber(int num) {
    if (count(numbers_.begin(), numbers_.end(), num) == 1) {
        auto number = find(numbers_.begin(), numbers_.end(), num);
        numbers_.erase(number);
    }
}
int IntegerSet::GetItem(int pos) {
    if (pos < numbers_.size()) {
        vector<int> sorted = GetAll();
        return sorted[pos];
    } 
    else {
        return -1;
    }
}
vector<int> IntegerSet::GetAll() {
    vector<int>sorted = numbers_;
    sort(sorted.begin(), sorted.end());
    return sorted;
}