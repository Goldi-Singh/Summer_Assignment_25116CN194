#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"enter the number to be checked:";
    cin>>n;
    if(n>0){
        for(int i=1;i<n/2;i++){
            if(n%i==0){
                sum=sum+i;
            }
        }
    }
    if (sum==n&&n!=0){
        cout<<"is perfect number";
    }else{
        cout<<"not perfect";
    }
}