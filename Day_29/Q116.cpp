#include<bits/stdc++.h>
using namespace std;
//inventory management system
struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item inventory[50];
    int itemCount = 0;
    int choice;

    do {
        cout << "\n--- Inventory Management ---" << endl;
        cout << "1. Add Item :"<<endl;
        cout<<"2. Display Inventory :"<<endl;
        cout<<"3. Exit :" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                if (itemCount < 50) {
                    cout << "Enter Item ID: ";
                    cin >> inventory[itemCount].id;
                    cin.ignore();
                    cout << "Enter Item Name: ";
                    getline(cin, inventory[itemCount].name);
                    cout << "Enter Quantity: ";
                    cin >> inventory[itemCount].quantity;
                    itemCount++;
                    cout << "Item added to inventory!" << endl;
                } else {
                    cout << "Inventory tracking space is full!" << endl;
                }
                break;

            case 2:
                if (itemCount == 0) {
                    cout << "No items in inventory." << endl;
                } else {
                    cout << "\nID\tName\t\tQuantity" << endl;
                    cout << "---------------------------------" << endl;
                    for (int i = 0; i < itemCount; i++) {
                        cout << inventory[i].id <<endl; 
                        cout<<inventory[i].name <<endl;
                        cout<<inventory[i].quantity<< endl;
                    }
                }
                break;

            default :
                cout << "Invalid option chosen!" << endl;
        }
    }while(choice!=3);
}