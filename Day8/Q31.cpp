#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cout<<"no. of rows:";
 cin>>n;
 for(int i=1;i<=n;i++){
    
    for(int j=1;j<=i;j++){
        char val= 'A'+j-1;
        cout<<val;
    }
    cout<<endl;
 }
}
