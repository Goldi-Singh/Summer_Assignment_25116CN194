#include <bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    string designation;
};

void addEmployee(Employee staff[], int &count) {
    cout << "Enter Employee ID: ";
    cin >> staff[count].id;
    cin.ignore();
    cout << "Enter Employee Name: ";
    getline(cin, staff[count].name);
    cout << "Enter Designation: ";
    getline(cin, staff[count].designation);
    count++;
    cout << "Employee profile created.\n";
}

void viewStaff(const Employee staff[], int count) {
    if (count == 0) {
        cout << "No employees tracked.\n";
        return;
    }
    cout << "\nID\tName\t\tDesignation\n---------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout << staff[i].id << "\t" << staff[i].name << "\t\t" << staff[i].designation << "\n";
    }
}

int main() {
    Employee staff[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n1. Add Employee\n2. View Employee Directory\n3. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 3) break;

        switch (choice) {
            case 1: addEmployee(staff, count); break;
            case 2: viewStaff(staff, count); break;
            default: cout << "Invalid choice!\n";
        }
    }
}