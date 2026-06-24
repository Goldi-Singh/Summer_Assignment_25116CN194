#include<bits/stdc++.h>
using namespace std;
//string rotation
int main(){
    string s1="string";
    string s2="rotate";
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2){
        cout<<"rotation not possible";
    }
    string temp=s1+s1;

    if(temp.find(s2)<temp.length()){
        cout<<"found";
    }else{
        cout<<"not found";
    }
}