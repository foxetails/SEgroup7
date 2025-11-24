#include "Customer.h"
#include <iostream>
using namespace std;

//Default constructor
Customer::Customer() {
    customerID = 0;
    customerPassword = "";
    firstName = "";
    lastName = "";
    dob = "01-01-2025";
    email = "";
    phoneNumber = "";
    addressLine1 = "";
    addressLine2 = "";
    city = "";
    state = "";
    zipCode = 0;
    createdAt = "01-01-2025";
}

//Destructor
Customer::~Customer() {
    //No dynamic memory to release
}

//Getters and Setters

//CustomerID
int Customer::getCustomerID() {
    return customerID;
}

void Customer::setCustomerID(int value) {
    customerID = value;
}

//Customer Password
string Customer::getCustomerPassword() {
    return customerPassword;
}
void Customer::setCustomerPassword(string n) {
    customerPassword = n;
}

//First name
string Customer::getFirstName() {
    return firstName;
}
void Customer::setFirstName(string n) {
    firstName = n;
}

//Last name
string Customer::getLastName() {
    return lastName;
}
void Customer::setLastName(string n) {
    lastName = n;
}

//DOB
string Customer::getDateOfBirth() {
    return dob;
}
void Customer::setDateOfBirth(string n) {
    dob = n;
}

//Email
string Customer::getEmail() {
    return email;
}
void Customer::setEmail(string n) {
    email = n;
}

//Phone Number
string Customer::getPhoneNumber() {
    return phoneNumber;
}
void Customer::setPhoneNumber(string n) {
    phoneNumber = n;
}

//Address line 1
string Customer::getAddressLine1() {
    return addressLine1;
}
void Customer::setAddressLine1(string n) {
    addressLine1 = n;
}

//Address line 2
string Customer::getAddressLine2() {
    return addressLine2;
}
void Customer::setAddressLine2(string n) {
    addressLine2 = n;
}

//City
string Customer::getCity() {
    return city;
}
void Customer::setCity(string n) {
    city = n;
}

//State
string Customer::getState() {
    return state;
}
void Customer::setState(string n) {
    state = n;
}

//Zipcode
int Customer::getZipCode() {
    return zipCode;
}
void Customer::setZipCode(int n) {
    zipCode = n;
}

//CreatedAt
string Customer::getCreatedAt() {
    return createdAt;
}
void Customer::setCreatedAt(string n) {
    createdAt = n;
}

//Print function 
void Customer::printCustomerInfo() {
    cout << "Customer ID: " << customerID << endl;
    cout << "Password: " << customerPassword << endl;
    cout << "Customer name: " << firstName << " " << lastName << endl;
    cout << "Date of birth: " << dob << endl;
    cout << "Email: " << email << endl;
    cout << "Phone number: " << phoneNumber << endl;
    cout << "Address: \n" << addressLine1 << endl << addressLine2 << endl;
    cout << city << ", " << state << " " << zipCode << endl;
    cout << "Created at: " << createdAt << endl; 
}
