#include <iostream>
using namespace std;

template <typename T>
void myswap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int a,b;
    cin >> a >> b;
    myswap<int>(a,b);
    cout << "After calling myswap(): " << a << " " << b << endl; 

    double i,j;
    cin >> i >> j;
    myswap<double>(i,j);
    cout << "After calling myswap(): " << i << " " << j << endl; 

    string m,n;
    cin >> m >> n;
    myswap<string>(m,n);
    cout << "After calling myswap(): " << m << " " << n << endl; 

}


