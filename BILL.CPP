#include "Bill.h"

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
#include "Bill.h"
int main() {
    Bill b1, b2, b3;
    b1.readCustomerID();
    b2.readCustomerID();
    b3.readCustomerID();

    b1.show();
    b2.show();
    b3.show();

    return 0;
}
