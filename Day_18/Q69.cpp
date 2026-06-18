#include<bits/stdc++.h>
using namespace std;
//bubble sort
int main(){
    int size;
    cout<<"enter the size of the array:";
    cin>>size;
    int arr[100];
    cout<<"enter the elements:";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the elements are:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }
    }
    cout<<"the shorted array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}