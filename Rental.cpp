#include "Rental.h"
#include <string>
#include <iostream>
using namespace std;

//Default constructor
Rental::Rental() {
    rentalID = 0;
    copyID = 0;
    customerID = 0;
    rentDate = "01-01-2025";
    returnDate = "01-01-2025";
    status == ACTIVE; //Default status
    lateFeeAccrued = 0.0;
}

//Destructor
Rental::~Rental() {
    //No dynamic memory to clear
}

//Getters and Setters

//Rental ID
int Rental::getRentalID() {
    return rentalID;
}
void Rental::setRentalID(int n) {
    rentalID = n;
}

//Copy ID
int Rental::getCopyID() {
    return copyID;
}
void Rental::setCopyID(int n) {
    copyID = n;
}

//CustomerID
int Rental::getCustomerID() {
    return customerID;
}
void Rental::setCustomerID(int n) {
    customerID = n;
}

//Rent Date
string Rental::getRentDate() {
    return rentDate;
}
void Rental::setRentDate(string n) {
    rentDate = n;
}

//Due Date
string Rental::getDueDate() {
    return dueDate;
}
void Rental::setDueDate(string n) {
    dueDate = n;
}

//Return date
string Rental::getReturnDate() {
    return returnDate;
}
void Rental::setReturnDate(string n) {
    returnDate = n;
}

//Status
Rental::Status Rental::getStatus() {
    return status;
}
void Rental::setStatus(Status s) {
    status = s;
}

//Late fee accrued
float Rental::getLateFeeAccrued() {
    return lateFeeAccrued;
}
void Rental::setLateFeeAccrued(float f) {
    lateFeeAccrued = f;
}

//Print
void Rental::printRentalInfo() {
    cout << "Rental ID: " << rentalID << endl;
    cout << "Game ID: " << copyID << endl;
    cout << "Customer ID: " << customerID << endl;
    cout << "Rent date: " << rentDate << endl;
    cout << "Due date: " << dueDate << endl;
    cout << "Return date: " << returnDate << endl;
    
    if (status == ACTIVE)
        cout << "Status: Active" << endl;
    else if (status == RETURNED)
        cout << "Status: Returned" << endl;
    else
        cout << "Status: Overdue" << endl;

    cout << "Late fee accrued: " << lateFeeAccrued << endl;
}
