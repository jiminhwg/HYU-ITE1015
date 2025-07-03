#include <iostream>
using namespace std;

typedef struct {
    string name;
    double score;
} Person;

int main(int argc, char *argv[]) {
    int N = atoi(argv[1]);
    Person* Array = new Person[N];

    for (int i = 2; i <= (N*2); i+=2) {
        Array[(i-2)/2].name = argv[i]; 
        Array[(i-2)/2].score = atof(argv[i+1]);
    }
    for (int i = 2; i <= (N*2); i+=2) {
        cout << "Name:" << Array[(i-2)/2].name << ", Score:" << Array[(i-2)/2].score << endl;
    }
    delete[] Array;

}