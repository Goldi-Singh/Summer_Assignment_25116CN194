#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,start,end;
    
    cout<<"enter starig and ending of the range:";
    cin>>start>>end;
    for(int n=start;n<=end;n++){
        bool isPrime=true;
     for(int i=2;i*i<n;i++){
     if(n%i==0){
        isPrime=false;
        break;
     }
     }
     if (isPrime){
        cout<<n<<" ";
     }
 }
 cout<<endl;
}