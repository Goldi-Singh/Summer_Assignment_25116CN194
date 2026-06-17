#include<bits/stdc++.h>
using namespace std;
//intersection of array
int main(){
    int arr1[]={12,23,34,45};
    int arr2[]={10,20,34,45};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int intersectArr[100];
    int index=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                bool isPresent=false;
                for(int k=0;k<index;k++){
                    if(intersectArr[k]==arr1[i]){
                        isPresent=true;
                        break;
                      
                    }
                }
                if(!isPresent){
                    intersectArr[index++]=arr1[i];
                    
                }
                break;
            }
        }
        
    }
    
    cout<<"the intersected array is:";
    for(int i=0;i<index;i++){
        cout<<intersectArr[i]<<" ";
    }
}