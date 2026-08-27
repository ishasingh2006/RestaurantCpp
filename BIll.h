#define BILL_H
#include "MENU.h"
class Bill {
    static int nextBillNo;   
    int BILLNO;
    int CUSTOMERID;
    Menu items[30];
};