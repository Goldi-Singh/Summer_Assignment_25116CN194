#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int temp;
    cout<<"enter two integers:";
    cin>>a>>b;
    int num1=a,num2=b;
    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    int gcd=num1;
    int lcd= (a+b)/gcd;
    cout<<"the least common divisor is"<<lcd<<endl;
}
