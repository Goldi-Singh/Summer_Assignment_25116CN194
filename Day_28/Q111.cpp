
#include<bits/stdc++.h>
using namespace std;
// Ticket Booking System
class Ticket
{
private:
    int ticketNo;
    string name;
    string destination;
    float fare;

public:
    Ticket(int t = 0, string n = "", string d = "", float f = 0)
    {
        ticketNo = t;
        name = n;
        destination = d;
        fare = f;
    }

    void display()
    {
        cout << "Ticket Number : " << ticketNo << endl;
        cout << "Passenger Name: " << name << endl;
        cout << "Destination   : " << destination << endl;
        cout << "Fare          : " << fare << endl;
    }

    int getTicketNo()
    {
        return ticketNo;
    }
};

int main()
{
    Ticket t[100];
    int count = 0;
    int choice = 0;

    while(choice != 4)
    {
        cout << "\n### Ticket Booking System ###\n";
        cout << "1. Book Ticket\n";
        cout << "2. Display Tickets\n";
        cout << "3. Search Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Booking Ticket:\n";

                int ticketNo;
                string name, destination;
                float fare;

                cout << "Enter Ticket Number: ";
                cin >> ticketNo;

                cout << "Enter Passenger Name: ";
                cin >> name;

                cout << "Enter Destination: ";
                cin >> destination;

                cout << "Enter Fare: ";
                cin >> fare;

                t[count] = Ticket(ticketNo, name, destination, fare);
                count++;

                cout << "Ticket Booked Successfully!\n";
                break;
            }

            case 2:
            {
                cout << "Displaying Tickets:\n";

                for(int i = 0; i < count; i++)
                {
                    t[i].display();
                }
                break;
            }

            case 3:
            {
                int ticketNo;

                cout << "Enter Ticket Number to Search: ";
                cin >> ticketNo;

                for(int i = 0; i < count; i++)
                {
                    if(t[i].getTicketNo() == ticketNo)
                    {
                        cout << "Ticket Found:\n";
                        t[i].display();
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