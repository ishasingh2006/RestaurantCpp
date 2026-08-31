#define customer_h
#include<string>
using namespace std;
class customer{
    private:
    int ID;
    string NAME;
    string ADDRESS;
    int CONTACT;
    static int TOTALCUSTOMER;
    public:
    //constructor
    customer();
    
        //getter
        int getID();
        string getName();
          string getAddress();
        int getContact();
    //setter
     void setName(string Name);
         
    void setAddress(string Address) ;
         
    void setContact(int Contact) ;
    //show details
    void showdetails();
    int getTotalCustomer();
};
