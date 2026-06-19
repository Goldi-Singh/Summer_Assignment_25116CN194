#include<bits/stdc++.h>
using namespace std;
//transpose matrix
int main(){
    int row, colm;
     cout <<"enter the number of rows and columns: ";
     cin >>row>>colm;
     int matrix[row][colm];
     int transp[colm][row];
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
            transp[j][i] = matrix[i][j];
        }
    }
    cout<<"tranposed matrix:";
    for (int i = 0; i < colm; i++) {
        for (int j = 0; j < row; j++) {
            cout << transp[i][j] << " ";
        }
        cout << "\n"; 
    }
}