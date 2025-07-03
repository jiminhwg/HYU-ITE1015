#include <iostream>
using namespace std;

void getMinMax(int* arr, int len, int& min, int& max) {
    min = 0;
    max = 0;
    sort(arr, arr + len);
    min += arr[0];
    max += arr[len-1];
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        exit(1);
    }
    else {
        int min, max;
        int N = argc-1;
        int* Array = new int[N];
        for (int i = 0; i < N; i++) {
            Array[i] = atoi(argv[i+1]);
        }

        getMinMax(Array, N, min, max);
        
        cout << "min: " << min << endl;
        cout << "max: " << max << endl;

        delete[] Array;
        return 0;
    }
    
}