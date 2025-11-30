// ManageRentalClass.cpp
#include "ManageRentalClass.h"
#include <iostream>

using namespace std;


void ManageRentalClass::RequestRental(const string& customer, const string& rental_date, const string& return_date) {
    customerName = customer;
    rentalDate = rental_date;
    returnDate = return_date;
    isReturned = false;
    cout << "Rental requested successfully for " << customerName << endl;
}
void ManageRentalClass::printRentalInfo() {
    cout << "Rental ID: " << rentalID << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Rental Date: " << rentalDate << endl;
    cout << "Return Date: " << returnDate << endl;
}

void ManageRentalClass::extendRentalPeriod(const string& newReturnDate) {
    returnDate = newReturnDate;
}   
void ManageRentalClass::CalculateLateFees(int daysLate) {
    const double lateFeePerDay = 5.0; // Example late fee per day
    double totalLateFees = daysLate * lateFeePerDay;
    cout << "Total Late Fees: $" << totalLateFees << endl;
}
//Was in RentalClass 
void ManageRentalClass::getStatus() {
    cout << "Rental Status: " << (isReturned ? "Returned" : "Not Returned") << endl;
}   

