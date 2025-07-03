#include "rect.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int width, int height) {
    _width = width;
    _height = height;
}
int Rectangle::getArea() {
    int area = _width*_height;
    return area;
}
int Rectangle::getPerimeter() {
    int perimeter = (_width+_height)*2;
    return perimeter;
}

Square::Square(int width): Rectangle(width, width){
    print();
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}
void Square::print() {
    cout << _width << "x" << _height << " Square" << endl;
}

NonSquare::NonSquare(int width, int height): Rectangle(width, height) {
    print();
    cout << "Area: " << getArea() << endl;
    cout << "Perimeter: " << getPerimeter() << endl;
}
void NonSquare::print() {
    cout << _width << "x" << _height << " NonSquare" << endl;
}