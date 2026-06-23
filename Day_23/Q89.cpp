#include<bits/stdc++.h>
using namespace std;
//first non repeating character
int main(){
    string s="non repeating character";
    int n=s.size();
    int freq[256] = {0};
    for(char c : s) {
        freq[(unsigned char)c]++;
    }
    char result;
    bool found=false;
    for(char c : s) {
        if(freq[(unsigned char)c] == 1) {
            result = c;
            found=true;
            break;
        }
    }
    
    if(found){
         cout << "First non-repeating character: " << result << endl;
    }
    else {
        cout << "No non-repeating character found." << endl;
    }
}
