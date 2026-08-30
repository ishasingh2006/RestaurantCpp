
#ifndef BILL_H
#define BILL_H

#include <iostream>
#include <string>
using namespace std;

// Forward declaration of Menu class (agar alag se define kiya hai)
class Menu;

class Bill {
    static int nextBillNo;   // static member
    int BILLNO;
    int CUSTOMERID;
    Menu items[30];          // array of Menu items

public:
    Bill(int custID = 0);    // constructor declaration

    void readCustomerID();   // function to take input
    void show();             // function to display details
};

#endif
