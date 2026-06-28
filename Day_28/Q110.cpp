#include<bits/stdc++.h>
using namespace std;
//bank account system
class Bank
{
private:
    int accountNo;
    string name;
    float balance;

public:
    // Constructor
    Bank(int acc = 0, string n = "", float bal = 0)
    {
        accountNo = acc;
        name = n;
        balance = bal;
    }

    // Display Account Details
    void display()
    {
        cout << "\nAccount Number : " << accountNo << endl;
        cout << "Account Holder : " << name << endl;
        cout << "Balance        : " << balance << endl;
    }

    // Getter
    int getAccountNo()
    {
        return accountNo;
    }

    // Deposit Money
    void deposit(float amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    // Withdraw Money
    void withdraw(float amount)
    {
        if(amount <= balance)
        {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        }
        else
        {
            cout << "Insufficient Balance!\n";
        }
    }
};

int main()
{
    Bank b[100];
    int count = 0;
    int choice = 0;

    while(choice != 6)
    {
        cout << "\n===== Bank Account Management System =====\n";
        cout << "1. Add Account\n";
        cout << "2. Display All Accounts\n";
        cout << "3. Search Account\n";
        cout << "4. Deposit Money\n";
        cout << "5. Withdraw Money\n";
        cout << "6. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                int acc;
                string name;
                float balance;

                cout << "Enter Account Number: ";
                cin >> acc;

                cin.ignore();

                cout << "Enter Account Holder Name: ";
                getline(cin, name);

                cout << "Enter Initial Balance: ";
                cin >> balance;

                b[count] = Bank(acc, name, balance);
                count++;

                cout << "Account Created Successfully!\n";
                break;
            }

            case 2:
            {
                if(count == 0)
                {
                    cout << "No Accounts Found!\n";
                }
                else
                {
                    for(int i = 0; i < count; i++)
                    {
                        b[i].display();
                    }
                }
                break;
            }

            case 3:
            {
                int acc;
                bool found = false;

                cout << "Enter Account Number: ";
                cin >> acc;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].getAccountNo() == acc)
                    {
                        b[i].display();
                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Account Not Found!\n";
                }

                break;
            }

            case 4:
            {
                int acc;
                float amount;

                cout << "Enter Account Number: ";
                cin >> acc;

                cout << "Enter Amount to Deposit: ";
                cin >> amount;

                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].getAccountNo() == acc)
                    {
                        b[i].deposit(amount);
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 5:
            {
                int acc;
                float amount;

                cout << "Enter Account Number: ";
                cin >> acc;

                cout << "Enter Amount to Withdraw: ";
                cin >> amount;

                bool found = false;

                for(int i = 0; i < count; i++)
                {
                    if(b[i].getAccountNo() == acc)
                    {
                        b[i].withdraw(amount);
                        found = true;
                        break;
                    }
                }

                if(!found)
                    cout << "Account Not Found!\n";

                break;
            }

            case 6:
            {
                cout << "Thank You! Exiting Program...\n";
                break;
            }

            default:
            {
                cout << "Invalid Choice!\n";
            }
        }
    }
}