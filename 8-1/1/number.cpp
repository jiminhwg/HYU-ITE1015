#include "number.h"
#include <iostream>
using namespace std;

int Square::getSquare() {
    cout << "getNumber(): " << getNumber() << endl;
    int squared = _num*_num;
    return squared;
} //implemented to return the number specified by setNumber()

int Cube::getCube() {
    int square = getSquare();
    cout << "getSquare(): " << square << endl;
    int cubed = _num*_num*_num;
    return cubed;
} //implemeneted to return the cube specified by setNumber()