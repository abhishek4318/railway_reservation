// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef AC3TIER_H
#define AC3TIER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class AC3Tier : public BookingClasses {
    const bool hasSeat_;           
    bool isLuxury_;           
    const int numberOfTiers_;       
    const bool isAC_; 
    // Constant Pointer for the class         
    static AC3Tier *myClass;      
    int minimumTatkalDistance_;
    int reservationCharges_;
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;

    // Constructor for the class
    AC3Tier(string name = "AC 3 Tier" , float loadfactor = 2.50f , bool seat = 0 , bool ac = 1 , int num_tiers = 3 , bool luxury = 0,int mintatkal = 300 , int maxtatkal = 400 , int mindistance = 500 , int reservationcharge = 40);

public:
    ~AC3Tier();
    // Deleting(Removing) the copy constructor and assignment operator
    AC3Tier(const AC3Tier& other) = delete;
    AC3Tier& operator=(const AC3Tier& other) = delete;
    string GetName() const;
    float GetLoadFactor() const;
    bool IsSitting() const;
    static const AC3Tier& Type();       
    bool IsLuxury() const;
    int GetNumberOfTiers() const;
    bool IsAC() const;   
    // Friend function to output the details easily                
    friend ostream& operator<<(ostream& os , const AC3Tier& ac3Tier);
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetReservationCharge() const {return reservationCharges_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    // Function for unit testing of the class 
    static void UnitTestAC3Tier();      
};


#endif