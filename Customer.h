//Customer class

#include <ctime>
#include <string>
using namespace std;

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
public:
    //Constructor
    Customer();

    //Public member functions
    int getCustomerID();
    void setCustomerID(int value);

    string getCustomerPassword();
    void setCustomerPassword(string n);

    string getFirstName();
    void setFirstName(string n);

    string getLastName();
    void setLastName(string n);

    string getEmail();
    void setEmail(string n);

    string getPhoneNumber();
    void setPhoneNumber(string n);

    string getAddressLine1();
    void setAddressLine1(string n);

    string getAddressLine2();
    void setAddressLine2(string n);

    string getCity();
    void setCity(string n);

    string getState();
    void setState(string n);

    string getZipCode();
    void setZipCode(string n);

    // NOTE: No timestamps are yet created for header files. Need to be integrated

private:
    int customerID;
    string customerPassword;
    string firstName;
    string lastName;
    string email;
    string phoneNumber;
    string addressLine1;
    string addressLine2;
    string city;
    string state;
    int zipCode;
    //Time variable goes here
};
#endif