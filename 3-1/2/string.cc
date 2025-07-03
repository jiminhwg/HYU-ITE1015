#include <iostream>
using namespace std;

int main(void) {
    string str1, str2, combined;
    cin >> str1;
    cin >> str2;
    combined = str1+str2;
    cout << combined << endl;
    cout << combined[0] << endl;
    cout << combined[combined.length()-1] << endl;
    return 0;
}