#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int n) {
    if (n <= 1) {
        return false;
     } int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    } 
    return sum == n;
}

int main() {
    int N;
    cout<<"enter the number:";
    cin>>N;
    if (isPerfect(N)) {
    cout << N <<" is a perfect number"<<endl;
    } else {
        cout<< N <<" is not a perfect number"<<endl;
    }

}