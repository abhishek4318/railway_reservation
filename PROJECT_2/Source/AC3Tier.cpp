// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "AC3Tier.h"
using namespace std;
// This is the initialisation of the singleton pointer
AC3Tier *AC3Tier::myClass = 0;      

// This is the constructor for the class, assigning the values for the variables
AC3Tier::AC3Tier(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury ,int mintatkal, int maxtatkal, int mindistance, int reservationcharge): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const AC3Tier& AC3Tier::Type() {
    if(!myClass) {
        myClass = new AC3Tier();        
    }
    return *myClass;
}

// Destructor for the class
AC3Tier::~AC3Tier() {}

// Getting the load factor for cost calculation
float AC3Tier::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string AC3Tier::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int AC3Tier::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool AC3Tier::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool AC3Tier::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool AC3Tier::IsLuxury() const{
    return this->isLuxury_;
}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const AC3Tier& ac3Tier) {      
    os << "\nName : " << ac3Tier.name_ << "\n";
    os << "Load Factor : " << ac3Tier.loadFactor_ << "\n";
    os << "Is Sitting : " << ac3Tier.hasSeat_ << "\n";
    os << "Is AC : " << ac3Tier.isAC_ << "\n";
    os << "Is Luxury : " << ac3Tier.isLuxury_ << "\n";
    os << "Number of Tiers : " << ac3Tier.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void AC3Tier::UnitTestAC3Tier() {            
    if(AC3Tier::Type().hasSeat_ != 0) cout << "Has Seat of the AC3Tier class is wrong !" << "\n";          
    
    if(AC3Tier::Type().name_ != "AC 3 Tier") cout << "Name of the AC3Tier class is wrong !" << "\n"; 
    
    if(AC3Tier::Type().loadFactor_ != 2.50f) cout << "Load Factor of the AC3Tier class is wrong !" << "\n";
    
    if(AC3Tier::Type().isLuxury_ != 0) cout << "Luxury of the AC3Tier class is wrong !" << "\n";
    
    if(AC3Tier::Type().isAC_ != 1) cout << "AC of the AC3Tier class is wrong !" << "\n";
    
    if(AC3Tier::Type().numberOfTiers_ != 3) cout << "Number of Tiers of the AC3Tier class is wrong !" << "\n";
    
    if(AC3Tier::Type().GetLoadFactor() != 2.50f) cout << "Load Factor function of the AC3Tier class is wrong !" << "\n";         
    
    if(AC3Tier::Type().GetName() != "AC 3 Tier") cout << "Name function of the AC3Tier class is wrong !" << "\n";   
    
    if(AC3Tier::Type().GetNumberOfTiers() != 3) cout << "GetNumberOfTiers function of the AC3Tier class is wrong !" << "\n";   
    
    if(AC3Tier::Type().IsSitting() != 0) cout << "IsSitting function of the AC3Tier class is wrong !" << "\n";
    
    if(AC3Tier::Type().IsLuxury() != 0) cout << "IsLuxury function of the AC3Tier class is wrong !" << "\n";
    
    if(AC3Tier::Type().IsAC() != 1) cout << "IsAC function of the AC3Tier class is wrong !" << "\n";
}