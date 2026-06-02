#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ld;
    int product=1;
    cout<<"the number is:";
    cin>>n;
    while(n>0){
        ld=n%10;
        product=product*ld;
        n=n/10;
    }
    cout<<"the product of the number"<<n<<"is"<<product<<endl;
}