#include <iostream>
using namespace std;

typedef struct {
    string name;
    int age;
} Person;

int main (void) {

Person array[3];

for (int i = 0; i < 3; i++) {
    cin >> array[i].name;
    cin >> array[i].age;
}

for (int j = 0; j < 3; j++) {
    cout << "Name:" << array[j].name << ", Age:" << array[j].age << endl;
}
return 0;
}