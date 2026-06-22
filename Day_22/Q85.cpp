#include<bits/stdc++.h>
using namespace std;
// palindrome string
int main(){
    string s="palindrome string";
    int n=s.size();
    int start=0;
    int end=n-1;
    bool isPalindrome=true;
    while(start<end){
        if(s[start]!=s[end]){
            isPalindrome=false;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        cout<<"the string is a palindrome string";
    }else{
        cout<<"not the palindrome string";
    }
}