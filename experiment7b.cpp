#include<iostream>
using namespace std;
class Books
{
private:
   static int countBook;
   string bookName;
   string bookId;
public:
    Books(){
        countBook=countBook+1;
    }
    Books(string bookName){
          countBook=countBook+1;
       this->bookName=bookName;
       bookId="PCE";
       bookId=bookId+ to_string(countBook);
       }
    void display(){
        cout<<"book name is : "<<bookName<<endl;
        cout<<"book id is : " <<bookId<<endl;
    }
    void noOfBooksPresent(){
        cout<<"No of books entered: "<<countBook-1<<endl; 
    }
    
};
int Books::countBook=1;
int main(){
    Books b1("Thomas");
    b1.display();
    Books b2("Thor : The dark world");
    b2.display();
    Books b3("avengers");
    b3.display();
    b1.noOfBooksPresent();
    return 0;
}