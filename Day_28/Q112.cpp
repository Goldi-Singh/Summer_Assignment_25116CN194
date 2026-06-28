#include<bits/stdc++.h>
using namespace std;
// Contact Management System
class Contact
{
private:
    int contactId;
    string name;
    string phone;
    string email;

public:
    Contact(int id = 0, string n = "", string p = "", string e = "")
    {
        contactId = id;
        name = n;
        phone = p;
        email = e;
    }

    void display()
    {
        cout << "Contact ID : " << contactId << endl;
        cout << "Name       : " << name << endl;
        cout << "Phone No   : " << phone << endl;
        cout << "Email      : " << email << endl;
    }

    int getContactId()
    {
        return contactId;
    }
};

int main()
{
    Contact c[100];
    int count = 0;
    int choice = 0;

    while(choice != 4)
    {
        cout << "\n### Contact Management System ###\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Adding Contact:\n";

                int id;
                string name, phone, email;

                cout << "Enter Contact ID: ";
                cin >> id;

                cout << "Enter Name: ";
                cin >> name;

                cout << "Enter Phone Number: ";
                cin >> phone;

                cout << "Enter Email: ";
                cin >> email;

                c[count] = Contact(id, name, phone, email);
                count++;

                cout << "Contact Added Successfully!\n";
                break;
            }

            case 2:
            {
                cout << "Displaying Contacts:\n";

                for(int i = 0; i < count; i++)
                {
                    c[i].display();
                }
                break;
            }

            case 3:
            {
                int id;

                cout << "Enter Contact ID to Search: ";
                cin >> id;

                for(int i = 0; i < count; i++)
                {
                    if(c[i].getContactId() == id)
                    {
                        cout << "Contact Found:\n";
                        c[i].display();
                        break;
                    }
                }
                break;
            }

            case 4:
            {
                cout << "Thank You!";
                break;
            }

            default:
            {
                cout << "Invalid Choice!";
            }
        }
    }
}