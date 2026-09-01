#include <string>
#include <iostream>
using namespace std;
#include "MENU.h"

int Menu::TOTALITEM = 0;

Menu::Menu() {
    ++TOTALITEM;
    cout << "ENTER DISHNAME:";
    cin >> DISHNAME;
    cout << "ENTER TYPE:";
    cin >> TYPE;
    cout << "ENTER PRICE:";
    cin >> PRICE;
    cout << "IS THIS ITEM AVAILABLE (Y/N):";
    int choice;
    cin >> choice;
    (choice == 'Y' || choice == 'y') ? ISAAVAILABLE = true : ISAAVAILABLE = false;
}

string Menu::getDishName() {
    return DISHNAME;
}

string Menu::getType() {
    return TYPE;
}

int Menu::getPrice() {
    return PRICE;
}

bool Menu::getAvailability() {
    return ISAAVAILABLE;
}

int Menu::getTotalItem() {
    return TOTALITEM;
}

void Menu::setDishName(string DishName) {
    this->DISHNAME = DishName;
}

void Menu::setType(string Type) {
    this->TYPE = Type;
}

void Menu::setPrice(int Price) {
    this->PRICE = Price;
}

void Menu::setAvailability(bool Availaible) {
    this->ISAAVAILABLE = Availaible;
}

void Menu::showDetails() {
    cout << "---\n MENU DETAILS ---\n";
    cout << "DISHNAME:" << DISHNAME << endl;
    cout << "TYPE:" << TYPE << endl;
    cout << "PRICE:" << PRICE << endl;
    cout << "AVAILABLITIY:" << (ISAAVAILABLE == 0 ? "NO" : "YES") << endl;
}