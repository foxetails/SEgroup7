// ManageCustomerClass.cpp
#include "ManageCustomerClass.h"
#include <iostream>
using namespace std;


void ManageCustomerClass::addCustomer(const Customer& customer) {
    customers.push_back(customer);

}

void ManageCustomerClass::removeCustomer(int customerId) {
    customers.erase(remove_if(customers.begin(), customers.end(),
                                   [customerId](const Customer& c) { return c.getId() == customerId; }),
                    customers.end());
}

void ManageCustomerClass::updateCustomer(int customerId, const Customer& updatedCustomer) {
    for (auto& customer : customers) {
        if (customer.getId() == customerId) {
            customer = updatedCustomer;
            break;
        }
    }
}
