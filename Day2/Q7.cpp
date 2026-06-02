#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ld;
    int revnum=0;
    cout<<"the number is:";
    cin>>n;
    while(n>0){
        ld=n%10;
        revnum=revnum*10+ld;
        n=n/10;
    }
    cout<<"the reversed number of"<<n<<"is"<<revnum<<endl;
}