#include<iostream>
using namespace std;
class Vehicle{
    // public:
    protected:
    string brand;
    string model;
    int year;
    double rental_price;
    int days;
    public:
    Vehicle(){

    }
    Vehicle(string brand,string model,int year,double rental_price,int days){
        this->brand=brand;
        this->model=model;
        this->year=year;
        this->rental_price=rental_price;
        this->days=days;
    }
    double get_rental_cost(){
        // rental_price=days*rental_price;
        return rental_price;
    }
};
class Car : public Vehicle{
    // public:
    protected:
    int num_doors;
    public:
    Car(string brand,string model, int year, double rental_price,int days, int num_doors):Vehicle(brand,model,year,rental_price,days){
        this->num_doors=num_doors;
    }
    double get_cost(){
        if(days>7){
            rental_price-=rental_price/20;
            return rental_price;
        }
        else{
            return rental_price;
        }
    }
};
class Motorcycle : public Vehicle{
    // public:
    protected:
    float engine_disp;
    public:
    Motorcycle(string brand,string model, int year, double rental_price,int days,float engine_disp):Vehicle(brand,model,year,rental_price,days){
        this->engine_disp=engine_disp;
    }
    double get_price(){
        if(days<3){
            rental_price-=rental_price/10;
            return rental_price;
        }
        else return rental_price;
    }
};
class Bicycle : public Motorcycle{
    // public:
    protected:
    string frame_material;
    public:
    Bicycle(string brand,string model, int year, double rental_price,int days,float engine_disp,string frame_material):Motorcycle(brand,model,year,rental_price,days,engine_disp){
        this->frame_material=frame_material;
    }
    double get_Price(){
        rental_price=200*days;
        return rental_price;
    }
};
int main(){
    double rental_price;
    cout<<"Rent is:"<< endl;
    cin>>rental_price;
    int days;
    cout<<"Give number of days:"<<endl;
    cin>>days;
    Vehicle v1("brand1","model1",4,rental_price,days);
    Car c1("brand2","model2",10,rental_price,days,4);
    Motorcycle m1("brand3","model3",20,rental_price,days,40.5);
    Bicycle b1("brand4","model4",30,rental_price,days,40.5,"steel");
    cout<<"Vehicle rent:"<<v1.get_rental_cost()<<endl;
    cout<<"Car rent:"<<c1.get_cost()<<endl;
    cout<<"Motorcycle rent:"<<m1.get_price()<<endl;
    cout<<"Bicycle rent:"<<b1. get_Price()<<endl;
    return 0;
}