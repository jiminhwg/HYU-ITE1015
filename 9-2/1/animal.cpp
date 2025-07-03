#include <iostream>
#include "animals.h"
using namespace std;

Animal::Animal(string name, int age) {
    _name = name;
    _age = age;
};


Zebra::Zebra(string name, int age, int numStripes): Animal(name, age) {
    _numStripes = numStripes;
}
void Zebra::printInfo() const {
    cout << "Zebra, Name: " << _name << ", Age: " << _age << ", Number of stripes: " << _numStripes << endl;
}


Cat::Cat(string name, int age, string favoriteToy): Animal(name, age)  {
    _favoriteToy = favoriteToy;
}
void Cat::printInfo() const {
    cout << "Cat, Name: " << _name << ", Age: " << _age << ", Favorite toy: " << _favoriteToy << endl;
}
