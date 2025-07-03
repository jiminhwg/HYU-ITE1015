#include "canvas.h"
#include <iostream>
using namespace std;


// Canvas ------------------------------------------------------------------------------------------------
Canvas::Canvas(size_t row, size_t col) {
    canvasData.resize(row, vector<char>(col, '.')); 
}

Canvas::~Canvas() {
}

void Canvas::Resize(size_t w, size_t h) {
    canvasData.clear();
    canvasData.resize(h, vector<char>(w, '.'));
}

bool Canvas::DrawPixel(int x, int y, char brush) {
    if (x >= 0 && x < canvasData[0].size() && y >= 0 && y < canvasData.size()) {
        canvasData[y][x] = brush;
        return true;
    } else {
        return false;
    }
}

void Canvas::Print() {
    cout << " ";
    for (size_t colIndex = 0; colIndex < canvasData[0].size(); ++colIndex) {
        cout << colIndex % 10;
    }
    cout << endl;

    for (size_t rowIndex = 0; rowIndex < canvasData.size(); ++rowIndex) {
        cout << rowIndex % 10; 
        for (size_t colIndex = 0; colIndex < canvasData[rowIndex].size(); ++colIndex) {
            cout << canvasData[rowIndex][colIndex];
        }
        cout << endl;
    }

}


void Canvas::Clear() {
    for (auto& row : canvasData) {
        fill(row.begin(), row.end(), '.');
    }
}


//Rectangle ------------------------------------------------------------------------------------------------
Rectangle::Rectangle(int x, int y, int width, int height, char brush) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
    _brush = brush;
}

void Rectangle::Draw(Canvas* canvas) {
    for (int y = _y; y < _y + _height; y++) {
        for (int x = _x; x < _x + _width; x++) {
            canvas->DrawPixel(x, y, _brush);
        }
    }
}
    
void Rectangle::PrintInfo() {
     cout << "rect " << _x << " " << _y << " " << _width << " " << _height << " " << _brush << endl;
}



//UpTriangle  ------------------------------------------------------------------------------------------------
UpTriangle::UpTriangle(int x, int y, int width, int height, char brush, size_t canvas_width, size_t canvas_height) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
    _brush = brush;
    _canvas_width = canvas_width;
    _canvas_height = canvas_height;
}
void UpTriangle::Draw(Canvas* canvas) {
    int row = (_height*2)+1; 
    for (int height = 0; height < _canvas_height; height++) {
        for (int width = 0; width < _canvas_width; width++) {
            if (_y <= height && height <= _y+(row/2)) { //upperhalf
                if (_x  - (height - _y) <=width && _x  + (height - _y) >= width) { //print
                    canvas->DrawPixel(width, height, _brush);;
                } 
            } 
        }
    }
}

void UpTriangle::PrintInfo() {
     cout << "tri_up " << _x << " " << _y << " " << _width << " " << _brush << endl;
}



//DownTriangle  ------------------------------------------------------------------------------------------------
DownTriangle::DownTriangle(int x, int y, int width, int height, char brush, size_t canvas_width, size_t canvas_height) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
    _brush = brush;
    _canvas_width = canvas_width;
    _canvas_height = canvas_height;
}
void DownTriangle::Draw(Canvas* canvas) {
    for (int y = 0; y < _height; y++) {
        for (int x = _x - y; x <= _x + y; x++) {
            canvas->DrawPixel(x, _y - y, _brush);
        }
    }
}

void DownTriangle::PrintInfo() {
     cout << "tri_down " << _x << " " << _y << " " << _width << " " << _brush << endl;
}



//Diamond  ------------------------------------------------------------------------------------------------
Diamond::Diamond(int x, int y, int width, int height, char brush, size_t canvas_width, size_t canvas_height) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
    _brush = brush;
    _canvas_width = canvas_width;
    _canvas_height = canvas_height;
}

void Diamond::Draw(Canvas* canvas) {
    int halfWidth = _width / 2;
    int halfHeight = _height / 2;

    for (int y = 0; y < _height; y++) {
        for (int x = 0; x < _width; x++) {
            int distanceX = abs(x - halfWidth);
            int distanceY = abs(y - halfHeight);

            if (distanceX + distanceY <= halfWidth) {
                int canvasX = _x - halfWidth + x + (_width % 2 == 0 ? 1 : 0);
                int canvasY = _y - halfHeight + y + (_height % 2 == 0 ? 1 : 0);

                if (canvasX >= 0 && canvasX < _canvas_width && canvasY >= 0 && canvasY < _canvas_height) {
                    canvas->DrawPixel(canvasX, canvasY, _brush);
                }
            }
        }
    }
}

void Diamond::PrintInfo() {
     cout << "diamond " << _x << " " << _y << " " << _width << " " << _brush << endl;
}
