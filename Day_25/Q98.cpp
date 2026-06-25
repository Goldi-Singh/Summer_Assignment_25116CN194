#include<bits/stdc++.h>
using namespace std;
//common characters in strings
int main(){
string s1="common characters in string";
string s2="including the duplicate characters";
for(char ch:s1){
    if(s2.find(ch)!=string::npos){
        cout<<ch<<" ";
    }
}

}