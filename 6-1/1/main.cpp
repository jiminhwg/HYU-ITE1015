#include <iostream>
#include <sstream>
#include "shapes.h"
using namespace std;

int main() {
    Circle circle;
    Rectangle rectangle;
    string list, element;
    int x, y, radius, corner1, corner2;
    while (true) {
        string* split_string = new string;
        int index = 0;
        cout << "shape?" << endl;
        getline(cin, list);
        stringstream ss(list);
        
        while (ss >> element) {
            split_string[index] = element;
            index++;
        }

        if (split_string[0] == "Q") {
            break;
        }
        else if (split_string[0] == "C") {
            x = stoi(split_string[1]);
            y = stoi(split_string[2]);
            radius = stoi(split_string[3]);
            cout << "area: " << circle.carea(radius) << ", perimeter: " << circle.cperimeter(radius) << endl;
        }
        else if (split_string[0] == "R") {
            x = stoi(split_string[1]);
            y = stoi(split_string[2]);
            corner1 = stoi(split_string[3]);
            corner2 = stoi(split_string[4]);
            cout << "area: " << rectangle.rarea(x,y,corner1,corner2) << ", perimeter: " << rectangle.rperimeter(x,y,corner1,corner2) << endl;
        }
        delete split_string;
    }
        
    
}