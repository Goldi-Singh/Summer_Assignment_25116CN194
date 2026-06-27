#include<bits/stdc++.h>
using namespace std;
// salary management system
class Salary
{
private:
    int empId;
    string name;
    float basicSalary;
    float bonus;
    float totalSalary;

public:
    Salary()
    {
        empId = 0;
        name = "";
        basicSalary = 0;
        bonus = 0;
        totalSalary = 0;
    }

    // Parameterized Constructor
    Salary(int id, string n, float basic, float b)
    {
        empId = id;
        name = n;
        basicSalary = basic;
        bonus = b;
        totalSalary = basicSalary + bonus;
    }

    // Display Employee Salary
    void display()
    {
        cout << "\nEmployee ID  : " << empId << endl;
        cout << "Name         : " << name << endl;
        cout << "Basic Salary : " << basicSalary << endl;
        cout << "Bonus        : " << bonus << endl;
        cout << "Total Salary : " << totalSalary << endl;
    }

    // Getter Function
    int getEmpId()
    {
        return empId;
    }
};

int main()
{
    Salary s[100];
    int count = 0;
    int choice = 0;

    while(choice != 4)
    {
        cout << "\n===== Salary Management System =====" << endl;
        cout << "1. Add Salary Record" << endl;
        cout << "2. Display All Records" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            int id;
            string name;
            float basic, bonus;

            cout << "Enter Employee ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name);

            cout << "Enter Basic Salary: ";
            cin >> basic;

            cout << "Enter Bonus: ";
            cin >> bonus;

            // Calling Parameterized Constructor
            s[count] = Salary(id, name, basic, bonus);
            count++;

            cout << "Salary Record Added Successfully!" << endl;
        }

        else if(choice == 2)
        {
            if(count == 0)
            {
                cout << "No Records Found!" << endl;
            }
            else
            {
                cout << "\n----- Salary Records -----" << endl;
                for(int i = 0; i < count; i++)
                {
                    s[i].display();
                }
            }
        }

        else if(choice == 3)
        {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for(int i = 0; i < count; i++)
            {
                if(s[i].getEmpId() == id)
                {
                    cout << "\nEmployee Found:" << endl;
                    s[i].display();
                    found = true;
                    break;
                }
            }

            if(!found)
            {
                cout << "Employee Not Found!" << endl;
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