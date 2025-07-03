#include "shapes.h"
#include <iostream>
using namespace std;

Shape::Shape() {
}
Shape::Shape(int x, int y, int width, int height, char brush) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
    _brush = brush;
}

//Square
Square::Square(int x, int y, int width, int height, char brush): Shape(x, y, width, height, brush) {
    cout << "Area: " << GetArea() << endl;
    cout << "Perimeter: " << GetPerimeter() << endl;
}
double Square::GetArea() {
    return (double)_width*_height;
}
int Square::GetPerimeter() {
    return (_width+_height)*2;
}
void Square::Draw(int canvas_width, int canvas_height) {
    cout << " ";
    for (int i = 0; i < canvas_height; i++) {
        cout << i;
    }
    cout <<endl;
    for (int i = 0; i < canvas_height; i++) { //y = 0
        cout<< i;
        for (int j = 0; j < canvas_width; j++) { //x = 0
            if ((_y <= i && i < _y+_height) && (_x <= j && j < _x+_height)) {
                cout << _brush;
            }
            else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

//Rectangle
Rectangle::Rectangle(int x, int y, int width, int height, char brush): Shape(x, y, width, height, brush) {
    cout << "Area: " << GetArea() << endl;
    cout << "Perimeter: " << GetPerimeter() << endl;
}
double Rectangle::GetArea() {
    return (double)_width*_height;
}
int Rectangle::GetPerimeter() {
    return (_width+_height)*2;
}
void Rectangle::Draw(int canvas_width, int canvas_height) {
    cout << " ";
    for (int i = 0; i < canvas_height; i++) {
        cout << i;
    }
    cout <<endl;
    for (int i = 0; i < canvas_height; i++) { //y = 0
        cout<< i;
        for (int j = 0; j < canvas_width; j++) { //x = 0
            if ((_y <= i && i < _y+_height) && (_x <= j && j < _x+_width)) {
                cout << _brush;
            }
            else {
                cout << '.';
            }
        }
        cout << endl;
    }
}

//Diamond
Diamond::Diamond(int x, int y, int width, int height, char brush): Shape(x, y, width, height, brush) {
    cout << "Area: " << GetArea() << endl;
    cout << "Perimeter: " << GetPerimeter() << endl;
}
double Diamond::GetArea() {
    return (double)(_y*_y)/2;
}
int Diamond::GetPerimeter() {
    return ((_y/2)+1)*4;
}
void Diamond::Draw(int canvas_width, int canvas_height) {
    cout << " ";
    for (int i = 0; i < canvas_width; i++) {
        cout << i;
    }
    cout << endl;
    int row = (_height*2)+1; //5

    for (int height = 0; height < canvas_height; height++) {
        cout << height;
        for (int width = 0; width < canvas_width; width++) {
            if (_y <= height && height <= _y+(row/2)) { //upperhalf
                if (_x  - (height - _y) <=width && _x  + (height - _y) >= width) { //print
                //2-((7)-5) <= j          2+((7)-5)>=j
                //2 <=j                   2>=j      j == 2      //i = 5
                //1 <=j                   3>=j      j == 1 - 3  //i = 6
                //0 <=j                   4>=j      j == 0 - 4  //i = 7
                    cout << _brush;
                } 
                else {
                    cout << ".";
                }
            } 
            else if (_y + (row / 2) < height && height <= canvas_height) {
                int distanceY = height - (_y + (row / 2));
                int distanceX = abs(_x - width);
                if (distanceY <= row / 2 && distanceX <= row / 2 - distanceY) {
                    cout << _brush;
                } else {
                    cout << ".";
                }
            }
            else {
                cout << '.';
            }
        }
        cout << endl;
    }
}
