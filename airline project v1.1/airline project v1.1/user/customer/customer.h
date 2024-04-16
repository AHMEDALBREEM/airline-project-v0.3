#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "user/user.h"

// Header file contents
// Declarations, definitions, etc.

class customer : public user {
public:
    customer(string _username, string _password, int _access, int _admin_access, int _co_cert_, int _visa_cert_, int _balance_);
    virtual ~customer();
    void customer_dashboard(customer c1);
    int buy_ticket();
    int return_ticket();
};

#endif
