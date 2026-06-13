#include<bits/stdc++.h>
using namespace std;
 int main() {
    int arr[] = {14, 25, 36, 49, 35, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    cout << "even elements: " << evenCount << endl;
    cout<<"odd elements: " << oddCount << endl;
    
}