#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
        return fibonacci(n-2)+fibonacci(n-1);
    
}
int main(){
    int N;
    cout<<"enter number of terms:";
    cin>>N;
    for(int i=0;i<N;i++){
        cout<<"the fibonacci series is"<<" "<<fibonacci(i)<<" "<<endl;
    }
   cout<<endl;
}