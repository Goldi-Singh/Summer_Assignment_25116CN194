#include<bits/stdc++.h>
using namespace std;
//menu driven string operation system
int main(){
int choice;
    string s1, s2;

    while (true) {
        cout << "\n--- String Operations Menu ---" << endl;
        cout << "1. Concatenate Strings\n2. Find String Length\n3. Reverse String\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) break;
        cin.ignore(); // Clears input buffer before reading strings

        switch (choice) {
            case 1:
                cout << "Enter first string: ";
                getline(cin, s1);
                cout << "Enter second string: ";
                getline(cin, s2);
                cout << "Concatenated String: " << (s1 + s2) << endl;
                break;

            case 2:
                cout << "Enter string: ";
                getline(cin, s1);
                cout << "Length of string: " << s1.length() << endl;
                break;

            case 3:
                cout << "Enter string to reverse: ";
                getline(cin, s1);
                reverse(s1.begin(), s1.end());
                cout << "Reversed String: " << s1 << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}