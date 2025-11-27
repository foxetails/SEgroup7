#ifndef LATEFEEPOLICY_H
#define LATEFEEPOLICY_H

#include <string>
using namespace std;

// LateFeePolicy class
// Stores rules for how late fees are calculated.
class LateFeePolicy {
public:
    // Constructor
    LateFeePolicy();

    // Destructor
    ~LateFeePolicy();

    // Getters and setters
    int getPolicyID();
    void setPolicyID(int n);

    int getGracePeriodDays();
    void setGracePeriodDays(int n);

    float getDailyLateFeeRate();
    void setDailyLateFeeRate(float n);

    float getMaxLateFee();
    void setMaxLateFee(float n);

    void printLateFeePolicyInfo();

private:
    int policyID;
    int gracePeriodDays;
    float dailyLateFeeRate;
    float maxLateFee;
};

#endif
