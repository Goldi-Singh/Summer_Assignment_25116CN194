#include<bits/stdc++.h>
using namespace std;
//character frequency
int main(){
    string s="character frequency";
    int n=s.size();
   int freq[256]={0};
   for(int i=0;i<n;i++){
    freq[(unsigned char)s[i]]++;

   }   
   cout<<"character frequencies is:"<<endl;
   for(int i=0;i<256;i++){
    if(freq[i]>0){
        cout<<(char)i<<":"<<freq[i]<<endl;
    }
   } 
}