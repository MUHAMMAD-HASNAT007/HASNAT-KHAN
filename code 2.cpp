#include<iostream>
using namespace std;

int main(){
    float price=0;
    int quantity=0;
    double taxrate=0.05;
    double total=0;

    cout<<"enter price per item: ";
    cin>>price;

    cout<<"enter quantity: ";
    cin>>quantity;

    total=price*quantity;
    total=total+total*taxrate;

    if(price<0 || quantity<0)
    cout<<"warning:negative value entered"<<endl;
    return 0;
}