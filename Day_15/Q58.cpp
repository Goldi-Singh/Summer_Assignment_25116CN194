#include<bits/stdc++.h>
using namespace std;
// left shift
int main(){
    int arr[]={12,23,34,45,56,67,78,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(size>1){
        int frstElmt=arr[0];
        for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
        }
        arr[size-1]=frstElmt;
    }
    cout<<"the left shifted array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}