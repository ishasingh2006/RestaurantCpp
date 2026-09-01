#include "BIll.h"

// static variable initialization
int Bill::nextBillNo = 1001;

// constructor definition
Bill::Bill(int custID) : CUSTOMERID(custID) {
    BILLNO = nextBillNo;
    nextBillNo++;
}

// function definitions
void Bill::readCustomerID() {
    cout << "ENTER CUSTOMER ID: ";
    cin >> CUSTOMERID;
}

void Bill::show() {
    cout << "Bill No: " << BILLNO << endl;
    cout << "Customer ID: " << CUSTOMERID << endl;
}
