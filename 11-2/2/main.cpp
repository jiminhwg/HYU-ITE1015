#include "my_vector2.h"
#include <iostream>

using namespace std;

int main() {
    string command;
    int length, numbers;
    cin >> command >> length;
    MyVector2 myvector2(length);
    MyVector2 a(length);
    MyVector2 b(length);

  
    cout << "enter a" << endl;
    cin >> a;
    cout << "enter b" << endl;
    cin >> b;

    while (true) {
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
                        MyVector2 Str = a + b;
                        cout << Str;
                    }
                    else if (type1 == "a" && type2 == "a") {
                        MyVector2 Str = a + a;
                        cout << Str;
                    }
                    else if (type1 == "b" && type2 == "b") {
                        MyVector2 Str = b + b;
                        cout << Str;
                    }
                }
                else if (op == '-') {
                    if (type1 == "a" && type2 == "b") {
                        MyVector2 Str = a - b;
                        cout << Str;
                    }
                    else if (type1 == "b" && type2 == "a") {
                        MyVector2 Str = b - a;
                        cout << Str;
                    }
                    else if (type1 == "a" && type2 == "a") {
                        MyVector2 Str = a - a;
                        cout << Str;
                    }
                    else if (type1 == "b" && type2 == "b") {
                        MyVector2 Str = b - b;
                        cout << Str;
                    }
                }
            }
            else { //if number
                int num = stoi(type2);
                if (op == '+') {
                    if ((type1 == "a")) {
                        MyVector2 Str = a + num;
                        cout << Str;
                    }
                    else if (type1 == "b" ) {
                        MyVector2 Str = b + num;
                        cout << Str;
                    }
                }
                else if (op == '-') {
                    if (type1 == "a") {
                        MyVector2 Str = a - num;
                        cout << Str;
                    }
                    else if (type1 == "b") {
                        MyVector2 Str = b - num;
                        cout << Str;
                        
                    }
                }
            }
        }
    }
}