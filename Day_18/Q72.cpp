#include<bits/stdc++.h>
using namespace std;
// sort array in descending order
int main(){
    int arr[]={12,23,56,34,78,58};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
       if(arr[j]<arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }     
        }
    }
    cout<<"the sorted array is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}