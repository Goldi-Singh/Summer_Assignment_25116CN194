#include<bits/stdc++.h> 
using namespace std;
// row wise sum
int main(){
    int row, colm;
     cout <<"enter the number of rows and columns: ";
     cin >>row>>colm;
     int matrix[row][colm];
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
        int rowSum=0;
        for (int j = 0; j < colm; j++) {
            rowSum+= matrix[i][j];
        }
        cout<<"the sum of the"<<" "<< i+1<<" "<<"row is"<<" "<<rowSum<<endl;
    }
}