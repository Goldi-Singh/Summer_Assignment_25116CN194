#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,1,1,1,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int count=0;
    int tar=1;
    for(int i=0;i<size;i++){
        if(arr[i]==tar){
            count++;
        }
    }
    cout<<"the frequency is :"<<count<<endl;
}