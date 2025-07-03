#include <iostream>
#include <sstream>
#include "accounts.h"
using namespace std;

int main () {
    AccountManager acc;
    string list, element;
    string* check_limitD = new string[100];
    string* check_limitW = new string[100];
    string* check_limitT = new string[100];
    while (true){
        //string input -> split string array
        string* split_string = new string[100];
        int index = 0;
        cout << endl;
        cout << "Job?" << endl;
        getline(cin, list);
        stringstream ss(list);
        
        while (ss >> element) {
            split_string[index] = element;
            index++;
        }
        //
        
        //start of main program
        if (split_string[0] == "N") {
            acc.New();
        }
        else if (split_string[0] == "D") {
            if (check_limitD[0] != "d") {
                string result = acc.deposit(stoi(split_string[1]), stoi(split_string[2]));
                if (result != "error")
                    check_limitD[0] = "d";
            }
            else {
                cout << "Limit Exceeded" << endl;
            }
        }
        else if (split_string[0] == "W") {
            if (check_limitW[0] != "w") {
                string result = acc.withdraw(stoi(split_string[1]), stoi(split_string[2]));
                if (result != "error")
                    check_limitW[0] = "w";
            }
            else {
                cout << "Limit Exceeded" << endl;
            }
        }
        else if (split_string[0] == "T") {
            if (check_limitT[0] != "t") {
                string result = acc.transfer(stoi(split_string[1]), stoi(split_string[2]), stoi(split_string[3]));
                if (result != "error")
                    check_limitT[0] = "t";
            }
            else {
                cout << "Limit Exceeded" << endl;
            }
        }
        else if (split_string[0] == "Q") {
            break;
        }
        delete[] split_string;
    }
    delete[] check_limitW;
    delete[] check_limitT;
    delete[] check_limitD;
}
