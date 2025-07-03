#include "my_vector.h"
#include <iostream>

using namespace std;

int main() {
    string command;
    int length, numbers;
    cin >> command >> length;
    MyVector myvector(length);
    MyVector a(length);
    MyVector b(length);

  
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    while (true) {
        MyVector Str;
        string type1, type2;
        char op; //a or b
        int num;
        
        cin >> type1; //a or b
        if (type1 == "quit") {
            break;
        }
        else {
            cin >> op; //+ or -
            cin >> type2; //int or b
            if (type2 == "b" || type2 == "a") { //a or b
                if (op == '+') {
                    if ((type1 == "a" && type2 == "b") || (type1 == "b" && type2 == "a")) {
                        Str = a + b;
                    }
                    else if (type1 == "a" && type2 == "a") {
                        Str = a + a;
                    }
                    else if (type1 == "b" && type2 == "b") {
                        Str = b + b;
                    }
                }
                else if (op == '-') {
                    if (type1 == "a" && type2 == "b") {
                        Str = a - b;
                    }
                    else if (type1 == "b" && type2 == "a") {
                        Str = b - a;
                    }
                    else if (type1 == "a" && type2 == "a") {
                        Str = a - a;
                    }
                    else if (type1 == "b" && type2 == "b") {
                        Str = b - b;
                    }
                }
            }
            else { //if number
                int num = stoi(type2);
                if (op == '+') {
                    if ((type1 == "a")) {
                        Str = a + num;
                    }
                    else if (type1 == "b" ) {
                        Str = b + num;
                    }
                }
                else if (op == '-') {
                    if (type1 == "a") {
                        Str = a - num;
                    }
                    else if (type1 == "b") {
                        Str = b - num;
                    }
                }
            }
            cout << Str;
        }
    }
}