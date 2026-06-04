#include<bits/stdc++.h>
using namespace std;
int SOD(int n){
    if(n==0){
       return 0;
      }
        return (n%10)+SOD(n/10);
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"sum of the digits is "<<" "<<SOD(n)<<endl;
}