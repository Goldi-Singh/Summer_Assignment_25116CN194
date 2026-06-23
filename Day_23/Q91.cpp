#include <bits/stdc++.h>
using namespace std;
//anagram
int main() {
    string s1 = "fomo", s2 = "logo";
    int n=s1.size();
    int m=s2.size();
    if(n!=m){
        cout <<"not anagrams"<<endl;
    }
    
    int freq[256] = {0};
    for(int i=0;i<n;i++) {
        freq[(unsigned char)s1[i]]++;
        freq[(unsigned char)s2[i]]--;
    }
    bool isAnagram = true;
    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }
    
    if(isAnagram) cout <<"strings are anagrams." << endl;
    else cout <<"strings are not anagrams." << endl;
}