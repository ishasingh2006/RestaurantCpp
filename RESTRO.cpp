#include <iostream>
#include <fstream>
#include <conio.h>
#include "customer.h"
#include "Tables.h"
#include "MENU.h"
#include "BIll.h"
using namespace std;

class Restro {
private:
    static string RESTRONAME;
    static string OWNERNAME;

public:
    Restro() {
    }

    template <typename T>
    void saveDataToFile(const T& obj, const string& fileName) const {
        ofstream file(fileName, ios::binary | ios::app);
        if (!file) {
            cout << "Unable to open file: " << fileName << endl;
            return;
        }

        file.write(reinterpret_cast<const char*>(&obj), sizeof(T));
        file.close();
    }

    template <typename T>
    void readDataFromFile(const string& fileName) const {
        ifstream file(fileName, ios::binary);
        if (!file) {
            cout << "File not found: " << fileName << endl;
            return;
        }

        T obj;
        while (file.read(reinterpret_cast<char*>(&obj), sizeof(T))) {
            cout << "Data read successfully from " << fileName << endl;
        }

        file.close();
    }

    void showdetails() {
        cout << "---- RESTRO DETAILS ----\n";
        cout << "RESTRONAME: " << RESTRONAME << endl;
        cout << "OWNERNAME:" << OWNERNAME << endl;
    }

    void showDashboard() {
        int choice = 0;

        do {
            cout << "-------------------------------------\n";
            cout << "         WELCOME TO " << RESTRONAME << "\n";
            cout << "         Founder: " << OWNERNAME << "\n";
            cout << "--------------------------------------\n";
            cout << "              DASHBOARD              \n";
            cout << "-------------------------------------\n";
            cout << "\n-------Restaurant Dashboard-------\n";
            cout << "1. Tables\n";
            cout << "2. Menu\n";
            cout << "3. Bill\n";
            cout << "4. Exit\n";
            cout << "Enter your choice: ";

            if (!(cin >> choice)) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "\nInvalid input. Please enter a number.\n";
                continue;
            }

            switch (choice) {
            case 1: {
                int tablesChoice = 0;
                do {
                    cout << "\n--- Tables Section ---\n";
                    cout << "Total number of tables in the restaurant xxx\n";
                    cout << "option 1: Add Table\n";
                    cout << "option 2: How many tables are available?\n";
                    cout << "option 3: Display Tables\n";
                    cout << "option 4: How many tables are occupied?\n";
                    cout << "option 5: How many tables are Reserved?\n";
                    cout << "option 6: Exit\n";
                    cout << "Enter your choice: ";
                    cin >> tablesChoice;

                    if (tablesChoice == 1) {
                        // create object of table class
                        // automatically call the constructor of table class
                        // save the data to file using saveDataToFile function of Restro class
                        // msg "Table added successfully
                    } else if (tablesChoice == 2) {
                        // create object of table class
                        // read the data from file using readDataFromFile function of Restro class
                        // count the number of available tables and display it
                    } else if (tablesChoice == 3) {
                        // create object of table class
                        // read the data from file using readDataFromFile function of Restro class
                        // display the details of all tables
                    } else if (tablesChoice == 4) {
                        // create object of table class
                        // read the data from file using readDataFromFile function of Restro class
                        // check the availability of tables
                        // list all occupied tables and display the count of occupied tables
                    } else if (tablesChoice < 1 || tablesChoice > 6) {
                        cout << "Invalid choice.\n";
                    }
                } while (tablesChoice != 6);
                break;
            }
            case 2: {
                int menuChoice = 0;
                do {
                    cout << "\n--- Menu Section ---\n";
                    cout << "option 1: Add Menu Item\n";
                    cout << "option 2: Remove Menu Item\n";
                    cout << "option 3: How many items are available in the menu\n";
                    cout << "option 4: Display Menu\n";
                    cout << "option 5: How many items you want to order?\n";
                    cout << "option 6: Exit\n";
                    cout << "Enter your choice: ";
                    cin >> menuChoice;

                    if (menuChoice < 1 || menuChoice > 6) {
                        cout << "Invalid choice.\n";
                    }
                } while (menuChoice != 6);
                break;
            }
            case 3: {
                int billChoice = 0;
                do {
                    cout << "\n--- Bill Section ---\n";
                    cout << "option 1: Generate Bill\n";
                    cout << "option 2: Display Bill\n";
                    cout << "option 3: Exit\n";
                    cout << "Enter your choice: ";
                    cin >> billChoice;

                    if (billChoice < 1 || billChoice > 3) {
                        cout << "Invalid choice.\n";
                    }
                } while (billChoice != 3);
                break;
            }
            case 4:
                cout << "\nThank you!\n";
                cout << "\nThank you! Your satisfaction is our priority — see you soon!\n";
                cout << "\nThank you! Delicious moments await you again!\n";
                break;
            default:
                cout << "\nInvalid choice, please try again.\n";
            }
        } while (choice != 4);
    }
};

string Restro::RESTRONAME = "FOOD PARADISE";
string Restro::OWNERNAME = "ISHA SINGH ";

int main() {
    Restro r;
    r.showdetails();

    // Example: save any object to any .dat file
    // Menu item;
    // r.saveDataToFile(item, "menu.dat");

    r.showDashboard();
    return 0;
}
//printer