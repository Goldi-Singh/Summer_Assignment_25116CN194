#include<bits/stdc++.h>
using namespace std;
//reverse array
int main(){
    int arr[]={12,23,34,45,56,67};
    int size=sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"reversed array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}