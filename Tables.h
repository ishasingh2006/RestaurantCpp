#ifndef TABLES_H
#define TABLES_H

#include <iostream>
using namespace std;

class Tables {
    int TABLENUMBER;
    unsigned int CAPACITY;
    int TOTALTABLE;
    bool ISOOCUPPIED;

public:
    Tables();
    int getTABLENUMBER();
    int getCAPACITY();
    int getTOTALTABLE();
    bool getISOCCUPIED();
    void setTABLENUMBER(int TABLENUMBER);
    void setCAPACITY(int CAPACITY);
    void setTOTALTABLE(int TOTALTABLE);
    void setISOCCUPIED(bool ISOCCUPIED);
    void showdetails();
};

#endif
