#include<iostream>
#include<string>
using namespace std;
class Customer{
    private:
    int ID;
    string NAME;
    string ADDRESS;
    int CONTACT;
    static int TOTALCUSTOMER;
    public:
    //constructor
    Customer(){
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
    int getID() { 
        return ID;
     }
    string getName() {
         return NAME; 
    }
    string getAddress() { 
        return ADDRESS;
     }
    int getContact() { 
        return CONTACT;
     }
     //setter
     void setName(string Name) {
         NAME = Name;
     }
    void setAddress(string Address) {
         ADDRESS = Address;
     }
    void setContact(int Contact) {
         CONTACT = Contact;
    }
    //Display all details of customer
    void showDetails() {
        cout << "\n--- CUSTOMER DETAILS ---\n";
        cout << "ID:" << ID << endl;
        cout << "NAME:" << NAME << endl;
        cout << "ADDRESS:" << ADDRESS << endl;
        cout << "CONTACT:" << CONTACT << endl;
    }
    //static variable
    static int getTotalCustomer(){
        return TOTALCUSTOMER;
    }
};
int Customer::TOTALCUSTOMER = 0;
int main(){
    Customer C;
    C.showDetails();
    return 0;
}
