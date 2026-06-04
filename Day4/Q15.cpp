#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,numdigit=0,rem;
    int sum=0;
    cout<<"enter the number:";
    cin>>n;
    int orignum=n;
    int temp=n;
    while(temp!=0){
        temp=temp/10;
         numdigit++;
    }
    temp=n;
    while(temp!=0){
         rem=temp%10;
         sum=sum+round(pow(rem,numdigit));
        temp=temp/10;

    }
    if(sum==orignum){
        cout<<"is armstrong:";
    }else{
        cout<<"not armstrong:";
    }
    

}