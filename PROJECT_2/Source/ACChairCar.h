// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef ACCHAIRCAR_H
#define ACCHAIRCAR_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class ACChairCar : public BookingClasses {
    const bool hasSeat_;           
    const bool isAC_;       
    bool isLuxury_;           
    const int numberOfTiers_;  
    // Constant Pointer for the class       
    static ACChairCar *myClass;      
    int maximumTatkalCharge_;
    int reservationCharges_;
    int minimumTatkalDistance_;
    int minimumTatkalCharge_;
 
    // Constructor for the class
    ACChairCar(string name = "AC Chair Car" , float loadfactor = 2.00f , bool seat = 1 , bool ac = 1 , int num_tiers = 0 , bool luxury = 0,int mintatkal = 125 , int maxtatkal = 225 , int mindistance = 250 , int reservationcharge = 40);

public:
    ~ACChairCar();
    // Deleting(Removing) the copy constructor and assignment operator
    ACChairCar& operator=(const ACChairCar& other) = delete;
    ACChairCar(const ACChairCar& other) = delete;
    static const ACChairCar& Type();        
    float GetLoadFactor() const;
    bool IsSitting() const;
    string GetName() const;
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    bool IsAC() const;  
    // Friend function to output the details easily             
    friend ostream& operator<<(ostream& os , const ACChairCar& acchairCar);
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetReservationCharge() const {return reservationCharges_;};
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    // Function for unit testing of the class
    static void UnitTestACChairCar();     
};


#endif