#include "intset.h"
#include <iostream>
using namespace std;

int main() {
    IntegerSet intset;
    string command;
    int number;
    vector<int>vtr;
    while (true) {
        cin >> command;
        if (command == "quit") {
            break;
        }
        else {
            cin >> number;
            if (command == "add") {
            intset.AddNumber(number);
            vtr = intset.GetAll();
            for (int i = 0; i<vtr.size(); i++) {
                cout << vtr[i] << " ";
            }
            cout << endl;
            }
            else if (command == "del") {
                intset.DeleteNumber(number);
                vtr = intset.GetAll();
                for (int i = 0; i<vtr.size(); i++) {
                    cout << vtr[i] << " ";
                }
                cout << endl;
            }
            else if (command == "get") {
                cout << intset.GetItem(number) << endl;
            }

        }
        
    }
}