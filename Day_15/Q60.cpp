#include<bits/stdc++.h>
using namespace std;
//zeroes to end
int main(){
 int arr[]={0,1,2,3,4,0,45,0,56,0,67,0,0,90};
 int size=sizeof(arr)/sizeof(arr[0]);
 int count=0;
 for(int i=0;i<size;i++){
    if(arr[i]!=0){
        arr[count]=arr[i];
        count++;
    }
 }
 while(count<size){
    arr[count]=0;
    count++;
 }
 cout<<"the new array is:";
 for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
 }
}