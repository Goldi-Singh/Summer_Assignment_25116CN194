#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of the array:";
    cin>>size;
    int arr[100];
    cout<<"enter the elements:"<<endl;
    for(int i=0;i<size;i++){
     cin>>arr[i];

    }cout<<"the elements are:";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    int largest=INT_MIN;
    int secondLargest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }if(arr[i]>secondLargest && arr[i]!=largest){
            secondLargest=arr[i];
        }
    }
    cout<<"the largest element is :"<<largest<<endl;
    cout<<"the second largest element is:"<<secondLargest<<endl;
}