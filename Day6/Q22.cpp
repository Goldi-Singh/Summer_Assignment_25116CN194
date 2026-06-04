#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a decimal number:";
    cin>>n;
    int decimal=0,pow =1;
    while (n>0){
        int ld= n%10;
        decimal=decimal+pow*ld;
        pow=pow*2;
        n=n/10;
    }
    cout<<"decimal number is "<<" "<<decimal;
}