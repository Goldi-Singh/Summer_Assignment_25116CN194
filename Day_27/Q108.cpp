#include<bits/stdc++.h>
using namespace std;
//marksheet generation system
class Marksheet
{
private:
    int rollNo;
    string name;
    int m1, m2, m3;
    int total;
    float percentage;

public:
    // Default Constructor
    Marksheet()
    {
        rollNo = 0;
        name = "";
        m1 = m2 = m3 = 0;
        total = 0;
        percentage = 0;
    }

    // Parameterized Constructor
    Marksheet(int r, string n, int s1, int s2, int s3)
    {
        rollNo = r;
        name = n;
        m1 = s1;
        m2 = s2;
        m3 = s3;

        total = m1 + m2 + m3;
        percentage = total / 3.0;
    }

    // Display Marksheet
    void display()
    {
        cout << "\n----------- Marksheet -----------" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Subject 1   : " << m1 << endl;
        cout << "Subject 2   : " << m2 << endl;
        cout << "Subject 3   : " << m3 << endl;
        cout << "Total Marks : " << total << endl;
        cout << "Percentage  : " << percentage << "%" << endl;
    }

    // Getter Function
    int getRollNo()
    {
        return rollNo;
    }
};

int main()
{
    Marksheet s[100];
    int count = 0;
    int choice = 0;

    while(choice != 4)
    {
        cout << "\n===== Marksheet Generation System =====" << endl;
        cout << "1. Add Student Marks" << endl;
        cout << "2. Display All Marksheets" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int roll, m1, m2, m3;
            string name;

            cout << "Enter Roll Number: ";
            cin >> roll;

            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Marks of Subject 1: ";
            cin >> m1;

            cout << "Enter Marks of Subject 2: ";
            cin >> m2;

            cout << "Enter Marks of Subject 3: ";
            cin >> m3;

            s[count] = Marksheet(roll, name, m1, m2, m3);
            count++;

            cout << "Marksheet Generated Successfully!" << endl;
        }

        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "No Records Found!" << endl;
            }
            else
            {
                for(int i = 0; i < count; i++)
                {
                    s[i].display();
                }
            }
        }

        else if(choice == 3)
        {
            int roll;
            bool found = false;

            cout << "Enter Roll Number to Search: ";
            cin >> roll;

            for(int i = 0; i < count; i++)
            {
                if(s[i].getRollNo() == roll)
                {
                    s[i].display();
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "Student Not Found!" << endl;
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