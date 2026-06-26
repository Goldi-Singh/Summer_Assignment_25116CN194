#include<bits/stdc++.h>
using namespace std;
//number guessing game
int main(){
int target;
cout<<"enter the number you wanted to use:";
cin>>target;
int guess;
cout<<"make your guess:\n";
do{
 cout<<"enter your guess:";
 cin>>guess;
 if(target>guess){
    cout<<"to low\n";
 }else if(target<guess){
    cout<<"to high\n";
 }else{
    cout<<"yup that's it ";
 }
}while(guess!=target);
}