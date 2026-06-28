#include<bits/stdc++.h>
using namespace std;
//library management system
class Library
{
private:
    int bookId;
    string bookName;
    string author;
    float price;

public:
    // Default Constructor
    Library()
    {
        bookId = 0;
        bookName = "";
        author = "";
        price = 0;
    }

    // Parameterized Constructor
    Library(int id, string bName, string aName, float p)
    {
        bookId = id;
        bookName = bName;
        author = aName;
        price = p;
    }

    // Display Book Details
    void display()
    {
        cout << "\nBook ID   : " << bookId << endl;
        cout << "Book Name : " << bookName << endl;
        cout << "Author    : " << author << endl;
        cout << "Price     : " << price << endl;
    }

    // Getter Function
    int getBookId()
    {
        return bookId;
    }
};

int main()
{
    Library book[100];
    int count = 0;
    int choice = 0;

    while(choice != 4)
    {
        cout << "\n===== Library Management System =====" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int id;
            string name, author;
            float price;

            cout << "Enter Book ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Book Name: ";
            getline(cin, name);

            cout << "Enter Author Name: ";
            getline(cin, author);

            cout << "Enter Book Price: ";
            cin >> price;

            // Calling Parameterized Constructor
            book[count] = Library(id, name, author, price);
            count++;

            cout << "Book Added Successfully!" << endl;
        }

        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "No Books Available!" << endl;
            }
            else
            {
                cout << "\n----- Library Records -----" << endl;
                for(int i = 0; i < count; i++)
                {
                    book[i].display();
                }
            }
        }

        else if(choice == 3)
        {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(book[i].getBookId() == id)
                {
                    cout << "\nBook Found:" << endl;
                    book[i].display();
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "Book Not Found!" << endl;
            }
        }

        else if(choice == 4)
        {
            cout << "Thank You! Exiting Program..." << endl;
        }

        else
        {
            cout << "Invalid Choice!" << endl;
        }
    }

}