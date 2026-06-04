#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout<<"enter starting and ending point of the range:";
    cin>>a>>b;
    cout<<"the armstrong numbers between the range are:";
    for(int i=a;i<=b;i++){
        int digit=0;
        int sum=0;
        int rem;
        int orignum=i;
        int temp=i;
        while(temp!=0){
            temp=temp/10;
            digit++;
        }
        temp=i;
        while(temp!=0){
            rem=temp%10;
            sum=sum+round(pow(rem,digit));
            temp=temp/10;
        }
     if(sum==orignum){
        cout<<i<<" ";
     }
    }
}