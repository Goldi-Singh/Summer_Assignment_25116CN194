#include<bits/stdc++.h>
using namespace std;
//employee mangement system
class Employee
{
private:
    int empId;
    string name;
    string department;
    float salary;

public:
    // Default Constructor
    Employee()
    {
        empId = 0;
        name = "";
        department = "";
        salary = 0.0;
    }

    // Parameterized Constructor
    Employee(int id, string n, string dept, float sal)
    {
        empId = id;
        name = n;
        department = dept;
        salary = sal;
    }

    // Display Employee Details
    void display()
    {
        cout << "\nEmployee ID : " << empId << endl;
        cout << "Name        : " << name << endl;
        cout << "Department  : " << department << endl;
        cout << "Salary      : " << salary << endl;
    }

    // Getter Function
    int getEmpId()
    {
        return empId;
    }
};
int main(){
Employee e[100];
    int count = 0;
    int choice = 0;

    while (choice != 4)
    {
        cout << "\n===== Employee Management System =====\n";
        cout << "1. Add Employee\n";
        cout << "2. Display All Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            int id;
            string name, dept;
            float salary;

            cout << "Enter Employee ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Employee Name: ";
            getline(cin, name);
            cout << "Enter Salary: ";
            cin >> salary;

            // Calling Parameterized Constructor
            e[count] = Employee(id, name, dept, salary);
            count++;

            cout << "\nEmployee Added Successfully!\n";
        }
        else if (choice == 2)
        {
            if (count == 0)
            {
                cout << "\nNo Employee Records Found.\n";
            }
            else
            {
                cout << "\n----- Employee Records -----\n";
                for (int i = 0; i < count; i++)
                {
                    e[i].display();
                }
            }
        }
        else if (choice == 3)
        {
            int id;
            bool found = false;

            cout << "Enter Employee ID to Search: ";
            cin >> id;

            for (int i = 0; i < count; i++)
            {
                if (e[i].getEmpId() == id)
                {
                    cout << "\nEmployee Found:\n";
                    e[i].display();
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nEmployee Not Found.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "\nThank You! Exiting Program...\n";
        }
        else
        {
            cout << "\nInvalid Choice! Please Try Again.\n";
        }
    }
}