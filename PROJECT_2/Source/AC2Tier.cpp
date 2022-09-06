// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include <cmath>
#include "AC2Tier.h"
using namespace std;
// This is the initialisation of the singleton pointer
AC2Tier *AC2Tier::myClass = 0;      

// This is the constructor for the class, assigning the values for the variables
AC2Tier::AC2Tier(string name , float loadfactor  , bool seat , bool ac  , int num_tiers  , bool luxury  , int mintatkal , int maxtatkal , int mindistance  , int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers){
    name_ = name;
    isLuxury_ = luxury;
    loadFactor_ = loadfactor;
    minimumTatkalDistance_ = mindistance;
    reservationCharges_ = reservationcharge;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
}

// Getting the load factor for cost calculation
float AC2Tier::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string AC2Tier::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int AC2Tier::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the constant pointer for the class, for using the information
const AC2Tier& AC2Tier::Type() {
    if(!myClass) {
        myClass = new AC2Tier();            
    }
    return *myClass;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool AC2Tier::IsAC() const{
    return this->isAC_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool AC2Tier::IsSitting() const{
    return this->hasSeat_;
}

// Getting whether the class is luxury or not
bool AC2Tier::IsLuxury() const{
    return this->isLuxury_;
}

// Destructor for the class
AC2Tier::~AC2Tier() {}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const AC2Tier& ac2Tier) {      
    os << "\nName : " << ac2Tier.name_ << "\n";
    os << "Load Factor : " << ac2Tier.loadFactor_ << "\n";
    os << "Is Sitting : " << ac2Tier.hasSeat_ << "\n";
    os << "Is AC : " << ac2Tier.isAC_ << "\n";
    os << "Is Luxury : " << ac2Tier.isLuxury_ << "\n";
    os << "Number of Tiers : " << ac2Tier.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void AC2Tier::UnitTestAC2Tier() {            
    if(AC2Tier::Type().name_ != "AC 2 Tier") cout << "Name of the AC2Tier class is wrong !" << "\n";
    
    if(fabs(AC2Tier::Type().loadFactor_ - 4.00f) > 0.01f) cout << "Load Factor of the AC2Tier class is wrong !" << "\n";
    
    if(AC2Tier::Type().hasSeat_ != 0) cout << "Has Seat of the AC2Tier class is wrong !" << "\n";         
    
    if(AC2Tier::Type().isAC_ != 1) cout << "AC of the AC2Tier class is wrong !" << "\n";
    
    if(AC2Tier::Type().isLuxury_ != 0) cout << "Luxury of the AC2Tier class is wrong !" << "\n";
    
    if(AC2Tier::Type().numberOfTiers_ != 2) cout << "Number of Tiers of the AC2Tier class is wrong !" << "\n"; 
    
    if(AC2Tier::Type().GetName() != "AC 2 Tier") cout << "Name function of the AC2Tier class is wrong !" << "\n";  
    
    if(AC2Tier::Type().GetLoadFactor() != 4.00f) cout << "Load Factor function of the AC2Tier class is wrong !" << "\n";        
    
    if(AC2Tier::Type().IsSitting() != 0) cout << "IsSitting function of the AC2Tier class is wrong !" << "\n";
    
    if(AC2Tier::Type().IsAC() != 1) cout << "IsAC function of the AC2Tier class is wrong !" << "\n";
    
    if(AC2Tier::Type().IsLuxury() != 0) cout << "IsLuxury function of the AC2Tier class is wrong !" << "\n";
    
    if(AC2Tier::Type().GetNumberOfTiers() != 2) cout << "GetNumberOfTiers function of the AC2Tier class is wrong !" << "\n";   
}