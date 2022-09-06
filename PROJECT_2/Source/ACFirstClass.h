// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef ACFIRSTCLASS_H
#define ACFIRSTCLASS_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class ACFirstClass : public BookingClasses {
    const int numberOfTiers_;      
    const bool isAC_;       
    bool isLuxury_;          
    const bool hasSeat_;   
    // Constant Pointer for the class        
    static ACFirstClass *myClass;       
    int minimumTatkalDistance_;
    int maximumTatkalCharge_;
    int reservationCharges_;
    int minimumTatkalCharge_;

    // Constructor for the class
    ACFirstClass(string name = "AC First Class" , float loadfactor = 6.50f , bool seat = 0 , bool ac = 1 , int num_tiers = 2 , bool luxury = 1,int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 60);

public:
    ~ACFirstClass();
    static const ACFirstClass& Type();   
    // Deleting(Removing) the copy constructor and assignment operator   
    ACFirstClass& operator=(const ACFirstClass& other) = delete;
    ACFirstClass(const ACFirstClass& other) = delete;
    // Friend function to output the details easily     
    friend ostream& operator<<(ostream& os , const ACFirstClass& acfirstClass);
    bool IsSitting() const;
    float GetLoadFactor() const;
    int GetNumberOfTiers() const;
    bool IsAC() const;          
    bool IsLuxury() const;
    string GetName() const;
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetReservationCharge() const {return reservationCharges_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    // Function for unit testing of the class      
    static void UnitTestACFirstClass();      
};


#endif