#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ld;
    int sum=0;
    cout<<"the number is:";
    cin>>n;
    int orignum=n;
    while(n>0){
        ld=n%10;
        int fact=1;
        for(int i=1;i<=ld;i++){
        fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(orignum==sum){
        cout<<"strong number";
    }else{
        cout<<"not strong number";
    }
}