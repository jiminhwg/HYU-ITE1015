class Shape {
    public:
        Shape(double width, double height);
        virtual void getArea() const = 0;
    protected:
        double _width, _height, _area;
};

class Rectangle: public Shape {
    public:
        Rectangle(double width, double height): Shape(width, height) {};
        virtual void getArea() const override;

};

class Triangle: public Shape {
    public:
        Triangle(double width, double height): Shape(width, height){};
        virtual void getArea() const override;
};