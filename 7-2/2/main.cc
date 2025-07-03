#include "setfunc.h" 
#include <iostream>

using namespace std;

int main() {
    while(true) {
        string input, firsthalf, secondhalf;
        int location;
        char op;
        set<int> set1,set2;
        getline(cin, input);
        if (input[0] == '0') { //quit
            break;
        }
        else {
            for(int i = 1; i < input.length()-1; i++) { //firsthalf
                if (input[i] == '}'){
                    location = i+2;
                    op = input[location];
                    break;
                }
                else { //after finding operation
                    firsthalf += (input[i]);
                }
            }

            for(int i = location+3; i < input.length()-1; i++) { //secondhalf
                secondhalf += input[i];
            }

            set1 = parseSet(firsthalf);
            set2 = parseSet(secondhalf);

            if (op == '+') {
                print(getUnion(set1, set2));
            }
            else if (op == '-') {
                print(getDifference(set1, set2));
            }
            else if (op == '*') {
                print(getIntersection(set1, set2)); 
            }
        }
        
    }
}

