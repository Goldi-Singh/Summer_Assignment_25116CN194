#include<bits/stdc++.h>
using namespace std;
//right shift
int main(){
    int arr[]={12,23,34,45,56,67,78,89,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(size>1){
        int frstElmt=arr[size-1];
        for(int i=size-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=frstElmt;
    }
    cout<<"the right shifted array is:";
    for(int i=0;i<size ;i++){
        cout<<arr[i]<<" ";
    }
}