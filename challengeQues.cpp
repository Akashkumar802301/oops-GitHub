#include <iostream>
using namespace std;

class BankAccount {
protected:
    const long long accountNO;
    static int MIN_HIGH_VALUE;
    double accountBalance;

public:
    static int totalNoOfAccounts;

    BankAccount() : accountNO(totalNoOfAccounts + 188888000000) {
        totalNoOfAccounts++;
        accountBalance = 0;
    }

    BankAccount(double accountBalance) : accountNO(totalNoOfAccounts + 188888000000) {
        totalNoOfAccounts++;
        this->accountBalance = accountBalance;
    }

    void depositMoney(double money) {
        accountBalance += money;
    }

    void withdrawMoney(double money) {
        if (accountBalance < money) {
            cout << "Insufficient Balance" << endl;
            cout << "Your balance is : " << accountBalance << endl;
        } else {
            accountBalance -= money;
        }
    }

    void display() const {
        cout << "Your account no is : " << accountNO << endl;
        cout << "Your account balance is : " << accountBalance << endl;
    }

    bool isHighValuePerson() const {
        return accountBalance >= MIN_HIGH_VALUE;
    }
};

int BankAccount::totalNoOfAccounts = 0;
int BankAccount::MIN_HIGH_VALUE = 1000;

class Bank {
public:
    BankAccount* account[50];

    Bank() {
        // Initialize account pointers to nullptr
        for (int i = 0; i < 50; ++i) {
            account[i] = nullptr;
        }
    }

    void addAccount(double money) {
        if (BankAccount::totalNoOfAccounts < 50) { // Check bounds
            account[BankAccount::totalNoOfAccounts] = new BankAccount(money);
        } else {
            cout << "Maximum accounts limit reached!" << endl;
        }
    }

    void displayHighValueAccount() const {
        for (int i = 0; i < BankAccount::totalNoOfAccounts; i++) {
            if (account[i] != nullptr && account[i]->isHighValuePerson()) {
                account[i]->display();
            }
        }
    }

    ~Bank() {
        for (int i = 0; i < 50; ++i) {
            delete account[i]; // Release allocated memory
        }
    }
};

int main() {
    Bank b1;
    b1.addAccount(300);

    Bank b2;
    b2.addAccount(1100);
    b2.displayHighValueAccount();

    Bank b3;
    b3.addAccount(1300);
    b3.displayHighValueAccount();

    return 0;
}