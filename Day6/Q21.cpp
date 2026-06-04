#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter decimal number:";
    cin>>n;
    int binary=0,pos =1;
    while (n>0){
        int rem= n%2;
        binary=binary+pos*rem;
        pos=pos*10;
        n=n/2;
    }
    cout<<"binary number is "<<" "<<binary;
}