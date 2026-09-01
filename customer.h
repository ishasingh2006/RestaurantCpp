#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class customer {
private:
    int ID;
    string NAME;
    string ADDRESS;
    int CONTACT;
    static int TOTALCUSTOMER;

public:
    customer();

    int getID();
    string getName();
    string getAddress();
    int getContact();
    void setName(string Name);
    void setAddress(string Address);
    void setContact(int Contact);
    void showdetails();
    int getTotalCustomer();
};

#endif
