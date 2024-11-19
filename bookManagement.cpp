#include <iostream>
using namespace std;
class Book
{
    string name;
    int book_no;
    bool isAvailable;
    int issue_date;

public:
    Book()
    {
        cout << "default constructor\n";
        name = "none";
        book_no = 0;
        isAvailable = true;
        issue_date = 0;
    }
    Book(string name, int book_no, bool isAvailable,int issue_date ){
        this->name = name;
        this->book_no= book_no;
        this->isAvailable = isAvailable;
        this->issue_date=issue_date;
    }
    void available(){
        if(name=="none") cout<<"book not available";
        else cout<<"book is available";
    }
    void issuedate(){
        cout<<"issue date is "<< issue_date<<endl;

    }
    void returndate(){
        cout<<"return date is "<< issue_date+15 <<endl;
        
    }
    void returned(){
        isAvailable=true;
        cout<<"book is returned\n";
        
    }


};
int main(){
    Book b1("samayraina",1,false,2);
    b1.returndate();
    b1.returned();
    b1.available();
    return 0;
}