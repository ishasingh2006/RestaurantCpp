#define Tables_h
#include<iostream>
using namespace std;
class Tables{
    int TABLENUMBER;
    unsigned int CAPACITY;
    int TOTALTABLE;
    bool ISOOCUPPIED;
    public:
    //constructor
    Tables();
    //getter
    int getTABLENUMBER();
    int getCAPACITY() ;
    int getTOTALTABLE();    
    bool getISOCCUPIED() ;
   //setter
    void setTABLENUMBER ( int TABLENUMBER );
    void setCAPACITY ( int CAPACITY );
    void setTOTALTABLE ( int TOTALTABLE );
    void setISOCCUPIED ( bool ISOCCUPIED );
    //show details
    void showdetails();
};
