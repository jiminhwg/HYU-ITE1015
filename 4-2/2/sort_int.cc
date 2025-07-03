#include <iostream>
using namespace std;

void BubbleSort(int* Array, int n) { 
    for (int i = 0; i < n-1; i++) { 
        for (int j = 0; j < n-i-1; j++)  { 
            if (Array[j] > Array[j+1]) { 
                int temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;
            }
            else {
                continue;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    if (N <= 0) { //exit
        exit(1);
    }
    else { //program
        int* Array = new int[N];
        for (int i = 0; i < N; i++) {
            cin >> Array[i];
        }
        BubbleSort(Array, N);

        for (int i = 0; i < N; i++) {
            cout << Array[i] << " ";
        }
        
        delete[] Array;
    }


}
