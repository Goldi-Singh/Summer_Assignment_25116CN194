#include<bits/stdc++.h>
using namespace std;
//merge array
int main(){
    int arr1[]={12,23,34,45,56,67,78};
    int arr2[]={10,20,30,40,50,60,70};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int mergArr[100];
    int index=0;
    for(int i=0;i<size1;i++){
        mergArr[index++]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        mergArr[index++]=arr2[i];
    }
    cout<<"the merged array is:";
    for(int i=0;i<size1+size2;i++){
        cout<<mergArr[i]<<" ";
    }
}