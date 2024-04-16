#include "user.h"
using namespace std;
#include<iostream>
user::user(std::string _username, std::string _password, int _access, int _admin_access, int _co_cert_, int _visa_cert_, int _balance_)
{
    username = _username;
    password = _password;
    access = _access;
    admin_access = _admin_access;
    co_cert = _co_cert_;
    visa_cert = _visa_cert_;
    balance = _balance_;
    cout << "created succssfuly "<<endl;
}

user::~user()
{}


std::string user::give_access_username()
{
    return username;
}

std::string user::give_access_password()
{
    return password;
}

int user::give_access_access()
{
    return access;
}

int user::give_access_admin_access()
{
    return admin_access;
}

int user::give_access_co_cert()
{
    return co_cert;
}

int user::give_access_visa_cert()
{
    return visa_cert;
}

int user::give_access_balance()
{
    return balance;
}

void user::edit_access_username(std::string _user)
{
    username = _user;
}

void user::edit_access_password(std::string _password)
{
    password = _password;
}

void user::edit_access_access(int _access)
{
    access = _access;
}

void user::edit_access_admin_access(int _admin_access)
{
    admin_access = _admin_access;
}

void user::edit_access_co_cert(int _co_cert__)
{
    co_cert = _co_cert__;
}

void user::edit_access_visa_cert(int _visa_cert_)
{
    visa_cert = _visa_cert_;
}

void user::edit_access_balance(int _balance_)
{
    balance = _balance_;
}

