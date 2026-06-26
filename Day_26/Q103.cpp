#include<bits/stdc++.h>
using namespace std;
//atm stimulation
int main(){
    int balance=8000;
    int amount,choice;
    cout<<" ## Welcome to your atm account ## \n";
    cout<<"1.check balance:\n";
    cout<<"2.deposit money:\n";
    cout<<"3.withdraw money:\n";
    cout<<"4.exit:\n";
    cout<<"enter your choice:\n";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"your current balance is :"<<" "<<balance;
        break;
        case 2:
        cout<<"enter the amount to be deposited:";
        cin>>amount;
        balance+=amount;
        cout<<"your amount get deposited\n";
        break;
        case 3:
        cout<<"enter the amount :";
        cin>>amount;
        if(amount<=balance){
            cout<<"withdrawn successful\n";
        }else{
            cout<<"insufficient balance\n";
        }
        break;
        case 4:
        cout<<"exit\n";
        break;
        default :
        cout<<"not the right choice\n";
    }
}