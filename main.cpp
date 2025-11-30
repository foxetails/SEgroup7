/* This is the main file that will access all headers and cpp files. 
Headers will be included in groups from entities, boundaries, and then controllers.
Lastly, we will include any other needed libraries not created within the repository. (Ex: IOstream, string, cmath etc.)*/

//Entities
#include "Customer.h"
#include "Game.h"
#include "GameCopy.h"
#include "Login.h"
#include "Payment.h"
#include "Rental.h"
#include "Staff.h"
//Boundaries
#include "AccountUI.h"
#include "AdminUI.h"
#include "InventoryUI.h"
#include "LateFeePolicy.h"
#include "RentalUI.h"
//Controllers
#include "ManageCustomerClass.h"
#include "ManageGameClass.h"
#include "ManageRentalClass.h"
#include "ManageStaffClass.h"
//Utility functions
#include <iostream>
#include <string>
using namespace std;

//Function to clear the screen, dependent upon operating system
void clearScreen()
{
    #ifdef _WIN32
        system("cls"); //Windows clear
    #else
        system("clear"); //Linux/MacOS clear
    #endif
}

//Function to display main menu, cuts into other functions
void showMainMenu()
{
    cout << "=============================================\n\n";
    cout << "       WELCOME TO THE GAME RENTAL SYSTEM       \n";
    cout << "=============================================\n";
    cout << "1. Login\n";
    cout << "2. Create Account\n";
    cout << "3. View Game Inventory\n";
    cout << "4. Quit\n\n";
    cout << "---------------------------------------------\n";
    cout << "Enter your choice: ";

}

void loginMenu()
{
    int choice;

    cout << "=============================================\n\n";
    cout << "                   LOGIN                       \n";
    cout << "=============================================\n";
    cout << "1. Create Account\n";
    cout << "2. Log in as Customer\n";
    cout << "3. Log in as Staff/Admin\n";
    cout << "4. Back to Main Menu\n";
    cout << "---------------------------------------------\n";
    cout << "Enter your choice: ";

    cin >> choice;

    switch(choice) {
        case 1:
            //Go to create account function
            break;
        case 2:
            //Go to log in customer screen
            break;
        case 3:
            //go to log in staff screen
            break;
        case 4:
            //Go back to menu loop
            break;
        default:
            cout << "Invalid option. Please try again\n";
            //Go back to menu
    }
}

int main() {
    //Main goes here

    //Main console screen upon execution
    int choice;

    do {
        clearScreen();
        showMainMenu();

        cin >> choice;

        switch (choice) {
            case 1:
                //Currently these are placeholders until the correct function is added and called
                loginMenu();
                break;
            case 2:
                cout << "\n[Create Account placeholder]\n";
                break;
            case 3:
                cout << "\n[View Inventory placeholder]\n";
                break;
            case 4:
                cout << "\nExiting Game Rental System...Goodbye!\n";
                break;
            default:
                cout <<"\nInvalid option. Please try again.\n";
        }

        if (choice != 4) {
            cout << "\nPress Enter to return to the menu...\n";
            cin.ignore();
            cin.get();
        }
    } while (choice != 4);

    return 0;
}


