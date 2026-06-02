#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,fact;
    cout<<"the number is:";
    cin>>n;
    fact=1;
    if(n<0){
        cout<<"factorial does not exist:"<<endl;
    }else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"the factorial of "<<" "<<n<<" " << "is" <<"  "<< fact<<endl;
    }
}
