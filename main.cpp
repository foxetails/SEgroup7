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
//More to be added
//Utility functions
#include <iostream>
#include <string>
using namespace std;

int main() {
    //Main goes here

    return 0;
}

