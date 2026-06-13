#include<bits/stdc++.h>
using namespace std;
int main(){

   int size;
    cout<<"enter the size of the array:";
    cin>>size;
    int arr[100];
    cout<<"enter the elements:";
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    cout<<"the elements are:";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}