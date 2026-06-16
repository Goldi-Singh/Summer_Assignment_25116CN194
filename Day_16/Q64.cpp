#include<bits/stdc++.h>
using namespace std;
//remove duplicates
int main(){
    int arr[]={1,1,2,3,4,5,6,4,8,7,9,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sizenew=0;
    for(int i=0;i<size;i++){
        bool isDuplicate=false;
        for(int j=0;j<sizenew;j++){
            if(arr[i]==arr[j]){
                isDuplicate=true;
                break;
            }
        }
        if(!isDuplicate){
            arr[sizenew]=arr[i];
            sizenew++;
        }
    }
    cout<<"array after removing the duplicates are:";
    for(int i=0;i<sizenew;i++){
        cout<<arr[i]<<" ";
    }
}