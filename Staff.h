
#include <string>
#include <ctime>
using namespace std;

#ifndef STAFF_H
#define STAFF_H

class Staff {
public:
    //Constructor
    Staff();

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

    //Insert createdAt functions here

    //Insert create, delete, print functions here

private:
    int ID;
    string password;
    string firstName;
    string lastName;
    string email;
    string phoneNumber;
    Role role;
    //CreatedAt value

};

#endif