// ManageRentalClass.h
#include "Rental.h"
#include <vector>

#ifndef MANAGE_RENTAL_CLASS_H
#define MANAGE_RENTAL_CLASS_H   

class ManageRentalClass {
public:
    void RequestRental(Rental rental);
    void ProcessReturn(int rentalId);
    void RentalStatus(int rentalId);
    void ViewRentalHistory(int customerId);
    void extendRentalPeriod(int rentalId, int additionalDays);  
    void CalculateLateFees(int rentalId);


    private:    vector<Rental> rentals;
};
#endif // MANAGE_RENTAL_CLASS_H