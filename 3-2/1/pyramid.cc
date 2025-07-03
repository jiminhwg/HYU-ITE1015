#include <iostream>
using namespace std;

int main() {
    int ptype, pheight;
    cout << "Input: ";
    cin >> ptype;
    cout << "Height: ";
    cin >> pheight;

    if (ptype == 1){ //increasing
        for (int i = 0; i < pheight; i++) {
            for (int j = 0; j < i+1; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else if (ptype == 2) { //decreasing
        for (int i = pheight; i > 0; i--) {
            for (int j = i; j > 0; j--) {
                cout << "*";
            }
            cout << "\n";
        }
    }
    else if (ptype == 3) { //both
        for (int i = 1; i < pheight; i++) {
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << "\n";
        } 
        for (int i = pheight; i > 0; i--) {
            for (int j = i; j > 0; j--) {
                cout << "*";
            }
            cout << "\n";
        }

    }
}