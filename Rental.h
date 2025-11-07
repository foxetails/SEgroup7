#include <ctime>
using namespace std;

#ifndef RENTAL_H
#define RENTAL_H

class Rental {
public:
    //Constructor
    Rental();

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

    //Getrentdate

    //Getduedate

    //getReturndate

    Status getStatus();
    void setStatus(Status s);

    float getLateFeeAccrued();
    void setLateFeeAccrued(float f);

    //delete, print

private:
    int rentalID;
    int copyID;
    int customerID;
    //rentDate
    //dueDate
    //returnDate
    Status status;
    float lateFeeAccrued;
};

#endif