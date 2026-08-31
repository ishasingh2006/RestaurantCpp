#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
#include "Table.h"
#include "Menu.h"
#include "Customer.h"
#include "Bill.h"
using namespace std;

#define MAX_TABLES 50
#define MAX_CUSTOMERS 100
#define MAX_BILLS 100

class Restaurant {
    string name;
    string founder;
    Menu menu;
    Table tables[MAX_TABLES];
    Customer customers[MAX_CUSTOMERS];
    Bill bills[MAX_BILLS];

    int tableCount;
    int customerCount;
    int billCount;

public:
    Restaurant(string n, string f);
    void showDetails();
    void addCustomer(Customer c);
    void addTable(Table t);
    void generateBill(Customer c);
};
#endif
