#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    int count=0;
    cout<<"the number is:";
    cin>>n;
    while(n>0){
        count++;
        n=n/10;
    }
    cout<<count;
}