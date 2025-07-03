#include "message.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    MessageBook msg;
    string command, element;
    while (true) {
        string* split_string = new string[100];
        int index = 0;
        getline(cin, command);
        stringstream ss(command);
        
        while (ss >> element) {
            split_string[index] = element;
            index++;
        }
        if (split_string[0] == "add") {
            string message;
            for (int i = 2; i < index; i++) {
                message += split_string[i];
                message += ' ';
            }
            msg.AddMessage(stoi(split_string[1]),message);
        }
        else if (split_string[0] == "delete") {
            msg.DeleteMessage(stoi(split_string[1]));
        }
        else if (split_string[0] == "print") {
            cout << msg.GetMessage(stoi(split_string[1])) << endl;
        }
        else if (split_string[0] == "list") {
            vector<int>vtr = msg.GetNumbers();
            sort(vtr.begin(), vtr.end());
            for (int i = 0; i < vtr.size(); i++) {
                cout << vtr[i] <<": " << msg.GetMessage(vtr[i]) << endl;
            }
        }
        else if (split_string[0] == "quit") {
            break;
        }
        delete[] split_string;
    }
}