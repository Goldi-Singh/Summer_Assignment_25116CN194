#include<bits/stdc++.h>
using namespace std;
//maximum occuring character
int main(){
    string s="maximum occuring character";
    int n=s.size();
    int max_count=0;
    char max_char=' ';
    int freq[256] = {0};
    
    for(char c : s) {
        if(c != ' ') { // Usually we ignore spaces for max occurrence
            freq[(unsigned char)c]++;
        }
    }
    for(int i = 0; i < 256; i++) {
        if(freq[i] > max_count) {
            max_count = freq[i];
            max_char = (char)i;
        }
    }
    
    cout << "max occurring character: '" << max_char << "' appearing " << max_count << " times." << endl;
    return 0;
}