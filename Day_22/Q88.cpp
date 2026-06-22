#include<bits/stdc++.h>
using namespace std;
//remove spaces 
int main(){
    string s="remove spaces from string";
    int n=s.size();
    int str=0;
    for(int i=0;i<n;i++){
        if(s[i]!=' '){
            s[str]=s[i];
            str++;

        }
    }
    s.resize(str);
    cout<<"string after removing spaces:"<< s<<endl;
}