#include <iostream>
using namespace std;
 
int add(int a, int b) {
    int sum = a+b;
    return sum;
}

string add (string a, string b) {
    string combined = a+"-"+b;
    return combined;
}

int main (void) {
    int num1, num2;
    string str1, str2;

    cin >> num1 >> num2 >> str1 >> str2;
    cout << add(num1, num2) << endl;
    cout << add(str1, str2) << endl;
    return 0;
}