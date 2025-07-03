class Shape {
    public:
        Shape();
        Shape(int x, int y, int width, int height, char brush);
        double GetArea() {};
        int GetPerimeter() {};
        void Draw(int canvas_width, int canvas_height) {};
    protected:
        char _brush;
        int _x, _y; //top-left x&y, top-center x&y
        int _width, _height; //rect & square, rect, diamond
        int _canvas_width, _canvas_height; //canvas size
};

class Square: public Shape{ 
    public:    
        Square(int x, int y, int width, int height, char brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
};

class Rectangle: public Shape {
    public:    
        Rectangle(int x, int y, int width, int height, char brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
};

class Diamond: public Shape {
    public:    
        Diamond(int x, int y, int width, int height, char brush);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
};
