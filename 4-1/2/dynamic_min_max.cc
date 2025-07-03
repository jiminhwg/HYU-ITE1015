#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;

    int* array_N = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> array_N[i];
    }
    //sort
    sort(array_N, array_N + N);
    
    cout << "min: " << array_N[0] << endl;
    cout << "max: " << array_N[N-1] << endl;

    delete[] array_N;
    return 0;
}