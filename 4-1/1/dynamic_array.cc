#include <iostream>
using namespace std;

int main (void) {
    int n;
    cin >> n;

    int* Array = new int[n];
    for (int i = 0; i < n; i++) {
        Array[i] = i;
    }
    for (int i = 0; i < n; i++) {
        cout << Array[i] << " ";
    }
    delete[] Array;
    return 0;
}