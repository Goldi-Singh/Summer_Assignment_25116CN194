#include <bits/stdc++.h>
using namespace std;

struct Product {
    int id;
    string name;
    double price;
};

void registerProduct(Product catalog[], int &count) {
    cout << "Enter Product ID: ";
    cin >> catalog[count].id;
    cin.ignore();
    cout << "Enter Product Name: ";
    getline(cin, catalog[count].name);
    cout << "Enter Price ($): ";
    cin >> catalog[count].price;
    count++;
    cout << "Product listed in system.\n";
}

double calculateTotalBill(const Product catalog[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += catalog[i].price;
    }
    return total;
}

void printInvoice(const Product catalog[], int count) {
    if (count == 0) {
        cout << "No items added to cart.\n";
        return;
    }
    cout << "\n=========== INVOICE ===========\n";
    cout << "ID\tProduct Name\tPrice\n-------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout << catalog[i].id << "\t" << catalog[i].name << "\t\t$" << catalog[i].price << "\n";
    }
    cout << "-------------------------------\n";
    cout << "TOTAL PAYABLE: \t\t$" << calculateTotalBill(catalog, count) << "\n";
    cout << "===============================\n";
}

int main() {
    Product catalog[50];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n--- Mini Store Billing System ---\n";
        cout << "1. Scan / Add Product to Cart\n2. Generate Total Invoice\n3. Exit\nEnter Choice: ";
        cin >> choice;
        if (choice == 3) {
            cout << "Thank you for shopping with us!\n";
            break;
        }

        switch (choice) {
            case 1: registerProduct(catalog, count); break;
            case 2: printInvoice(catalog, count); break;
            default: cout << "Invalid command!\n";
        }
    }
}