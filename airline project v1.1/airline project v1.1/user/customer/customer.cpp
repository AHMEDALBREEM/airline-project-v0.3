#include "customer.h"

using namespace std;

customer::customer(string _username, string _password, int _access, int _admin_access, int _co_cert_, int _visa_cert_, int _balance_)
    : user(_username, _password, _access, _admin_access, _co_cert_, _visa_cert_, _balance_)
{
    username= _username;
    password = _password;
    access = _access;
    admin_access = _admin_access;
    co_cert = _co_cert_;
    visa_cert= _visa_cert_;
    balance = _balance_;
}

customer::~customer()
{
    // Destructor
}

int customer::buy_ticket()
{
    int id_;
    cout << "Enter Id: " << endl;
    cin >> id_;
    // Search for the tickets based on id
    // mins the ticket price from his account
    // save the bought operation in file
    return 0;
}

int customer::return_ticket()
{
    int id_;
    cout << "Enter Id: " << endl;
    cin >> id_;
    // Search for id inside the operation file
    // Process the ticket return
    //  plus price of that ticket
    // save the returned  in file
    return 0;
}

void customer::customer_dashboard(customer c1)
{
    cout << "Welcome To User Panel " << endl;
    cout << "1 - Buy Ticket " << endl;
    cout << "2 - Return Ticket " << endl;
    cout << "3 - Exit Program " << endl;
    int x;
    cin >> x;
    switch (x)
    {
    case 1:
        customer::buy_ticket();
        break;
    case 2:
        customer::return_ticket();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout << "Invalid option. Please choose again." << endl;
        customer::customer_dashboard(c1);
        break;
    }
}
