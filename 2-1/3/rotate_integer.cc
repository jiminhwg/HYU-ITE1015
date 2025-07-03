#include <iostream>
using namespace std;

void rotateLeft(int* pa, int* pb, int* pc) {
    int temp = *pa;
    *pa = *pb;
    *pb = *pc;
    *pc = temp;
}
void rotateRight(int* pa, int* pb, int* pc) {
    int temp = *pc;
    *pc = *pb;
    *pb = *pa;
    *pa = temp;
}

int main(void) {
    int a = 10;
    int b = 20;
    int c = 30;
    //start
    while (true){
        cout << a << " " << b << " " << c << endl;
        int input;
        cin >> input;

        if (input == 1) {
            rotateLeft(&a,&b,&c);
        }
        else if (input == 2) {
            rotateRight(&a,&b,&c);
        }
        else {
            break;
        }
    }

}