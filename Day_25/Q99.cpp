#include<bits/stdc++.h>
using namespace std;
//sort name alphabetically
int main(){
 vector<string> names = {"percy","conrad","jeremiah","stefan","damon","elena","katherine"};
    sort(names.begin(), names.end());
    cout <<"names in alphabetical order:" << endl;
    for(string name : names) {
        cout << name << endl;
    }
}