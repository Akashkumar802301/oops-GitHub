#include<iostream>
using namespace std;
class BankAccount{
    private:
    static int nextAccountNum;
    double Accountbalance;
    int AccountNum;
    public:
    int totalAccount;
    int MIN_HIGH_VALUE;
    int initialBalance;
    BankAccount(){
        MIN_HIGH_VALUE=1000;
        initialBalance=0;
        totalAccount=0;
        AccountNum=nextAccountNum;
        nextAccountNum++;
    }
    BankAccount(int AccountNum,double Accountbalance,int nextAccountNum){
        this->AccountNum=AccountNum;
        this->Accountbalance=Accountbalance;
        this->nextAccountNum=nextAccountNum;
    }
    static int getAccountNum(){
        return nextAccountNum;
    }
    int getTotalAccount(){
        totalAccount++;
        return totalAccount;
    }
    double getDeposit(double amount){
        Accountbalance+=amount;
        return Accountbalance;
    }
    double getWithdrawl(double amount){
        Accountbalance-=amount;
        if(Accountbalance>MIN_HIGH_VALUE){
            return Accountbalance;
        }
        else {
            cout<<"\nInsufficient Balance"<<" ";
        }
    }
    void display(){
        cout<<"\nAccount Number:"<<AccountNum;
        cout<<"\nAccount Balance:"<<Accountbalance;
        cout<<"\nTotal Account:"<<totalAccount;
    }
    bool isHighValueAccount(){
        if(Accountbalance>=MIN_HIGH_VALUE){
            return true;
        }
        else return false;
    }
};
int BankAccount :: nextAccountNum=100;
class Bank : public BankAccount{
    private:
    BankAccount obj[200];
    static int numAccount;
    public:
    Bank(){
        numAccount=0;
    }
    Bank(long long AccountNum,double Accountbalance,long long nextAccountNum,int numAccount):BankAccount(AccountNum,Accountbalance,nextAccountNum){
        this->numAccount=numAccount;
        this->numAccount=numAccount;        
    }
    void addAccount(){
        if(numAccount<200){//When you call this constructor, it creates a new instance of the BankAccount class with default values for its members.
            obj[numAccount]=BankAccount();//Calls constructor to create new BankAccount object with a provided initial balance.
            numAccount++;
            cout<<"\nAccount is created";
        }
        else{
            cout<<"No Account can be create";
        }
    }
    void displayHighValueAccount(){
        for(int i=0;i<numAccount;i++){
            if(obj[i].isHighValueAccount()==true){
                obj[i].display();
            }
            else continue;                                   
        }
    }    
};
int Bank :: numAccount=0;
int main(){
    Bank b1,b2,b3,b4,b5;
    b1.addAccount();
    b1.getDeposit(2000);
    b1.getWithdrawl(500);
    b1.getTotalAccount();
    b1.display();
    b2.addAccount();
    b2.getDeposit(5000);
    b2.getWithdrawl(1000);
    b2.getTotalAccount();
    b2.display();
    b3.addAccount();
    b3.getDeposit(10000);
    b3.getWithdrawl(9000);
    b3.getTotalAccount();
    b3.display();
    b4.addAccount();
    b4.getDeposit(7000);
    b4.getWithdrawl(1500);
    b4.getTotalAccount();
    b4.display();
    b5.addAccount();
    b5.getDeposit(2000);
    b5.getWithdrawl(1500);
    b5.getTotalAccount();
    b5.display();
    return 0;
}
