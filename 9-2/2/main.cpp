#include <iostream>
#include "canvas.h"

using namespace std;

int main() {
    size_t canvas_width, canvas_height;
    cin >> canvas_width >> canvas_height; //canvas size
    Canvas canvas(canvas_width, canvas_height);
    canvas.Print();

    vector<Shape*> shapes;
    while (true) {
        int x, y, width, height, newwidth, newheight, shape_index;
        char brush;
        string command, shape_type;

        cin >> command;
        if (command == "quit") {
            break;
        }
        else {
            if (command == "add") {
                cin >> shape_type;
                if (shape_type == "rect") {
                    cin >> x >> y >> width >> height >> brush;
                    Rectangle* rect = new Rectangle(x, y, width, height, brush);
                    shapes.push_back(rect);
                }
                else if (shape_type == "tri_up") {
                    cin >> x >> y >> width >> brush;
                    UpTriangle* tri_up = new UpTriangle(x, y, width, height, brush, canvas_width, canvas_height);
                    shapes.push_back(tri_up);                    
                }
                else if (shape_type == "tri_down") {
                    cin >> x >> y >> width >> brush;
                    DownTriangle* tri_down = new DownTriangle(x, y, width, height, brush, canvas_width, canvas_height);
                    shapes.push_back(tri_down);
                }
                else if (shape_type == "diamond") {
                    cin >> x >> y >> width >> brush;
                    Diamond* dia = new Diamond(x, y, width, height, brush, canvas_width, canvas_height);
                    shapes.push_back(dia);
                }
            }
            else if (command == "delete") { 
                cin >> shape_index;
                if (shape_index >= 0 && shape_index < shapes.size()) {
                    delete shapes[shape_index];
                    shapes.erase(shapes.begin() + shape_index);
                }
            }
            else if (command == "draw") {
                canvas.Clear();
                for (Shape* shape : shapes) {
                    shape->Draw(&canvas);
                }
                canvas.Print();
            }
            else if (command == "dump") { 
                for (size_t i = 0; i < shapes.size(); ++i) {
                    cout << i << " ";
                    shapes[i]->PrintInfo();
                }
            }
            else if (command == "resize") {
                cin >> newwidth >> newheight;
                canvas.Resize(newwidth, newheight);
            }
        }
    }
    for (Shape* shape : shapes) {
        delete shape;
    }
}