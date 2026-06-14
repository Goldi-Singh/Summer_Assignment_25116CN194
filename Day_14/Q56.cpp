#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {14, 35, 29, 23,23, 44, 11,44, 29, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool foundDuplicate = false;

    std::cout << "Duplicate elements are: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                bool alreadyPrinted = false;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        alreadyPrinted = true;
                        break;
                    }
                }
     if (!alreadyPrinted) {
    cout << arr[i] << " ";
    foundDuplicate = true;
     }
  break;
    }
     }
    }
    if (!foundDuplicate) {
        cout << "None";
    }
    cout <<endl;
}