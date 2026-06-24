#include<bits/stdc++.h>
using namespace std;
// longest word
int main(){
    string s="longest word in the string";
    int n=s.size();
    int count=0;
    string longest="";
    string current="";
    for(int i=0;i<n;i++){
        if(s[i] != ' ') {
            current += s[i];
    }
    if(s[i]==' '||i==n-1){
    if(current.size() > count) {
            count = current.size();
            longest = current;
        }
        current= "";
    }
}
    cout<<"longest word is :"<<longest<<endl;
}