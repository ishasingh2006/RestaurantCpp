#define MENU_H


class Menu{
    string DISHNAME;
    string TYPE;
    int PRICE;
    bool ISAAVAILABLE;
    static int TOTALITEM;
    public:
    Menu();
    //constructor
    
    //getter
    string getDishName();
     string getType();
    int getPrice();
    bool getAvailability();
    int getTotalItem();
    
    //setter
    void setDishName( string DishName);
     void setType( string Type );
     void setPrice ( int Price );
    void setAvailability ( bool Availaible );
     
     //show all the details of Menu
     void showDetails();
     
};
int Menu::TOTALITEM=0;
















































