#include "AccountUI.h"
using namespace std;

// Constructor
AccountUI::AccountUI() {
    currentCustomerId = 0;
    validationErrors = "";
    profileForm = "";
}

// Getters and setters
int AccountUI::getCurrentCustomerId() {
    return currentCustomerId;
}

void AccountUI::setCurrentCustomerId(int n) {
    currentCustomerId = n;
}

string AccountUI::getValidationErrors() {
    return validationErrors;
}

void AccountUI::setValidationErrors(string n) {
    validationErrors = n;
}

string AccountUI::getProfileForm() {
    return profileForm;
}

void AccountUI::setProfileForm(string n) {
    profileForm = n;
}

// UI actions
void AccountUI::displayProfile() {
    cout << "Customer Profile for ID: " << currentCustomerId << endl;
}

void AccountUI::updateProfile() {
    cout << "Updating Profile..." << endl;
    cout << "Profile Updated Successfully" << endl;
}

void AccountUI::showValidationError() {
    cout << validationErrors << endl;
}

void AccountUI::logout() {
    cout << "Logging out user..." << endl;
    cout << "User logged out successfully." << endl;
}
