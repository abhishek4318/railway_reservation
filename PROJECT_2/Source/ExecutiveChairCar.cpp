// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include <cmath>
#include "ExecutiveChairCar.h"
using namespace std;

// This is the initialisation of the singleton pointer
ExecutiveChairCar *ExecutiveChairCar::myClass = 0;      

// This is the constructor for the class, assigning the values for the variables
ExecutiveChairCar::ExecutiveChairCar(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury , int mintatkal, int maxtatkal, int mindistance, int reservationcharge): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const ExecutiveChairCar& ExecutiveChairCar::Type() {
    if(!myClass) {
        myClass = new ExecutiveChairCar();            
    }
    return *myClass;
}

// Getting the load factor for cost calculation
float ExecutiveChairCar::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string ExecutiveChairCar::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int ExecutiveChairCar::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool ExecutiveChairCar::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool ExecutiveChairCar::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool ExecutiveChairCar::IsLuxury() const{
    return this->isLuxury_;
}

// Destructor for the class
ExecutiveChairCar::~ExecutiveChairCar() {}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const ExecutiveChairCar& ExecutiveChairCar) {      
    os << "\nName : " << ExecutiveChairCar.name_ << "\n";
    os << "Load Factor : " << ExecutiveChairCar.loadFactor_ << "\n";
    os << "Is Sitting : " << ExecutiveChairCar.hasSeat_ << "\n";
    os << "Is AC : " << ExecutiveChairCar.isAC_ << "\n";
    os << "Is Luxury : " << ExecutiveChairCar.isLuxury_ << "\n";
    os << "Number of Tiers : " << ExecutiveChairCar.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void ExecutiveChairCar::UnitTestExecutiveChairCar() {            
    
    if(ExecutiveChairCar::Type().isLuxury_ != 1) cout << "Luxury of the ExecutiveChairCar class is wrong !" << "\n";
    
    if(ExecutiveChairCar::Type().numberOfTiers_ != 0) cout << "Number of Tiers of the ExecutiveChairCar class is wrong !" << "\n"; 
    
    if(fabs(ExecutiveChairCar::Type().loadFactor_ - 5.00f) > 0.01f) cout << "Load Factor of the ExecutiveChairCar class is wrong !" << "\n";
    
    if(ExecutiveChairCar::Type().hasSeat_ != 1) cout << "Has Seat of the ExecutiveChairCar class is wrong !" << "\n";          
    
    if(ExecutiveChairCar::Type().name_ != "Executive Chair Car") cout << "Name of the ExecutiveChairCar class is wrong !" << "\n"; 
    
    if(ExecutiveChairCar::Type().isAC_ != 1) cout << "AC of the ExecutiveChairCar class is wrong !" << "\n";
    
    if(ExecutiveChairCar::Type().IsAC() != 1) cout << "IsAC function of the ExecutiveChairCar class is wrong !" << "\n";
    
    if(ExecutiveChairCar::Type().IsSitting() != 1) cout << "IsSitting function of the ExecutiveChairCar class is wrong !" << "\n";
    
    if(ExecutiveChairCar::Type().GetLoadFactor() != 5.00f) cout << "Load Factor function of the ExecutiveChairCar class is wrong !" << "\n";         
    
    if(ExecutiveChairCar::Type().IsLuxury() != 1) cout << "IsLuxury function of the ExecutiveChairCar class is wrong !" << "\n";
    
    if(ExecutiveChairCar::Type().GetNumberOfTiers() != 0) cout << "GetNumberOfTiers function of the ExecutiveChairCar class is wrong !" << "\n";   
    
    if(ExecutiveChairCar::Type().GetName() != "Executive Chair Car") cout << "Name function of the ExecutiveChairCar class is wrong !" << "\n";   
}
