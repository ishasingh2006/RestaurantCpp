#include<iostream>
#include<string>
using namespace std;
#include "BIll.h"
class Bill {
    static int nextBillNo;   
    int BILLNO;
    int CUSTOMERID;
    Menu items[30];

public:
    Bill(int custID = 0) : CUSTOMERID(custID) {    //cust==customer
        BILLNO = nextBillNo;   
        nextBillNo++;          // increament for next bill 
    }
    //take inpur from user 
    void readCustomerID() {
        cout << "ENTER CUSTOMER ID: ";
        cin >> CUSTOMERID;
    }
    //show details
    void show() {
        cout << "Bill No: " << BILLNO << endl; 
        cout << "Customer ID: " << CUSTOMERID << endl;
    }
};

// static variable  initialization
int Bill::nextBillNo = 1001;

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
