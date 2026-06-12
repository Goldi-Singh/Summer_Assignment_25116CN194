#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    if(n<0){
        return false;
    }else{
    int orig=n;
    int sum=0;
    int dig=0;
    int temp=0;
    while(temp>0){
        dig++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0){
        int ld=temp%10;
        sum+=round(pow(ld,dig));
        temp=temp/10;
    }
    return orig==sum ;
}
}

int main(){
    int N;
    cout << "enter the value of N: ";
    cin >> N;
    
    if (isArmstrong(N)) {
        cout<< " is a armstrong" << endl;
    } else {
        cout<< " is not armstrong" << endl;
    }
}