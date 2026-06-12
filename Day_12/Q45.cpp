
#include <bits/stdc++.h>
using namespace std;
int isPalindrome(int n) {
    if (n < 0){
         return false;
    }
     int orig = n;
    long long rev = 0;
     while (n > 0) {
        int ld = n % 10;
        rev = (rev * 10) + ld;
        n = n/10;
    } 
    return orig == rev;
}

int main() {
    int N;
    cout << "enter the value of N: ";
    cin >> N;
    
    if (isPalindrome(N)) {
        cout<< " is a palindrome." << endl;
    } else {
        cout<< " is not a palindrome." << endl;
    }
}
