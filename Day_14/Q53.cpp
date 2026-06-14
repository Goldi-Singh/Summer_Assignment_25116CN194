#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,20,34,56,78,90,12,23};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=90;
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            index=i;
            break;
        }
    }
    if(index!=-1){
    cout<<"the element is found at "<<" "<<index<<" "<<"index";
}else{
    cout<<"the element is not here";
}
}