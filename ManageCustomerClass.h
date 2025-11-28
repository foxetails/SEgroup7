// ManageCustomerClass.h
#include "Customer.h"
#include <vector>


#ifndef MANAGECUSTOMERCLASS_H
#define MANAGECUSTOMERCLASS_H    


class ManageCustomerClass
{
private:
    vector<Customer> userProfiles;

public:
    ManageCustomerClass();
    void addCustomer(const Customer& customer);
    void updateCustomer(const string& customerId, const Customer& updatedCustomer);
    void deleteCustomer(const string& customerId);


}



#endif