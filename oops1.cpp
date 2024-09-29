#include<bits/stdc++.h>
using namespace std;
class BankAccount;
class FriendFunction{
    public:
    void transferFunds(BankAccount &A1, BankAccount &A2);
};
class BankAccount{
    string accountName;
    int accountNumber;
    double balance;
    public:
    BankAccount(){
        balance=0.0;
    }
    BankAccount(string accountName,int accountNumber,double balance){
        this->accountName=accountName;
        this->accountNumber=accountNumber;
        this->balance=balance;
    }
    BankAccount(double b){
        balance=b;
    }
    friend void FriendFunction :: transferFunds(BankAccount&A1,BankAccount&A2);
    void printBalnce(){
        cout<<"Balance:"<<balance<<endl;
    }
};
void FriendFunction :: transferFunds(BankAccount&A1,BankAccount&A2){
    A2.balance+=A1.balance;
    A1.balance=0.0;
}
int main(){
    BankAccount A1(5000);
    BankAccount A2(6000);
    FriendFunction F1;
    cout<<"Before Transaction:"<<endl;
    A1.printBalnce();
    A2.printBalnce();
    F1.transferFunds(A1,A2);
    cout<<"\nAfter transfer:"<<endl;
    A1.printBalnce();
    A2.printBalnce();
    return 0;
}



