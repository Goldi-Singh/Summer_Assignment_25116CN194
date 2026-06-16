#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,1,1,1,2,3,4,5,};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maxCount=0;
    int maxElement=arr[0];
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        while(count>maxCount){
            maxCount=count;
            maxElement=arr[i];
        }
    }
    cout<<"element with maximum frequency is :"<<maxElement<<endl;
}