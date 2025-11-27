#include "Payment.h"
#include <iostream>
using namespace std;

// Default constructor
Payment::Payment() {
    paymentID = 0;
    customerID = 0;
    amount = 0.0f;
    paymentDate = "01-01-2025";
    method = CARD;
    status = PENDING;
}

// Destructor
Payment::~Payment() {
}

// Getters and setters

int Payment::getPaymentID() {
    return paymentID;
}

void Payment::setPaymentID(int n) {
    paymentID = n;
}

int Payment::getCustomerID() {
    return customerID;
}

void Payment::setCustomerID(int n) {
    customerID = n;
}

float Payment::getAmount() {
    return amount;
}

void Payment::setAmount(float n) {
    amount = n;
}

string Payment::getPaymentDate() {
    return paymentDate;
}

void Payment::setPaymentDate(string n) {
    paymentDate = n;
}

Payment::Method Payment::getMethod() {
    return method;
}

void Payment::setMethod(Method m) {
    method = m;
}

Payment::Status Payment::getStatus() {
    return status;
}

void Payment::setStatus(Status s) {
    status = s;
}

// Print function
void Payment::printPaymentInfo() {
    cout << "Payment ID: " << paymentID << endl;
    cout << "Customer ID: " << customerID << endl;
    cout << "Amount: " << amount << endl;
    cout << "Payment Date: " << paymentDate << endl;

    cout << "Method: ";
    if (method == CARD)
        cout << "Card" << endl;
    else
        cout << "Cash" << endl;

    cout << "Status: ";
    if (status == PENDING)
        cout << "Pending" << endl;
    else if (status == CAPTURED)
        cout << "Captured" << endl;
    else if (status == FAILED)
        cout << "Failed" << endl;
    else
        cout << "Refunded" << endl;
}
