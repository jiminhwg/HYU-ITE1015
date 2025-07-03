#include <iostream>
#include "accounts.h"
using namespace std;


void AccountManager::New() {
    if (num_of_accounts <10) {
        cout << "Account for user " << num_of_accounts << " registered" << endl;
        cout << "Balance of user " << num_of_accounts << ": 0" << endl;
        num_of_accounts++;
    }
    else {
        cout << "Maximum number of accounts exceeded" << endl;
    }
    
}

string AccountManager::deposit(int ID, int Damount) {
    if (num_of_accounts == 0 || ID >= num_of_accounts) {
        cout << "Account does not exist" << endl;
        return "error";
    }
    else {
        if (check_bal(ID)+ Damount <= 1000000) {
            accounts[ID].setBalance(Damount, "D");
            cout << "Success: Deposit to user " << ID << " " << Damount << endl;
            for (int i = 0; i < num_of_accounts; i++) {
                cout << "Balance of user " << i << ": " << check_bal(i) << endl;
            }
            return "0";
        }
        else {
            cout << "Failure: Deposit to user " << ID << " " << Damount << endl;
            for (int i = 0; i < num_of_accounts; i++) {
                cout << "Balance of user " << i << ": " << check_bal(i) << endl;
            }
            return "error";
        }

    }
}

string AccountManager::withdraw(int ID, int Wamount) {
    if (num_of_accounts == 0 || ID >= num_of_accounts) {
        cout << "Account does not exist" << endl;
        return "error";
    }
    else {
        if (Wamount > check_bal(ID)) {
            cout << "Failure: Withdraw from user " << ID << " " << Wamount << endl;
            for (int i = 0; i < num_of_accounts; i++) {
                cout << "Balance of user " << i << ": " << check_bal(i) << endl;
            }
            return "error";
        }
        else {
            accounts[ID].setBalance(Wamount, "W");
            cout << "Success: Withdraw from user " << ID << " " << Wamount << endl;
            for (int i = 0; i < num_of_accounts; i++) {
                cout << "Balance of user " << i << ": " << check_bal(i) << endl;
            }
            return "0";
        }
    }
}

string AccountManager::transfer(int ID1, int ID2, int Tamount) {
    if (num_of_accounts == 0 || (ID1 >= num_of_accounts||ID2 >= num_of_accounts)) {
        cout << "Account does not exist" << endl;
        return "error";
    }
    else {
        if (check_bal(ID1) < Tamount) {
            cout << "Failure: Transfer from user " << ID1 << " to user " << ID2 << " " << Tamount << endl;
            for (int i = 0; i < num_of_accounts; i++) {
                cout << "Balance of user " << i << ": " << check_bal(i) << endl;
            }
            return "error";
        }
        else {
            accounts[ID1].setBalance(Tamount, "T1");
            accounts[ID2].setBalance(Tamount, "T2");
            cout << "Success: Transfer from user " << ID1 << " to user " << ID2 << " " << Tamount << endl;
            for (int i = 0; i < num_of_accounts; i++) {
                cout << "Balance of user " << i << ": " << check_bal(i) << endl;
            }
            return "0";
        }   
    }

}
int AccountManager::check_bal(int ID) {
    return accounts[ID].getBalance();
}