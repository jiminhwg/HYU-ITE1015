#include <iostream>
using namespace std;

typedef struct {
    string name;
    int age;
} Person;

int main(void) {
    int N;
    cin >> N;
    Person* Array = new Person[N]; //array length
    for (int i = 0; i < N; i++) {
        cin >> Array[i].name;
        cin >> Array[i].age;
    }
    for (int i = 0; i < N; i++) {
        cout << "Name:" << Array[i].name << ", Age:" << Array[i].age << endl;
    }

    delete[] Array;
    return 0;
}

