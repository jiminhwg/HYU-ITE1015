#include "my_string2.h"
#include <iostream>

using namespace std;

int main() { 
    string command;
    cin >> command;

    MyString2 a, b;
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    while (true) {
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
                    MyString2 Str = a + b;
                    cout << Str;
                }
                else if (type1 == "b") {
                    MyString2 Str = b + a;
                    cout << Str;
                }
            }
            else if (op == '*') {
                cin >> num;
                if (type1 == "a") {
                    MyString2 Str = a * num;
                    cout << Str;
                }
                else if (type1 == "b") {
                    MyString2 Str = b * num;
                    cout << Str;
                }
            }
        }
    }
}