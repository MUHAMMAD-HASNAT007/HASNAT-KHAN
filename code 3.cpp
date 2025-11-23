#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"enter your choice: ";
    cin>>choice;

        switch(choice){
            case 1:cout<<"monday"<<endl<<break;
            case 2: cout<<"tuesday"<<endl<<break;
            case 3: cout<<"wednesday"<<endl<<break;
            case 4: cout<<"thursday"<<endl<<break;
            case 5: cout<<"friday"<<endl<<break;
          default:cout<<"invalid input"<<endl<<break;
    }
    return 0;

}