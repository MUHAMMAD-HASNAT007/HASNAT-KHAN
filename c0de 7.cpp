#include<iostream>
using namespace std;

void check(int n){
    if(n%2==0)
    cout<<n<<"is even";
    else 
    cout<<n<<"is odd";
}

int main(){
    int a;
    cout<<"enter a";
    cin>>a;

    check(a)
    return 0;
}