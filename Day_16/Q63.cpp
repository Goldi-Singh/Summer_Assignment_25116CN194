#include<bits/stdc++.h>
using namespace std;
// pair with given sum
int main(){
 int arr[]={12,23,34,45,56,67,78,89,90};
 int size=sizeof(arr)/sizeof(arr[0]);
 int desiredSum=57;
 bool found=false;
 for(int i=0;i<size;i++){
    for(int j=1;j<size;j++){
        if(arr[i]+arr[j]==desiredSum){
           cout<<"pair is found"<<" "<<arr[i]<<","<<arr[j]<<endl;
           found=true;
           break;
        }
    }
 }
 if(!found){
    cout<<"no such pair exist"<<endl;
 }
}