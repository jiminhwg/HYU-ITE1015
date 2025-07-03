#include "shapes.h"
#include <iostream>
using namespace std;

int main() {
    int canvas_width, canvas_height, x, y, width, height;
    char brush;
    string command;
    cin >> canvas_width >> canvas_height; //canvas size
    while (true) {
        cin >> command;
        if (command == "quit") {
            break;
        }
        else {
            if (command == "rect") {
                cin >> x >> y >> width >> height >> brush;
                Rectangle rect(x, y, width, height, brush);
                rect.Draw(canvas_width, canvas_height);
            }
            else if (command == "square") {
                cin >> x >> y >> width >> brush;
                Square square(x, y, width, width, brush);
                square.Draw(canvas_width, canvas_height);
            }
            else if (command == "diamond") {
                cin >> x >> y >> width >> brush;
                Diamond dia(x, y, width, width, brush);
                dia.Draw(canvas_width, canvas_height);
            }
        }
    }
}