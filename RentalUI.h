#ifndef RENTALUI_H
#define RENTALUI_H

#include <string>
#include <iostream>
using namespace std;

// Rental UI Boundary Class
class RentalUI {
public:
    // Constructor
    RentalUI();

    // Getters and setters
    int getSelectedCopyId();
    void setSelectedCopyId(int n);

    int getSelectedRentalId();
    void setSelectedRentalId(int n);

    string getReturnCondition();
    void setReturnCondition(string n);

    // UI actions
    void displayRentalInfo();
    void submitReturn();
    void confirmReturn();
    void displayConfirmation();

private:
    int selectedCopyId;
    int selectedRentalId;
    string returnCondition;
};

#endif
