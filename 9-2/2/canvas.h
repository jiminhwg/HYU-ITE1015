#include<iostream>


class Canvas
{
public:
    Canvas(size_t row, size_t col);
    ~Canvas();

    // Chnage this canvas size to w x h. Preserve already existing shapes on the canvas.
    void Resize(size_t w, size_t h);

    // Dot with the brush at (x, y). If (x, y) is outside of the canvas, just ignore it.
    bool DrawPixel(int x, int y, char brush);
    void Print();

    // Erase all (initialize with '.')
    void Clear();

private:
    std::vector<std::vector<char> > canvasData;
};

class Shape 
{
public:
    virtual ~Shape() {};
    virtual void Draw(Canvas* canvas) {};
    virtual void PrintInfo() {};
protected:
    int _x, _y, _width, _height;
    size_t _canvas_width, _canvas_height;
    char _brush;
};

class Rectangle : public Shape { 
    public:
        Rectangle(int x, int y, int width, int height, char brush);
        virtual void Draw(Canvas* canvas) override;
        virtual void PrintInfo() override;
        
};
class UpTriangle : public Shape {
    public:
        UpTriangle(int x, int y, int width, int height, char brush, size_t canvas_width, size_t canvas_height);
        virtual void Draw(Canvas* canvas) override;
        virtual void PrintInfo() override;
};
class DownTriangle : public Shape {
    public:
        DownTriangle(int x, int y, int width, int height, char brush, size_t canvas_width, size_t canvas_height);
        virtual void Draw(Canvas* canvas) override;
        virtual void PrintInfo() override;
};
class Diamond : public Shape {
    public:
        Diamond(int x, int y, int width, int height, char brush, size_t canvas_width, size_t canvas_height);
        virtual void Draw(Canvas* canvas) override;
        virtual void PrintInfo() override;
};

