class Number {
    protected:
        int _num;
    public:
        void setNumber(int num) {
            _num = num;
        }
        int getNumber() {
            return _num;
        }
};

class Square: public Number {
    public: 
        int getSquare(); //implemented to return the number specified by setNumber()
};

class Cube: public Square {
    public: 
        int getCube(); //implemneted to return the cube specified by setNumber()
};