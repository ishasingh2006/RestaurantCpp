#include<iostream>
#include<string>
using namespace std;
class Tables{
    int TABLENUMBER;
    unsigned int CAPACITY;
    int TOTALTABLE;
    bool ISOOCUPPIED;
    public:
    Tables(){
    cout<<"ENTER TABLE NUMBER:";
    cin>>TABLENUMBER;
    cout<<"ENTER CAPACITY:";
    cin>>CAPACITY;
    cout<<"ENTER TOTAL NUMBER OF TABLE:";
    cin>>TOTALTABLE;
    cout<<"IS TABLE IS OCCUPIED (Y/N):";
        int choice;
        cin>>choice;
        (choice=='Y' || choice == 'y')?ISOOCUPPIED = true:ISOOCUPPIED=false;
    }
    //getter
    int getTABLENUMBER(){
        return TABLENUMBER;
    }
    int getCAPACITY() {
        return CAPACITY;
    }
    int getTOTALTABLE(){
        return TOTALTABLE;
    }
    bool getISOCCUPIED() {
        return ISOOCUPPIED;
    }
    //setter
    void setTABLENUMBER ( int TABLENUMBER ){
        this->TABLENUMBER = TABLENUMBER;
    }
    void setCAPACITY ( int CAPACITY ){
        this->CAPACITY = CAPACITY;
    }
    void setTOTALTABLE ( int TOTALTABLE ){
        this->TOTALTABLE = TOTALTABLE;
    }
    void setISOCCUPIED ( bool ISOCCUPIED ){
        this->ISOOCUPPIED=ISOCCUPIED;
    }
    //show all the details of tables
    void showdetails(){
        cout<<"----\n TABLES DETAILS ----\n";
        cout<< "TABLENUMBER: " << TABLENUMBER <<endl;
        cout<< "CAPACITY:" << CAPACITY <<endl;
        cout<< "TOTALTABLE:" << TOTALTABLE <<endl;
        cout<< "ISOCCUPIED:" << (ISOOCUPPIED == 0 ? "NO" : "YES")<< endl;
    }

};

