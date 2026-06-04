#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,n;
   cout<<"enter the integer:";
   cin>>x;
   cout<<"enter the power";
   cin>>n;
   int res=1;
   for(int i=1;i<=n;i++){
    res=res*x;
   }
   cout<<res;
}