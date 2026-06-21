#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="convert lowercase to uppercase ";
    int n=s.size();
    for(char &c:s){
        if(isalpha(c)){
             c=toupper(c);
         
        }
    }
    cout<<s<<endl;
}