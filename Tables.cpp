#include<iostream>
#include<string>
using namespace std;
#include"Tables.h"
    Tables::Tables(){
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
    int Tables::getTABLENUMBER(){
        return TABLENUMBER;
    }
    int Tables:: getCAPACITY() {
        return CAPACITY;
    }
    int Tables::getTOTALTABLE(){
        return TOTALTABLE;
    }
    bool Tables:: getISOCCUPIED() {
        return ISOOCUPPIED;
    }
    //setter
    void Tables::setTABLENUMBER ( int TABLENUMBER ){
        this->TABLENUMBER = TABLENUMBER;
    }
    void Tables::setCAPACITY ( int CAPACITY ){
        this->CAPACITY = CAPACITY;
    }
    void Tables::setTOTALTABLE ( int TOTALTABLE ){
        this->TOTALTABLE = TOTALTABLE;
    }
    void Tables::setISOCCUPIED ( bool ISOCCUPIED ){
        this->ISOOCUPPIED=ISOCCUPIED;
    }
    //show all the details of tables
    void Tables:: showdetails(){
        cout<<"----\n TABLES DETAILS ----\n";
        cout<< "TABLENUMBER: " << TABLENUMBER <<endl;
        cout<< "CAPACITY:" << CAPACITY <<endl;
        cout<< "TOTALTABLE:" << TOTALTABLE <<endl;
        cout<< "ISOCCUPIED:" << (ISOOCUPPIED == 0 ? "NO" : "YES")<< endl;
    }


