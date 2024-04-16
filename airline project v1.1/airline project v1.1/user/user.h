#ifndef USER_H
#define USER_H
using namespace std;
#pragma once

#include <string>

class user
{
public:
    user(std::string _username, std::string _password, int _access, int _admin_access, int _co_cert_, int _visa_cert_, int _balance_);
    virtual ~user();
    void delete_account();
    void view_account_info();
    std::string give_access_username();
    std::string give_access_password();
    int give_access_access();
    int give_access_admin_access();
    int give_access_co_cert();
    int give_access_visa_cert();
    int give_access_balance();
    void edit_access_username(std::string _user);
    void edit_access_password(std::string password);
    void edit_access_access(int _access);
    void edit_access_admin_access(int _admin_access);
    void edit_access_co_cert(int _co_cert__);
    void edit_access_visa_cert(int _visa_cert_);
    void edit_access_balance(int _balance_);

private:
    std::string username;
    std::string password;
    int access;
    int admin_access;
    int co_cert;
    int visa_cert;
    int balance;
};

#endif // USER_H
