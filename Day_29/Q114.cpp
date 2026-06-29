#include<bits/stdc++.h>
using namespace std;
// menu driven array operation system
int main(){
int arr[100];
int choice ,index,element;
int n=0;
do{
    cout<<"  ### ARRAY OPERATION SYSTEM MENU /n";
    cout<<" 1. insert element :"<<endl;
    cout<<" 2. delete element :"<<endl;
    cout<<" 3. display array  :"<<endl;
    cout<<" 4. exit :"<<endl;
    cout<<"enter your choice :";
    cin>>choice;
switch (choice) {
            case 1: 
                if (n < 100) {
                    cout << "Enter element to insert: ";
                    cin >> element;
                    arr[n] = element;
                    n++;
                    cout << "Element inserted successfully." << endl;
                } else {
                    cout << "Array is full!" << endl;
                }
                break;

            case 2: 
                if (n == 0) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Enter element value to delete: ";
                    cin >> element;
                    index = -1;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == element) {
                            index = i;
                            break;
                        }
                    }
                    if (index != -1) {
                        for (int i = index; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                        cout << "Element deleted successfully." << endl;
                    } else {
                        cout << "Element not found in array!" << endl;
                    }
                }
                break;

            case 3:
                if (n == 0) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < n; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "exit " << endl;
        }
    }while(choice!=4);
}