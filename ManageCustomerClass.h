
#include "Customer.h"
using namespace std;

#ifndef MANAGECUSTOMERCLASS_H
#define MANAGECUSTOMERCLASS_H    


class ManageCustomerClass
{

public:

    // Constructor
    ManageCustomerClass();
    // Destructor
    ~ManageCustomerClass();

    // Member Functions
    void AddCustomerProfile();
    void EditCustomerProfile();
    void DeleteCustomerProfile();
    void SearchCustomerProfile();
    


    //could be used later for file handling for games
    //  void GamesFromFile(const string& filename);

    
private:

    // Private Member Variables
  

}

#endif