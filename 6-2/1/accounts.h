using namespace std;

class Account {
private:
    int ID;
    int Balance = 0;

public:
    int getBalance() const {
        return Balance;
    }

    void setBalance(int bal, string word) {
        if (word == "D" || word == "T2") {
            Balance += bal;
        }
        else if (word == "W" || word == "T1") {
            Balance -= bal;
        }
    }
};

class AccountManager {
private:
    Account accounts[10];
    int num_of_accounts = 0;

public:
    void New();
    string deposit(int ID, int Damount);
    string withdraw(int ID, int Wamount);
    string transfer(int ID1, int ID2, int Tamount);
    int check_bal(int ID);
};