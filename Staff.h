
#include <string>
#include <ctime>
using namespace std;

#ifndef STAFF_H
#define STAFF_H

class Staff {
public:
    //Default Constructor
    Staff();

    //Destructor 
    ~Staff();

    //Role enumerator defined here
    enum Role {
        STAFF,
        ADMIN
    };

    //Public member functions
    int getStaffID();
    void setStaffID(int n);

    string getStaffPassword();
    void setStaffPassword(string n);

    string getFirstName();
    void setFirstName(string n);

    string getLastName();
    void setLastName(string n);

    string getEmail();
    void setEmail(string n);

    string getPhoneNumber();
    void setPhoneNumber(string n);

    Role getRole();
    void setRole(Role r);

    //For simplicity, dates are stored in DD-MM-YYYY format as strings
    string getCreatedAt();
    void setCreatedAt(string d);

    float getHourlyPay();
    void setHourlyPay(float n);

    //Likely need print functions as well
    void printStaffInfo();

private:
    int ID;
    string password;
    string firstName;
    string lastName;
    string email;
    string phoneNumber;
    Role role;
    string createdAt;
    float hourlyPay;
};

#endif