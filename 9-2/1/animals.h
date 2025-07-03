#include <iostream>

class Animal {
    public:
        Animal(std::string name, int age);
        virtual void printInfo() const {};
    protected:
       std::string _name;
       int _age;
};

class Zebra: public Animal {
    public:
        Zebra(std::string name, int age, int numStripes);
        void printInfo() const override;
    private:
        int _numStripes;

};

class Cat: public Animal {
    public:
        Cat(std::string name, int age, std::string favoriteToy);
        void printInfo() const override;
    private:
        std::string _favoriteToy;
};