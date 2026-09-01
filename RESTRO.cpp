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
};

int main() {
    Restro r;
    r.showdetails();
    return 0;
}
