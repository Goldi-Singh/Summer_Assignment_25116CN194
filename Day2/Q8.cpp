#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, ld,orignum;
    int revnum=0;
    cout<<"the number is:";
    cin>>n;
    orignum=n;
    while(n>0){
        ld=n%10;
        revnum=revnum*10+ld;
        n=n/10;
    }
    if(orignum==revnum){
        cout<<"the number is palindrome";
    }else{
        cout<<"the number is not palindrome";
    }
    
}