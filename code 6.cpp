#include<iostream>
using namespace std;

int main(){
    int a=0,b=0,c=0;
    for(int i=1;i<=11;i++){
        cout<<a<<"";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}