#include "Staff.h"
#include <iostream>
using namespace std;

// Default Constructor
Staff::Staff() {
    ID = 0;
    password = "";
    firstName = "";
    lastName = "";
    email = "";
    phoneNumber = "";
    role = STAFF;  // Default role is STAFF
    createdAt = "01-01-2000";  // Default date for simplicity
    hourlyPay = 0.0;
}

// Destructor
Staff::~Staff() {
    // No dynamic memory to release, so empty body
}

// Getters and Setters

// Staff ID
int Staff::getStaffID() {
    return ID;
}

void Staff::setStaffID(int n) {
    ID = n;
}

// Staff Password
string Staff::getStaffPassword() {
    return password;
}

void Staff::setStaffPassword(string n) {
    password = n;
}

// First Name
string Staff::getFirstName() {
    return firstName;
}

void Staff::setFirstName(string n) {
    firstName = n;
}

// Last Name
string Staff::getLastName() {
    return lastName;
}

void Staff::setLastName(string n) {
    lastName = n;
}

// Email
string Staff::getEmail() {
    return email;
}

void Staff::setEmail(string n) {
    email = n;
}

// Phone Number
string Staff::getPhoneNumber() {
    return phoneNumber;
}

void Staff::setPhoneNumber(string n) {
    phoneNumber = n;
}

// Role
Staff::Role Staff::getRole() {
    return role;
}

void Staff::setRole(Role r) {
    role = r;
}

// Created At (Date)
string Staff::getCreatedAt() {
    return createdAt;
}

void Staff::setCreatedAt(string d) {
    createdAt = d;
}

//Hourly pay
float Staff::getHourlyPay() {
    return hourlyPay;
}
void Staff::setHourlyPay(float n) {
    hourlyPay = n;
}

// Print functions (optional, for simplicity, printing to console)

void Staff::printStaffInfo() {
    // Print all relevant staff information
    cout << "Staff ID: " << ID << endl;
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phoneNumber << endl;
    cout << "Role: " << (role == STAFF ? "Staff" : "Admin") << endl;
    cout << "Created At: " << createdAt << endl;
    cout << "Hourly pay: " << hourlyPay << endl;
}