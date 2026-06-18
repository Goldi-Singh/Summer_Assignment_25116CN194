#include<bits/stdc++.h>
using namespace std;
// binary search
int main(){
    int arr[] = {12,23,34,45,56,67,78,89,90}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 45;
    int end = 0;
    int start = size - 1;
    int resultIndex = -1;
    while (end <= start) {
        int mid = end + (start - end) / 2;
        if (arr[mid] == target) {
            resultIndex = mid;
            break; 
        }
        if (arr[mid] < target) {
            end = mid + 1; 
        } else {
            start= mid - 1; 
        }
    }
    if(resultIndex!=-1){
        cout<<"the result is found at index:"<<resultIndex<<endl;
    }else{
        cout<<"the result is not found:";
    }
}