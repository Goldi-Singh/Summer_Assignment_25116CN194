#include<bits/stdc++.h>
using namespace std;
// add matrices
int main(){
    int row, colm;
     cout <<"enter the number of rows and columns: ";
     cin >>row>>colm;
     int matrix1[row][colm];
     int matrix2[row][colm];
     int sum[row][colm];
     cout << "enter the elements of the first matrix :\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cin >> matrix1[i][j];
        }
    }
    cout << "your first matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << "\n"; 
    }
    cout << "enter the elements of the second matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cin >> matrix2[i][j];
        }
    }
    cout << "your second matrix:\n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colm; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << "\n"; 
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
          sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    cout<<"resultant matrix after addition:\n";
    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
}