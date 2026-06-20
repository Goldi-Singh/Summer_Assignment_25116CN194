#include<bits/stdc++.h>
using namespace std;
// maultiply matrices
int main(){
    int r1=2,c1=3;
    int r2=2,c2=4;
    int m1[2][3]={{1,2,3} , {4,5,6}};
    int m2[2][4]={{1,2,3,4},{5,6,7,8}};
    int mul[2][4]={{0,0,0,0},{0,0,0,0}};
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
            mul[i][j]+=m1[i][k]*m2[k][j];
           }
        }
    }
    cout << "product matrix is\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout<<mul[i][j] << " ";
        }
        cout << "\n";
    }
}