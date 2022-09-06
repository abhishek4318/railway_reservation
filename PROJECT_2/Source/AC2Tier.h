// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef AC2TIER_H
#define AC2TIER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class AC2Tier : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_; 
    // Constant Pointer for the class         
    static AC2Tier *myClass;       
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;
    
    // Constant Pointer for the class    
    AC2Tier(string name = "AC 2 Tier" , float loadfactor = 4.0f , bool seat = 0 , bool ac = 1 , int num_tiers = 2 , bool luxury = 0 , int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 50);

public:
    float GetLoadFactor() const;
    ~AC2Tier();
    static const AC2Tier& Type();       
    // Deleting(Removing) the copy constructor and assignment operator
    AC2Tier& operator=(const AC2Tier& other) = delete;
    AC2Tier(const AC2Tier& other) = delete;
    int GetNumberOfTiers() const;
    string GetName() const;
    bool IsSitting() const;
    bool IsLuxury() const;
    bool IsAC() const;        
    // Function for unit testing of the class      
    static void UnitTestAC2Tier(); 
    // Friend function to output the details easily     
    friend ostream& operator<<(ostream& os , const AC2Tier& ac2Tier);
    int GetReservationCharge() const {return reservationCharges_;};
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
};


#endif