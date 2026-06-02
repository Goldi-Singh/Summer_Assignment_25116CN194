#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i;
 int sum=0;
 cout<<"the number";
 cin>>n;
 if(n<1){
   cout<<"not valid";
 }else{
 for (i=0;i<n;i++){
    sum=sum+i;
 }
 cout<<"the sum of "<<" "<<n<<" "<<"natural number is"<<" "<<sum ;
}
}