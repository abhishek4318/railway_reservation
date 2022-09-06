// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "ACFirstClass.h"
using namespace std;
// This is the initialisation of the singleton pointer
ACFirstClass *ACFirstClass::myClass = 0;    

// This is the constructor for the class, assigning the values for the variables
ACFirstClass::ACFirstClass(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const ACFirstClass& ACFirstClass::Type() {
    if(!myClass) {
        myClass = new ACFirstClass();       
    }
    return *myClass;
}

// Destructor for the class
ACFirstClass::~ACFirstClass() {}

// Getting the load factor for cost calculation
float ACFirstClass::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string ACFirstClass::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int ACFirstClass::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool ACFirstClass::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool ACFirstClass::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool ACFirstClass::IsLuxury() const{
    return this->isLuxury_;
}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const ACFirstClass& acfirstClass) {      
    os << "\nName : " << acfirstClass.name_ << "\n";
    os << "Load Factor : " << acfirstClass.loadFactor_ << "\n";
    os << "Is Sitting : " << acfirstClass.hasSeat_ << "\n";
    os << "Is AC : " << acfirstClass.isAC_ << "\n";
    os << "Is Luxury : " << acfirstClass.isLuxury_ << "\n";
    os << "Number of Tiers : " << acfirstClass.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void ACFirstClass::UnitTestACFirstClass() {            
    
    if(ACFirstClass::Type().name_ != "AC First Class") cout << "Name of the ACFirstClass class is wrong !" << "\n"; 
    
    if(ACFirstClass::Type().loadFactor_ != 6.50f) cout << "Load Factor of the ACFirstClass class is wrong !" << "\n";
    
    if(ACFirstClass::Type().isAC_ != 1) cout << "AC of the ACFirstClass class is wrong !" << "\n";
    
    if(ACFirstClass::Type().hasSeat_ != 0) cout << "Has Seat of the ACFirstClass class is wrong !" << "\n";         
    
    if(ACFirstClass::Type().numberOfTiers_ != 2) cout << "Number of Tiers of the ACFirstClass class is wrong !" << "\n"; 
    
    if(ACFirstClass::Type().isLuxury_ != 1) cout << "Luxury of the ACFirstClass class is wrong !" << "\n";
    
    if(ACFirstClass::Type().IsAC() != 1) cout << "IsAC function of the ACFirstClass class is wrong !" << "\n";
    
    if(ACFirstClass::Type().IsSitting() != 0) cout << "IsSitting function of the ACFirstClass class is wrong !" << "\n";
    
    if(ACFirstClass::Type().GetName() != "AC First Class") cout << "Name function of the ACFirstClass class is wrong !" << "\n";   
    
    if(ACFirstClass::Type().GetNumberOfTiers() != 2) cout << "GetNumberOfTiers function of the ACFirstClass class is wrong !" << "\n";   
    
    if(ACFirstClass::Type().IsLuxury() != 1) cout << "IsLuxury function of the ACFirstClass class is wrong !" << "\n";
    
    if(ACFirstClass::Type().GetLoadFactor() != 6.50f) cout << "Load Factor function of the ACFirstClass class is wrong !" << "\n";        
}
