#include <iostream>
#include "shapes.h"

using namespace std;

int main() {
    vector<Shape*> arr;
    while(true) {
        string command;
        int height, width;
        cin >> command;
        if (command == "0") {
            break;
        }
        else {
            if (command == "r") {
                cin >> width >> height;
                Rectangle* rect = new Rectangle(width, height);
                arr.push_back(rect);
            }
            else if (command == "t") {
                cin >> width >> height;
                Triangle* tri = new Triangle(width, height);
                arr.push_back(tri);
            }
        }
    }
    for (const auto& element : arr) {
        element->getArea();
        delete element;  // Deallocate memory
    }
}