#include<bits/stdc++.h>
using namespace std;
// remove duplicate characters
int main(){
    string s=" remove duplicate characters from the string ";
    int n=s.size();
    string result="";
    bool seen[256]={false};
    for(int i=0;i<n;i++){
        char charac=s[i];
        if(seen[(unsigned char)charac] == false) {
            result += charac;             // Keep it
            seen[(unsigned char)charac] = true;
        }
    }
    cout<<"string now :"<<result<<endl;
} 