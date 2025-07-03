#include <iostream>
#include "animals.h"
using namespace std;

int main() {
    vector<Animal*> animals;
    while (true) {
        char command;
        cin >> command;

        if (command == '0') {
            break;
        }
        else {
            string name, toy;
            int age, stripes;
            if (command == 'z') {
                cin >> name >> age >> stripes;
                Zebra* zeb = new Zebra(name, age, stripes);
                animals.push_back(zeb);
            }
            else if (command == 'c') {
                cin >> name >> age >> toy;
                Cat* cat = new Cat(name, age, toy);
                animals.push_back(cat);
            }
        }
    }   
    for (const auto& animal : animals) {
        animal->printInfo();
        delete animal;  // Deallocate memory
    }
}