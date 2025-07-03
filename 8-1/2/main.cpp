#include "rect.h"
#include <iostream>

using namespace std;

int main() {
    while (true) {
        int width, height;
        string command;
        cin >> command;

        if (command == "quit"){
            break;
        }
        else if (command == "square"){
            cin >> width;
            Square square(width);
        }
        else if (command == "nonsquare"){
            cin >> width >> height;
            NonSquare nonsquare(width, height);
        }
    }
}