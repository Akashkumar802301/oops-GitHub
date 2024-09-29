#include<iostream>
using namespace std;

struct BankAccount {
    int accNo;
    string name;
    string address;
    char accType;
    float balance;

    BankAccount() {
        accNo = 0;
        name = "";
        address = "";
        accType = '\0';
        balance = 0.0;
    }

    void createAccount();
    void depositMoney();
    void withdrawMoney();
    void displayAccount();
    void modifyAccount();
};

void BankAccount::createAccount() {
    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Account Holder's Name: ";
    cin>>name;
    cout << "Enter Address: ";
    cin>>address;
    cout << "Enter Account Type (s for saving / c for current): ";
    cin >> accType;
    cout << "Enter Initial Deposit Amount: ";
    cin >> balance;
    cout << "Account created successfully!\n";
}

void BankAccount::depositMoney() {
    float amount;
    cout << "Enter Amount to Deposit: ";
    cin >> amount;
    balance += amount;
    cout << "Amount deposited successfully! New balance: " << balance << endl;
}

void BankAccount::withdrawMoney() {
    float amount;
    cout << "Enter Amount to Withdraw: ";
    cin >> amount;
    if (amount <= balance) {
        balance -= amount;
        cout << "Amount withdrawn successfully! Remaining balance: " << balance << endl;
    } else {
        cout << "Insufficient balance!\n";
    }
}

void BankAccount::displayAccount() {
    cout << "\nAccount Number: " << accNo;
    cout << "\nAccount Holder's Name: " << name;
    cout << "\nAddress: " << address;
    cout << "\nAccount Type: " << accType;
    cout << "\nCurrent Balance: " << balance << endl;
}

void BankAccount::modifyAccount() {
    cout << "Enter New Name: ";
    cin>>name;
    cout << "Enter New Address: ";
    cin>>address;
    cout << "Enter New Account Type (s for saving / c for current): ";
    cin >> accType;
    cout << "Account modified successfully!\n";
}

int main() {
    BankAccount accounts[5];
    int numAccounts = 0, accNo, choice;
    bool found;

    do {
        cout << "\n===== Banking Management System =====";
        cout << "\n1. Create Account";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Display Account Information";
        cout << "\n5. Modify Account Information";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if (numAccounts < 5) {
                    accounts[numAccounts].createAccount();
                    numAccounts++;
                } else {
                    cout << "Account limit reached! Cannot create more accounts.\n";
                }
                break;

            case 2:
                cout << "Enter Account Number: ";
                cin >> accNo;
                found = false;
                if (!found) {
                    cout << "Account not found!\n";
                }
                else {
                    for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].accNo == accNo) {
                        accounts[i].depositMoney();
                        found = true;
                        break;
                    }
                }
                }
                
                break;

            case 3:
                cout << "Enter Account Number: ";
                cin >> accNo;
                found = false;
                if (!found) {
                    cout << "Account not found!\n";
                }
                else {
                    for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].accNo == accNo) {
                        accounts[i].withdrawMoney();
                        found = true;
                        break;
                    }
                    }
                }
                break;

            case 4:
                cout << "Enter Account Number: ";
                cin >> accNo;
                found = false;
                if (!found) {
                    cout << "Account not found!\n";
                }
                else {
                    for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].accNo == accNo) {
                        accounts[i].depositMoney();
                        found = true;
                        break;
                    }
                    }
                }
                break;

            case 5:
                cout << "Enter Account Number: ";
                cin >> accNo;
                found = false;
                if (!found) {
                    cout << "Account not found!\n";
                }
                else {
                    for (int i = 0; i < numAccounts; i++) {
                    if (accounts[i].accNo == accNo) {
                        accounts[i].depositMoney();
                        found = true;
                        break;
                    }
                }
                }
                break;

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);
    return 0;

}
