#include "Restro.h"
#include "Customer.h"
#include "Table.h"
#include "Menu.h"
#include "Bill.h"
class Restro{
    
}

int main() {
    Restaurant r("Food Paradise", "Isha");

    r.showDetails();

    Customer c1("Rahul", 1);
    r.addCustomer(c1);

    Table t1(101, 4);
    r.addTable(t1);

    r.generateBill(c1);

    return 0;
}
