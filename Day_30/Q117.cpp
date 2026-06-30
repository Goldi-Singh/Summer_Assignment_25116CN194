#include <bits/stdc++.h>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

void addStudent(Student records[], int &count) {
    if (count >= 100) {
        cout << "Database full!\n";
        return;
    }
    cout << "Enter Roll Number: ";
    cin >> records[count].rollNo;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, records[count].name);
    cout << "Enter Marks: ";
    cin >> records[count].marks;
    count++;
    cout << "Record added successfully!\n";
}

void displayStudents(const Student records[], int count) {
    if (count == 0) {
        cout << "No records found.\n";
        return;
    }
    cout << "\n--- Student Records ---\n";
    cout << "Roll No\tName\t\tMarks\n";
    for (int i = 0; i < count; i++) {
        cout << records[i].rollNo << "\t" << records[i].name << "\t\t" << records[i].marks << "\n";
    }
}

int main() {
    Student records[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n1. Add Student\n2. Display All Students\n3. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 3) break;

        switch (choice) {
            case 1: addStudent(records, count); break;
            case 2: displayStudents(records, count); break;
            default: cout << "Invalid choice!\n";
        }
    }

}