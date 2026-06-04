#include<bits/stdc++.h>
using namespace std;
int revNum(int n,int pro=0){
    if(n==0){
        return pro;
    }
   return revNum(n/10,pro*10+n%10);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<<"the reversed number is :"<<" "<<revNum(n)<<endl;
}