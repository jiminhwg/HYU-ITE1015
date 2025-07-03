#include <iostream>
#include "shapes.h"
#define pi 3.14

double Circle::carea(int radius) {
    radius_ = radius;
    area_ = pi*radius_*radius_;
    return area_;
}
double Circle::cperimeter(int radius) {
    radius_ = radius;
    perimeter_ = 2*pi*radius_;
    return perimeter_;
}

int Rectangle::rarea(int x, int y, int corner1, int corner2) {
    x_ = x;
    y_ = y;
    corner1_ = corner1;
    corner2_ = corner2;
    area_ = (corner1-x)*(y-corner2);
    return area_;
}
int Rectangle::rperimeter(int x, int y, int corner1, int corner2) {
    x_ = x;
    y_ = y;
    corner1_ = corner1;
    corner2_ = corner2;
    perimeter_ = ((corner1-x)+(y-corner2))*2;
    return perimeter_;
}