// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef EXECUTIVECHAIRCAR_H
#define EXECUTIVECHAIRCAR_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

// Initialising the class
class ExecutiveChairCar : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;      
    const bool hasSeat_;     
    // Constant Pointer for the class      
    static ExecutiveChairCar *myClass;      
    int minimumTatkalCharge_;
    int maximumTatkalCharge_;
    int minimumTatkalDistance_;
    int reservationCharges_;

    // Constructor for the class
    ExecutiveChairCar(string name = "Executive Chair Car" , float loadfactor = 5.00f , bool seat = 1 , bool ac = 1 , int num_tiers = 0 , bool luxury = 1 , int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 250 , int reservationcharge = 60);

public:
    ~ExecutiveChairCar();
    static const ExecutiveChairCar& Type();    
    // Deleting(Removing) the copy constructor and assignment operator   
    ExecutiveChairCar(const ExecutiveChairCar& other) = delete;
    ExecutiveChairCar& operator=(const ExecutiveChairCar& other) = delete;
    // Friend function to output the details easily     
    friend ostream& operator<<(ostream& os , const ExecutiveChairCar& ExecutiveChairCar);
    float GetLoadFactor() const;
    int GetNumberOfTiers() const;
    bool IsAC() const;              
    bool IsSitting() const;
    bool IsLuxury() const;
    string GetName() const;
    int GetMaximumTatkalCharge() const {return maximumTatkalCharge_;};
    int GetReservationCharge() const {return reservationCharges_;};
    int GetMinimumTatkalDistance() const {return minimumTatkalDistance_;};
    int GetMinimumTatkalCharge() const {return minimumTatkalCharge_;};
    // Function for unit testing of the class 
    static void UnitTestExecutiveChairCar();     
};


#endif