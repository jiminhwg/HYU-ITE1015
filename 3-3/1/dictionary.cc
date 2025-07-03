#include <iostream>

using namespace std;

int main() {
    int n;
    string words;

    cin >> n;

    string array[n];

    for (int i = 0; i < n; i++) { //getting array inputs
        cin >> words;
        array[i] = words; 
    }
   
    for (int i = 0; i < n; i++) { //sorting array
        for (int j = 0; j < n-i-1; j++) {
            if (array[j] > (array[j+1])) {
                swap(array[j], array[j+1]);
            }
        }
    }

    for (int i = 0; i < n; i++) { //printing array
        cout << array[i] << endl;
    }
    
}