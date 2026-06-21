#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="count vowels and consonents";
    int n=s.size();
    int countVowel=0;
    int countConso=0;
    for(char c : s){
        if(isalpha(c)){
            char lower=tolower(c);
            if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
                countVowel++;
            }else{
                countConso++;
            }
        }
    }
    cout<<"the vowels in string is :"<<countVowel<<endl;
    cout<<"the consonents in string are:"<<countConso<<endl;
}