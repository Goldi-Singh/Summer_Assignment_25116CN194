#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ld;
    int sum=0;
    cout<<"the number is:";
    cin>>n;
    while(n>0){
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    cout<<"the sum of the number"<<n<<"is"<<sum<<endl;
}