#include<iostream>
#include<string>
using namespace std;
#include"customer.h"

    //constructor
    customer::customer(){
        ++TOTALCUSTOMER;
        this->ID = TOTALCUSTOMER;
        cout<<"ENTER NAME:";
        getline(cin,NAME);
        cout<<"ENTER ADDRESS:";
        getline(cin,ADDRESS);
        cout<<"ENTER CONTACT:";
        cin>>CONTACT;
    }
    //getter
    int customer:: getID() { 
        return ID;
     }
    string customer:: getName() {
         return NAME; 
    }
    string customer:: getAddress() { 
        return ADDRESS;
     }
    int customer:: getContact() { 
        return CONTACT;
     }
     //setter
     void customer::setName(string Name) {
         NAME = Name;
     }
    void customer:: setAddress(string Address) {
         ADDRESS = Address;
     }
    void customer::setContact(int Contact) {
         CONTACT = Contact;
    }
    //Display all details of customer
    void customer::showdetails() {
        cout << "\n--- CUSTOMER DETAILS ---\n";
        cout << "ID:" << ID << endl;
        cout << "NAME:" << NAME << endl;
        cout << "ADDRESS:" << ADDRESS << endl;
        cout << "CONTACT:" << CONTACT << endl;
    }
    //static variable
    int customer::getTotalCustomer(){
        return TOTALCUSTOMER;
    }
int customer::TOTALCUSTOMER = 0;
