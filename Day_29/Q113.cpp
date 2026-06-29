#include<bits/stdc++.h>
using namespace std;
//menu driven claculator
int main(){
int choice;
int num1,num2;
do{
    cout<<" ###  CALCULATOR MENU ### ";
    cout<<" 1. addition(+) :";
    cout<<"2. subtraction (-) :";
    cout<<" 3. multiplication(*) :";
    cout<<" 4. division (/) :";
    cout<<"enter your choice:";
    cin>>choice;
    if(choice>=1 && choice<=4){
        cout<<"enter two numbers:";
        cin>>num1>>num2;
    }
    switch (choice) {
            case 1:
                cout << "result: " << (num1 + num2) << endl;
                break;
            case 2:
                cout << "result: " << (num1 - num2) << endl;
                break;
            case 3:
                cout << "result: " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "result: " << (num1 / num2) << endl;
                else
                    cout << "division by zero is not allowed." << endl;
                break;
            default:
                cout << "hey it's wrong" << endl;
        }
}while(choice!=4);
}