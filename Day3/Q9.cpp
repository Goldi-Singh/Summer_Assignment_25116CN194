#include<bits/stdc++.h>
using namespace std ;
int main(){
 int n;
 bool isPrime=true ;
 cout<<"enter a positive integer:";
 cin>>n;
 if(n<=1){
    isPrime =false;
 }else{
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
 }
 if(isPrime){
    cout<<"prime numbeer"<<endl;
 }
 else{
    cout<<"not prime"<<endl;
 }
}