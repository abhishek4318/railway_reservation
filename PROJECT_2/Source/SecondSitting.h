// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef SECOND_SITTING_H
#define SECOND_SITTING_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class SecondSitting : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;      
    const int numberOfTiers_;       
    const bool hasSeat_;       
    // Constant Pointer for the class    
    static SecondSitting *myClass;       
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;

    // Constant Pointer for the class
    SecondSitting(string name = "Second Sitting" , float loadfactor = 0.6f , bool seat = 1 , bool ac = 0 , int num_tiers = 0 , bool luxury = 0,int mintatkal = 10 , int maxtatkal = 15, int mindistance = 100 , int reservationcharge = 15);

public:
    ~SecondSitting();
    static const SecondSitting& Type();     
    float GetLoadFactor() const;
    string GetName() const;
    // Deleting(Removing) the copy constructor and assignment operator
    SecondSitting(const SecondSitting& other) = delete;
    SecondSitting& operator=(const SecondSitting& other) = delete;
    bool IsSitting() const;
    bool IsAC() const;                  
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    // Function for unit testing of the class
    static void UnitTestSecondSitting();  
    // Friend function to output the details easily   
    friend ostream& operator<<(ostream& os , const SecondSitting& secondSitting);
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetReservationCharge() const {return reservationCharges_;};
};


#endif