#include <iostream>
#include "my_container.h"

using namespace std;

int main() {
    int num_of_int;
    cin >> num_of_int;
    MyContainer<int> intContainer(num_of_int);
    cin >> intContainer;
    cout << intContainer;

    int num_of_real;
    cin >> num_of_real;
    MyContainer<double> doubleContainer(num_of_real);
    cin >> doubleContainer;
    cout << doubleContainer;

    int num_of_words;
    cin >> num_of_words;
    MyContainer<string> stringContainer(num_of_words);
    cin >> stringContainer;
    cout << stringContainer;
    
}