#ifndef ACCOUNTUI_H
#define ACCOUNTUI_H

#include <string>
#include <iostream>
using namespace std;

// Account UI Boundary Class
class AccountUI {
public:
    // Constructor
    AccountUI();

    // Getters and setters
    int getCurrentCustomerId();
    void setCurrentCustomerId(int n);

    string getValidationErrors();
    void setValidationErrors(string n);

    string getProfileForm();
    void setProfileForm(string n);

    // UI actions
    void displayProfile();
    void updateProfile();
    void showValidationError();
    void logout();

private:
    int currentCustomerId;
    string validationErrors;
    string profileForm;
};

#endif
