#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array:";
    cin>>size;
    int arr[100];
    int lar=arr[0];
    int small=arr[0];
    cout<<"enter the elements:";
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    cout<<"the elements are:"<<endl;
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
        if(arr[i]<small){
           small=arr[i];
        }if(arr[i]>lar){
         lar=arr[i];
        }
    }
    cout<<"the smallest is "<<" "<<small<<"and the largest is"<<" "<<lar<<endl;
}