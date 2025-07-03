#include "shapes.h"
#include <iostream>

using namespace std;

Shape::Shape(double width, double height) {
    _width = width;
    _height = height;
}

void Rectangle::getArea() const {
    cout << _width*_height << endl;
}
void Triangle::getArea() const {
    cout << 0.5*_width*_height << endl;
}
