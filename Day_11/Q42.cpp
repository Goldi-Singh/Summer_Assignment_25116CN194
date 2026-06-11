#include<bits/stdc++.h>
using namespace std;
int maximum(int x,int y){
    if(x>y){
          return x;
    }else{
        return y;
    }
} 
int main(){
  int a,b;
  cout<<"value of a and b:";
  cin>>a>>b;
  cout<<"maximun :"<<maximum(a,b)<<endl;
}