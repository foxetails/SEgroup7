
#include<Staff.h>
#include<vector>

using namespace std;

#ifndef MANAGESTAFFCLASS_H
#define MANAGESTAFFCLASS_H

class ManageStaffClass {

private:
    vector<Staff> staffList;


public:
    ManageStaffClass();
    void addStaff(const Staff& staff);
    void updateStaffRole(int staffID, const string& newRole);
    void removeStaff(int staffID);
    void displayAllStaff() const;   

};

#endif //

