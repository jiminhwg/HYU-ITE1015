#include "my_string.h"
#include <iostream>

using namespace std;

int main() { 
    string command;
    cin >> command;

    MyString a, b;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    while (true) {
        MyString Str;
        string type1;
        char type2, op; //a or b
        int num;
        
        cin >> type1; //a or b
        if (type1 == "quit") {
            break;
        }
        else {
            cin >> op; //+ or *

            if (op == '+') {
                cin >> type2; //b
                if (type1 == "a") {
                    Str = a + b;
                    cout << Str;
                }
                else if (type1 == "b") {
                    Str = b + a;
                    cout << Str;
                }
            }
            else if (op == '*') {
                cin >> num;
                if (type1 == "a") {
                    Str = a * num;
                    cout << Str;
                }
                else if (type1 == "b") {
                    Str = b * num;
                    cout << Str;
                }
            }
        }
    }
}