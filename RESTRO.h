#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <string>
#include "Tables.h"
#include "MENU.h"
#include "customer.h"
#include "BIll.h"
using namespace std;

#define MAX_TABLES 50
#define MAX_CUSTOMERS 100
#define MAX_BILLS 100

class Restaurant {
    string name;
    string founder;
    Menu menu;
    Tables tables[MAX_TABLES];
    customer customers[MAX_CUSTOMERS];
    Bill bills[MAX_BILLS];

    int tableCount;
    int customerCount;
    int billCount;

public:
    Restaurant(string n, string f);
    void showDetails();
    void addCustomer(customer c);
    void addTable(Tables t);
    void generateBill(customer c);
};
#endif
