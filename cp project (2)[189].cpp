#include<iostream>
using namespace std;

int main()
{
    int u_input;
    int amount = 0, count = 0;
    int c = 0, r = 0, b = 0;
    const int MAX_PARKING = 50;

    while(true)
    {
        cout<<"\n\t\tWelcom to simple parking system"<<endl;
		cout << "\t\tPress 1 for Rickshaw (100 Rs)" << endl;
        cout << "\t\tPress 2 for Car (200 Rs)" << endl;
        cout << "\t\tPress 3 for Bus (300 Rs)" << endl;
        cout << "\t\tPress 4 to show the record" << endl;
        cout << "\t\tPress 5 to delete the record" << endl;
        cout << "\t\tPress 6 to exit" << endl;
        cout << "\t\tEnter your choice: ";
        
        cin >> u_input;

        if(cin.fail()) {
            cin.clear(); // clear the error flags
            cin.ignore(INT_MAX, '\n'); // discard invalid input
            cout << "Invalid input. Please enter a number between 1 and 6." << endl;
            continue;
        }

        switch(u_input)
        {
            case 1:
                if(count < MAX_PARKING)
                {
                    r++;
                    amount += 100;
                    count++;
                    cout << "Rickshaw parked. 100 Rs charged." << endl;
                }
                else
                    cout << "No more parking space available." << endl;
                break;

            case 2:
                if(count < MAX_PARKING)
                {
                    c++;
                    amount += 200;
                    count++;
                    cout << "Car parked. 200 Rs charged." << endl;
                }
                else
                    cout << "No more parking space available." << endl;
                break;

            case 3:
                if(count < MAX_PARKING)
                {
                    b++;
                    amount += 300;
                    count++;
                    cout << "Bus parked. 300 Rs charged." << endl;
                }
                else
                    cout << "No more parking space available." << endl;
                break;

            case 4:
                cout << "********************************************************" << endl;
                cout << "Total amount collected = " << amount << " Rs" << endl;
                cout << "Total number of vehicles parked = " << count << endl;
                cout << "Rickshaws parked = " << r << endl;
                cout << "Cars parked = " << c << endl;
                cout << "Buses parked = " << b << endl;
                cout << "Available parking slots = " << MAX_PARKING - count << endl;
                cout << "********************************************************" << endl;
                break;

            case 5:
                amount = 0;
                count = 0;
                r = 0;
                c = 0;
                b = 0;
                cout << "**************************************************" << endl;
                cout << "RECORD DELETED" << endl;
                cout << "***************************************************" << endl;
                break;

            case 6:
                cout << "Exiting the program. Thank you!" << endl;
                return 0;

            default:
                cout << "Invalid number entered. Please enter a number between 1 and 6." << endl;
        }
    }

    return 0;
}
