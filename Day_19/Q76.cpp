#include<bits/stdc++.h>
using namespace std;
//diagonal sum
int main(){
    int row, colm;
     cout <<"enter the number of rows and columns: ";
     cin >>row>>colm;
     int matrix[row][colm];
     int diagonalSum=0;
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
    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            if(i==j){
            diagonalSum+=matrix[i][j];}
        }
        
    }
    cout<<diagonalSum;
}