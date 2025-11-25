#include "RentalUI.h"
using namespace std;

// Constructor
RentalUI::RentalUI() {
    selectedCopyId = 0;
    selectedRentalId = 0;
    returnCondition = "";
}

// Getters and setters
int RentalUI::getSelectedCopyId() {
    return selectedCopyId;
}

void RentalUI::setSelectedCopyId(int n) {
    selectedCopyId = n;
}

int RentalUI::getSelectedRentalId() {
    return selectedRentalId;
}

void RentalUI::setSelectedRentalId(int n) {
    selectedRentalId = n;
}

string RentalUI::getReturnCondition() {
    return returnCondition;
}

void RentalUI::setReturnCondition(string n) {
    returnCondition = n;
}

// UI actions
void RentalUI::displayRentalInfo() {
    cout << "Rental ID: " << selectedRentalId << endl;
    cout << "Copy ID: " << selectedCopyId << endl;
}

void RentalUI::submitReturn() {
    cout << "Processing Return for Rental ID: " << selectedRentalId << endl;
}

void RentalUI::confirmReturn() {
    cout << "Return Confirmed for Rental ID: " << selectedRentalId << endl;
}

void RentalUI::displayConfirmation() {
    cout << "Confirmation screen loaded." << endl;
}
