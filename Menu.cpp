#include<iostream>
#include<string>
using namespace std;
class Menu{
    string DISHNAME;
    string TYPE;
    int PRICE;
    bool ISAAVAILABLE;
    static int TOTALITEM;
    public:
    //constructor
    Menu(){
        ++TOTALITEM;
        cout<<"ENTER DISHNAME:";
        getline(cin,DISHNAME);
        cout<<"ENTER TYPE:";
        getline(cin,TYPE);
        cout<<"ENTER PRICE:";
        cin>>PRICE;
        cout<<"IS THIS ITEM AVAILABLE (Y/N):";
        int choice;
        cin>>choice;
        (choice=='Y' || choice == 'y')?ISAAVAILABLE = true:ISAAVAILABLE=false;
    }
    //getter
     string getDishName() {
         return DISHNAME; 
    }
    string getType() { 
        return TYPE;
    }
    int getPrice() {
         return PRICE;
    }
    bool getAvailability() { 
        return ISAAVAILABLE;
    }
    static int getTotalItem() {
         return TOTALITEM; 
    }
    //setter
     void setDishName( string DishName) {
       this->DISHNAME = DishName;
     }
     void setType( string Type ){
        this-> TYPE = Type;
     }
     void setPrice ( int Price ) {
        this->PRICE = Price;
     }
     void setAvailability ( bool Availaible ) {
        this->ISAAVAILABLE = Availaible;
     }
     //show all the details of Menu
     void showDetails(){
        cout<<"---\n MENU DETAILS ---\n";
        cout<< "DISHNAME:" << DISHNAME <<endl;
        cout<< "TYPE:" << TYPE <<endl;
        cout<< "PRICE:" << PRICE <<endl;
        cout<< "AVAILABLITIY:" << (ISAAVAILABLE == 0 ? "NO" : "YES")<< endl;
     }
};
int Menu::TOTALITEM=0;
