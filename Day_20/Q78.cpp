#include<bits/stdc++.h>
using namespace std;
// check symmetric
int main(){
    int  row, colm;
     cout <<"enter the number of rows and columns: ";
     cin >>row>>colm;
     int matrix[row][colm];
     bool isSymmetric=true;
     cout << "enter the elements of the first matrix :\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "your first matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n"; 
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            if(matrix[i][j]!=matrix[j][i]){
                isSymmetric=false;
                break;
            }
        }
        if(!isSymmetric){break;}
    }
    if(isSymmetric){
        cout<<"symmetric matrix:";
    }else{
        cout<<"asymmetric matrix:";
    }
}