#include<bits/stdc++.h>
using namespace std;
//compress a string
int main(){
    string s = "aaaabbcccd";
    string compr = "";
    int n = s.size();  
    for (int i = 0; i < n; i++) {
        int count = 1;
        while (i < n - 1 && s[i] == s[i + 1]) {
            count++;
            i++;
        }
        compr += s[i] + to_string(count);
    }
    
    cout << "Compressed string: " << compr << endl;
    return 0;
}