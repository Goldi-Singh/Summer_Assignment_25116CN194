#include<bits/stdc++.h>
using namespace std;
// sort words by length
int main(){
vector<string> s={"jack ","clary","mortalcup","shadow","hunters"};
sort(s.begin(),s.end(),
[](string x,string y){
    return x.size()>y.size();
});
cout<<"sorted string by length:"<<endl;
for(string sorted:s){
    cout<<sorted<<endl;
}

}