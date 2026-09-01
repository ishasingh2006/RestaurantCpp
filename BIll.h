
#ifndef BILL_H
#define BILL_H

#include <iostream>
#include <string>
using namespace std;
#include "MENU.h"

class Bill {
    static int nextBillNo;
    int BILLNO;
    int CUSTOMERID;
    Menu items[30];

public:
    Bill(int custID = 0);
    void readCustomerID();
    void show();
};

#endif
