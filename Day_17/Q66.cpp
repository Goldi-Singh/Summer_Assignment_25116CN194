#include<bits/stdc++.h>
using namespace std;
//union of array
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={4,5,6,7,8,9};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int unionArr[100];
    int index=0;
    for(int i=0;i<size1;i++){
        unionArr[index++]=arr1[i];
    }
    for(int i=0;i<size2;i++){
        bool isPresent=false;
        for(int j=0;j<index;j++){
            if(arr2[i]==unionArr[j]){
                isPresent=true;
                break;
            }
        }
        if(!isPresent){
            unionArr[index++]=arr2[i];
        }
    }
    cout<<"the union of array is:";
    for(int i=0;i<index;i++){
        cout<<unionArr[i]<<" ";
    }
}