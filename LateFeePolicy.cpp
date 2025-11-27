#include "LateFeePolicy.h"
#include <iostream>
using namespace std;

// Default constructor
LateFeePolicy::LateFeePolicy() {
    policyID = 0;
    gracePeriodDays = 1;
    dailyLateFeeRate = 1.50f;
    maxLateFee = 25.0f;
}

// Destructor
LateFeePolicy::~LateFeePolicy() {
}

// Getters and setters

int LateFeePolicy::getPolicyID() {
    return policyID;
}

void LateFeePolicy::setPolicyID(int n) {
    policyID = n;
}

int LateFeePolicy::getGracePeriodDays() {
    return gracePeriodDays;
}

void LateFeePolicy::setGracePeriodDays(int n) {
    gracePeriodDays = n;
}

float LateFeePolicy::getDailyLateFeeRate() {
    return dailyLateFeeRate;
}

void LateFeePolicy::setDailyLateFeeRate(float n) {
    dailyLateFeeRate = n;
}

float LateFeePolicy::getMaxLateFee() {
    return maxLateFee;
}

void LateFeePolicy::setMaxLateFee(float n) {
    maxLateFee = n;
}

// Print function
void LateFeePolicy::printLateFeePolicyInfo() {
    cout << "Policy ID: " << policyID << endl;
    cout << "Grace Period (days): " << gracePeriodDays << endl;
    cout << "Daily Late Fee Rate: " << dailyLateFeeRate << endl;
    cout << "Max Late Fee: " << maxLateFee << endl;
}
