#include <string>
using namespace std;

#ifndef RENTAL_H
#define RENTAL_H

class Rental {
public:
    //Constructor
    Rental();

    //Destructor
    ~Rental();

    //Status enum
    enum Status {
        ACTIVE,
        RETURNED,
        OVERDUE
    };

    //Getters and setters
    int getRentalID();
    void setRentalID(int n);

    int getCopyID();
    void setCopyID(int n);

    int getCustomerID();
    void setCustomerID(int n);

    string getRentDate();
    void setRentDate(string n);

    string getDueDate();
    void setDueDate(string n);

    string getReturnDate();
    void setReturnDate(string n);

    Status getStatus();
    void setStatus(Status s);

    float getLateFeeAccrued();
    void setLateFeeAccrued(float f);

    void printRentalInfo();

private:
    int rentalID;
    int copyID; //Referring to specific id of game
    int customerID;
    string rentDate;
    string dueDate;
    string returnDate;
    Status status;
    float lateFeeAccrued;
};

#endif