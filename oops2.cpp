#include<bits/stdc++.h>
using namespace std;
string pt[] = {"Ground","Air","Express"};
class Transportation{
    double weight,length,height,width;
    string packagetype;
    double cost_weight;
    public:
    void set_details(double w,double l,double h,double wi,string pt){
        if(w>=0.1 && w<=50){
            weight=w;
            length=l;
            width=wi;
            height=h;
            packagetype=pt;
        }
    }
    void CalculateCost(double weight){
        if(weight>=0.1 && weight<=1)
            cost_weight=5+(2*weight);
        else if(weight>1 && weight<=10)
            cost_weight=10+(1.5*weight);
        else
            cost_weight=20+(1*weight);
    }
    void CalculateCost(double length,double width,double height){
        double volume;
        if((length>=10 && length<=200) || (width>=10 && width<=100) || (height>=10 && height<=50)){
            volume=(length)*(width)*(height);
            double cost;
            if(volume<0.1)
                cost=10+(0.5*volume);
            else if(volume<0.5)
                cost=15+(0.25*volume);
            else
                cost=25+(0.1*volume);
            cost_weight=cost;
        }
    }
    void CalculateCost(string packageType,double weight){
        if(packageType=="Ground"){
             if(weight>=0.1 && weight<=1)
            cost_weight=5+(2*weight);
        else if(weight>1 && weight<=10)
            cost_weight=10+(1.5*weight);
        else
            cost_weight=20+(1*weight);
        }
        else if(packageType=="Air"){
            if(weight>=0.1 && weight<=1)
            cost_weight=10+(3*weight);
        else if(weight>1 && weight<=10)
            cost_weight=20+(2*weight);
        else
            cost_weight=30+(1.5*weight);
        }
         else if(packageType=="Express"){
            if(weight>=0.1 && weight<=1)
            cost_weight=15+(4*weight);
        else if(weight>1 && weight<=10)
            cost_weight=30+(3*weight);
        else
            cost_weight=40+(2*weight);
        }
    }
    double getcost(){
        return cost_weight;
    }
};
int main(){
    Transportation t1;
    t1.set_details(30.2,125,45,20,pt[1]);
    t1.CalculateCost("Ground",8.0);
    cout<<"cost based on package type and weight:"<<t1.getcost()<<endl;
    t1.CalculateCost(10.6,12.3,17.8);
    cout<<"cost based on length,width,height:"<<t1.getcost()<<endl;
    t1.CalculateCost(9.0);
    cout<<"cost based on weight:"<<t1.getcost()<<endl;
    return 0;    
}
