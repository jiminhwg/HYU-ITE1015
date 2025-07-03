#include <iostream> 
using namespace std;

typedef struct {
    int xpos;
    int ypos;
} Point;

Point getScale2xPoint(const Point* p) {
    Point p2;
    p2.xpos = p->xpos * 2;
    p2.ypos = p->ypos * 2;
    return p2;
}

void swapPoints (Point* p1, Point* p2) {
    Point temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main (void) {
    Point p1;
    cin >> p1.xpos >> p1.ypos;

    cout << "Calling getScale2xPoint()" << endl;
    cout << "P1 : " << p1.xpos << " " << p1.ypos << endl;
    Point p2 = getScale2xPoint(&p1);
    cout << "P2 : " << p2.xpos << " " << p2.ypos << endl;

    cout << "Calling swapPoint()" << endl;
    swapPoints(&p1, &p2);
    cout << "P1 : " << p1.xpos << " " << p1.ypos << endl;
    cout << "P2 : " << p2.xpos << " " << p2.ypos << endl;

}