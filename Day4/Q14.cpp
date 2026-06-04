#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"number of terms to print :";
    cin>>n;
    int t1=0,t2=1,ntTerm=0;
    cout<<"fibonaci series:";
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<t1<<" ";
            continue;
        }
        if(i==2){
            cout<<t2<<" ";
            continue;
        }
        ntTerm=t1+t2;
        t1=t2;
        t2=ntTerm;
        cout<<ntTerm<<" ";
    }
  cout<<endl;  
  return 0; 
 }