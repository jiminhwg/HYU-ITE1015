class Circle {
    private:
        int radius_;
        double area_;
        double perimeter_;
    public:
        double carea(int radius);
        double cperimeter(int radius);
};
class Rectangle {
    private:
        int x_, y_, corner1_, corner2_;
        int area_;
        int perimeter_;
    public:
        int rarea(int x, int y, int corner1, int corner2);
        int rperimeter(int x, int y, int corner1, int corner2);
};
