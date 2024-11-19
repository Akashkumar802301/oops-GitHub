#include <iostream>
using namespace std;
class Person
{
private:
    const long long adharCard;
    const string panCard;
    string address;
    long long contactNo;

public:
    Person() : adharCard(0), panCard(NULL)
    {
    }
    Person(long long adhC, string panC, string address, long long contNo) : adharCard(adhC), panCard(panC)
    {
        this->address = address;
        this->contactNo = contNo;
    }
    long long getAdharCard() const
    {
        return adharCard;
    }
    string getPanCard() const
    {
        return panCard;
    }
    string add()
    {
        return address;
    }
    long long contNo()
    {
        return contactNo;
    }
    void changeAddress(string add)
    {
        address = add;
    }
    void changeContactNo(long long no)
    {
        contactNo = no;
    }
    void display()
    {
        cout << "Adhar Card No is : " << adharCard << endl;
        cout << "PAN card No is : " << panCard << endl;
        cout << "Address of person is : " << address << endl;
        cout << "Mobile is : " << contactNo << endl;
    }
};
int main()
{
    Person p1(454564455555, "HFH2427DJHF", "8,gopal vihar,goner road,jaipur", 7937591359);
    p1.display();
    p1.changeAddress("9,ajmerigate,jaipur");
    p1.changeContactNo(8563865874);
    p1.display();
    cout << "adhar card no is" << p1.getAdharCard() << endl;
    return 0;
}