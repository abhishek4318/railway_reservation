// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class FirstClass : public BookingClasses {
    bool isLuxury_;          
    const bool isAC_;      
    const int numberOfTiers_;       
    const bool hasSeat_; 
    // Constant Pointer for the class              
    static FirstClass *myClass;      
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;

    // Constant Pointer for the class    
    FirstClass(string name = "First Class" , float loadfactor = 3.0f , bool seat = 0 , bool ac = 0 , int num_tiers = 2 , bool luxury = 1,int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 50);

public:
    ~FirstClass();
    // Deleting(Removing) the copy constructor and assignment operator
    FirstClass(const FirstClass& other) = delete;
    FirstClass& operator=(const FirstClass& other) = delete;
    // Friend function to output the details easily
    friend ostream& operator<<(ostream& os , const FirstClass& firstClass);
    static const FirstClass& Type();            
    bool IsAC() const;                  
    bool IsSitting() const;
    string GetName() const;
    float GetLoadFactor() const;
    bool IsLuxury() const;
    int GetNumberOfTiers() const;
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetReservationCharge() const {return reservationCharges_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    // Function for unit testing of the class 
    static void UnitTestFirstClass();      
};


#endif