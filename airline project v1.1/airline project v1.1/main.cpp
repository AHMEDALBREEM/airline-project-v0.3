#include <iostream>
#include <cstdlib>
#include "user/admin/admin.h"
#include "user/customer/customer.h"
#include "user/user.h"
#include "tickets/tickets.h"
#include "iooperation/iooperation.h"
#include <unistd.h>
#define wait_and_cleen sleep(3);system("cls");

using namespace std;
void start_program();
void login();
void sgin_up();
int main()
{
    start_program();
    return 0;
}

void start_program()
{
    int x;
    cout << "Welcome to our system for airlines tickets" << endl;
    cout << "\n 1-Login \n 2-Sgin up \n 3-Exit\n" << endl;
    cout << "Enter the number :" << endl;
    cin >> x;
    switch(x)
    {
    case 1 :
        login();
        break;
    case 2:
        sgin_up();
        break;
    case 3:
        exit(1);
        break;
    }
}
void login()
{
    string username,user_temp;
    string password,pass_temp;
    int access_temp,admin_access_temp;
    int arr_temp[5];
    user u1,u2;
    cout << "Enter Username :" << endl;
    getline(cin,username);
    cout << "Enter Password :" << endl;
    getline(cin,password);
    while(/*file operator access for users*/)
    {
        if((username==user_temp)&&(password==pass_temp))
        {
            if((access_temp)&&(!admin_access_temp)){
            customer c1(user_temp,pass_temp,arr_temp[0],arr_temp[1],arr_temp[2],arr_temp[3],arr_temp[4]);
            wait_and_cleen
            cout << "Sign in Done ..!" <<endl;
            wait_and_cleen
            c1.customer_dashboard(c1);
        }
        else if((admin_access_temp)&&(access_temp)){
            admin a1(user_temp,pass_temp,arr_temp[0],arr_temp[1],arr_temp[2],arr_temp[3],arr_temp[4]);
            wait_and_cleen
            cout << "Sign in Done {ADMIN} ..!" <<endl;
            wait_and_cleen
            a1.admin_dashboard();
        }
        }

    }
    if(!((username==user_temp)&&(password==pass_temp)))
    {
        cout << "error input info of the user "<<endl;
        wait_and_cleen
    }
}

void sgin_up()
{
    string pass_temp,user_temp;
    cout << "Enter Username :" << endl;
    getline(cin,username);
    cout << "Enter Password :" << endl;
    getline(cin,password);
    customer c1(username,password,1,0,0,0,100000);
    cout << "Sign UP Done ..!" <<endl;
    wait_and_cleen
    c1.customer_dashboard(c1);
}
