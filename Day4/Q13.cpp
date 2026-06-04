#include<bits/stdc++.h>
using namespace std;
int main(){
    int terms;
    cout<<"number of terms to print :";
    cin>>terms;
    int a=0,b=1,c=0;
    cout<<"fibonaci series:";
    for(int i=1;i<=terms;i++){
        if(i==1){
            cout<<a<<" ";
            continue;
        }
        if(i==2){
            cout<<b<<" ";
            continue;
        }
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
  cout<<endl;  
  return 0;  
}