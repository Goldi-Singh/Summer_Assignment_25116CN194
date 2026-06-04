#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    int count=0;
    while(n>0){
        count+=(n&1);
        n>>=1;
    }
    cout<<"the number of bits are"<<" "<<count<<endl;
}