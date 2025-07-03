class Rectangle {
    public:
        Rectangle(int width, int height); //implement to store necessary data as member variables
        int getArea(); //returns the area of this rectangle
        int getPerimeter(); //returns the perimeter of this rectangle
    protected:
        int _width;
        int _height;
};

class Square: public Rectangle {
    public: 
        Square(int width); //implement to call the parent class's constructor properly
        void print(); //print out information about this object (ex. '5x5' square)
};

class NonSquare: public Rectangle {
    public:
        NonSquare(int width, int height); //implement to call the parent class's constructor properly
        void print(); //print out information about this object (ex. '2x7' NonSqaure)
};