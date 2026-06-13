#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array:";
    cin>>size;
    int arr[100];
    double sum=0;
    cout<<"enter the elements:";
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    cout<<"the elements are:";
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    double average= sum/size;
    cout<<"the sum is :"<<sum<<" and the average is :"<<average<<endl;
}