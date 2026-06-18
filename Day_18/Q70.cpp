#include<bits/stdc++.h>
using namespace std;
//selection sort
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
        int min=i;
        for(int j=i+i;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
                int temp=arr[min];
                 arr[min]=arr[i];
                 arr[i]=temp;
            
        }
    }
    cout<<"the shorted array is:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}