// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef SLEEPER_H
#define SLEEPER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class Sleeper : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;    
    const bool hasSeat_;   
    // Constant Pointer for the class        
    static Sleeper *myClass;      
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;

    // Constant Pointer for the class
    Sleeper(string name = "Sleeper" , float loadfactor = 1.0f , bool seat = 0 , bool ac = 0 , int num_tiers = 3 , bool luxury = 0,int mintatkal = 100 , int maxtatkal = 200 , int mindistance = 500 , int reservationcharge = 20); 

public:
    ~Sleeper();
    static const Sleeper& Type();    
    float GetLoadFactor() const;
    string GetName() const;
    bool IsSitting() const;
    // Deleting(Removing) the copy constructor and assignment operator
    Sleeper(const Sleeper& other) = delete;
    Sleeper& operator=(const Sleeper& other) = delete;
    bool IsAC() const;               
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    // Function for unit testing of the class  
    static void UnitTestSleeper();    
    // Friend function to output the details easily
    friend ostream& operator<<(ostream& os , const Sleeper& sleeper);
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetReservationCharge() const {return reservationCharges_;};
};


#endif