#include<bits/stdc++.h>
using namespace std;
//count words in a sentence
int main(){
    string s="count words in a sentence";
    int n=s.size();
    int count=1;
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            count++;
        }
    }
    cout<<count;
}
