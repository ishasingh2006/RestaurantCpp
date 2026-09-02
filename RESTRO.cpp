#include <iostream>
#include "customer.h"
#include "Tables.h"
#include "MENU.h"
#include "BIll.h"

class Restro {
private:
    string RESTRONAME;
    string OWNERNAME;
public:
    Restro() {
        cout << "ENTER RESTRO NAME:";
        getline(cin, RESTRONAME);
        cout << "ENTER OWNER NAME:";
        getline(cin, OWNERNAME);
    }

    void showdetails() {
        cout << "---- RESTRO DETAILS ----\n";
        cout << "RESTRONAME: " << RESTRONAME << endl;
        cout << "OWNERNAME:" << OWNERNAME << endl;

    }
         void showDashboard() {
        cout << "-------------------------------------\n";
        cout << "         WELCOME TO " << RESTRONAME << "\n";
        cout << "         Founder: " << OWNERNAME << "\n";
        cout << "--------------------------------------\n";
        cout << "              DASHBOARD              \n";
        cout << "-------------------------------------\n";
         int choice;
        cout << "\n----Restaurant Dashboard----\n";
        cout << "1. Tables\n";
        cout << "2. Menu\n";
        cout << "3. Bill\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\n--- Tables Section ---\n";
                cout<< "Enter the number of tables: ";
                break;
            case 2:
                cout << "\n--- Menu Section ---\n";    
                cout << "Enter the number of menu items: ";            
                break;
            case 3:
                cout << "\n--- Bill Section ---\n";   
                cout<<"Enter the number of bills: ";             
                break;
            case 4:
                cout << "\nExiting Dashboard... Thank you!\n";
        
                break;   
        } 
    }                   
};


int main() {
    Restro r;
    r.showdetails();
    return 0;
}
