#include<bits/stdc++.h>
using namespace std;
// merge two sorted arrays
int main(){
 int arr1[]={12,23,34,45};
 int arr2[]={56,67,78,89};
 int n1 = sizeof(arr1)/sizeof(arr1[0]);
 int n2 = sizeof(arr2)/sizeof(arr2[0]);
 int result[n1 + n2];
    
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while(i < n1) result[k++] = arr1[i++];
    while(j < n2) result[k++] = arr2[j++];
    
    cout << "merged array using given arrays: ";
    for(int l= 0; l < n1 + n2; l++) {
        cout << result[l] << " ";
    }
    cout << endl;
}