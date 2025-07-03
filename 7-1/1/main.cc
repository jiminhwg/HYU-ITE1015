#include "sorted.h"
#include <iostream>

using namespace std;

int main() {
    SortedArray sort;
    string input;
    vector<int>sorted;
    int max, min;
    while (true) { //making first vector
        cin >> input;
        if (isdigit(input[0]) == true) {
            sort.AddNumber(stoi(input));
        }
        else {
            if (input == "ascend") {
                sorted = sort.GetSortedAscending();
                for (int i = 0; i<sorted.size(); i++) {
                    cout << sorted[i] << " ";
                }
                cout << endl;
            }
            else if (input == "descend") {
                sorted = sort.GetSortedDescending();
                for (int i = 0; i<sorted.size(); i++) {
                    cout << sorted[i] << " ";
                }
                cout << endl;
            }
            else if (input == "max") {
                max = sort.GetMax();
                cout << max << endl;
            }
            else if (input == "min") {
                min = sort.GetMin();
                cout << min << endl;
            }
            else if (input == "quit") {
                break;
            }
            
        }
    }
    
}