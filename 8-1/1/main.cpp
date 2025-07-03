#include "number.h"
#include <iostream>
using namespace std;

int main() {
    Cube num;
    while (true) {
        int input;
        string command;
        cin >> command;

        if (command == "quit") {
            break;
        }
        else {
            cin >> input;
            num.setNumber(input);
            if (command == "number") {
                cout << "getNumber(): " << num.getNumber() << endl;
            }
            else if (command == "square") {
                int square = num.getSquare();
                cout << "getSquare(): "<< square << endl;
            }
            else if (command == "cube") {
                int cube = num.getCube();
                cout << "getCube(): "<< cube << endl;
            }
        }
        
        
    }
}