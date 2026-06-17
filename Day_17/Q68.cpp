#include<bits/stdc++.h>
using namespace std;
// find common elements
int main(){
    int arr1[]={10,20,30,40,50};
    int arr2[]={20,30,50,60,80};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<"the common elements are:";
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                bool isPresent=false;
                for(int k=0;k<i;k++){
                    if(arr1[k]==arr1[i]){
                        isPresent=true;
                        break;

                    }
                }
                if(!isPresent){
                    cout<<arr1[i]<<" ";
                }
                break;
            }
        }
    }
    cout<<endl;
}