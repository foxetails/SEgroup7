// ManageStaffClass.cpp
#include<ManageStaffClass.h>
#include<iostream>

void ManageStaffClass::addStaffMember(const StaffMember& member) {
    staffMembers.push_back(member);
    std::cout << "Added staff member: " << member.getName() << std::endl;
}

void ManageStaffClass::removeStaffMember(const std::string& name) {
    auto it = std::remove_if(staffMembers.begin(), staffMembers.end(),
                             [&name](const StaffMember& member) {
                                 return member.getName() == name;
                             });
    if (it != staffMembers.end()) {
        staffMembers.erase(it, staffMembers.end());
        std::cout << "Removed staff member: " << name << std::endl;
    } else {
        std::cout << "Staff member not found: " << name << std::endl;
    }
}
void ManageStaffClass::listStaffMembers() const {
    std::cout << "Staff Members:" << std::endl;
    for (const auto& member : staffMembers) {
        std::cout << "- " << member.getName() << ", Position: " << member.getPosition() << std::endl;
    }
}


