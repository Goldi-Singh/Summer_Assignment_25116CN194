
#include <bits/stdc++.h>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

void addBook(Book library[], int &count) {
    cout << "Enter Book ID: ";
    cin >> library[count].id;
    cin.ignore();
    cout << "Enter Book Title: ";
    getline(cin, library[count].title);
    cout << "Enter Author Name: ";
    getline(cin, library[count].author);
    count++;
    cout << "Book added successfully!\n";
}

void showLibrary(const Book library[], int count) {
    if (count == 0) {
        cout << "Library is completely empty.\n";
        return;
    }
    cout << "\nID\tTitle\t\tAuthor\n---------------------------------\n";
    for (int i = 0; i < count; i++) {
        cout << library[i].id << "\t" << library[i].title << "\t\t" << library[i].author << "\n";
    }
}

int main() {
    Book library[100];
    int count = 0;
    int choice;

    while (true) {
        cout << "\n1. Add Book\n2. View Library\n3. Exit\nEnter choice: ";
        cin >> choice;
        if (choice == 3) break;

        switch (choice) {
            case 1: addBook(library, count); break;
            case 2: showLibrary(library, count); break;
            default: cout << "Invalid choice!\n";
        }
    }
    
}
