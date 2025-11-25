#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>
using namespace std;

// Payment class
// Stores info about a payment made by a customer for a rental.
class Payment {
public:
    // Constructor
    Payment();

    // Destructor
    ~Payment();

    // Enum for payment method
    enum Method {
        CARD,
        CASH
    };

    // Enum for payment status
    enum Status {
        PENDING,
        CAPTURED,
        FAILED,
        REFUNDED
    };

    // Getters and setters
    int getPaymentID();
    void setPaymentID(int n);

    int getCustomerID();
    void setCustomerID(int n);

    float getAmount();
    void setAmount(float n);

    string getPaymentDate();
    void setPaymentDate(string n);

    Method getMethod();
    void setMethod(Method m);

    Status getStatus();
    void setStatus(Status s);

    void printPaymentInfo();

private:
    int paymentID;
    int customerID;
    float amount;
    string paymentDate;
    Method method;
    Status status;
};

#endif
