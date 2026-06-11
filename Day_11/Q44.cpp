#include<bits/stdc++.h>
using namespace std;
int fact(int n){
  if(n==1){
    return 1;
  }else{
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
  }
}
int main(){
    int a;
    cout<<"value of a:";
    cin>>a;
    cout<<"the factorial is"<<fact(a)<<endl;


}