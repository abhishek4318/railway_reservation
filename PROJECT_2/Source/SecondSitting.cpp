// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "SecondSitting.h"
using namespace std;

// This is the initialisation of the singleton pointer
SecondSitting *SecondSitting::myClass = 0;          

// This is the constructor for the class, assigning the values for the variables
SecondSitting::SecondSitting(string name , float loadfactor , bool seat , bool ac  , int num_tiers  , bool luxury ,int mintatkal, int maxtatkal, int mindistance, int reservationcharge) : hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const SecondSitting& SecondSitting::Type() {
    if(!myClass) {
        myClass = new SecondSitting();         
    }
    return *myClass;
}

// Getting the load factor for cost calculation
float SecondSitting::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string SecondSitting::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int SecondSitting::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool SecondSitting::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool SecondSitting::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool SecondSitting::IsLuxury() const{
    return this->isLuxury_;
}

// Destructor for the class
SecondSitting::~SecondSitting() {}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const SecondSitting& secondSitting) {      
    os << "\nName : " << secondSitting.name_ << "\n";
    os << "Load Factor : " << secondSitting.loadFactor_ << "\n";
    os << "Is Sitting : " << secondSitting.hasSeat_ << "\n";
    os << "Is AC : " << secondSitting.isAC_ << "\n";
    os << "Is Luxury : " << secondSitting.isLuxury_ << "\n";
    os << "Number of Tiers : " << secondSitting.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void SecondSitting::UnitTestSecondSitting() {           
    
    if(SecondSitting::Type().name_ != "Second Sitting") cout << "Name of the SecondSitting class is wrong !" << "\n"; 
    
    if(SecondSitting::Type().loadFactor_ != 0.60f) cout << "Load Factor of the SecondSitting class is wrong !" << "\n";
    
    if(SecondSitting::Type().hasSeat_ != 1) cout << "Has Seat of the SecondSitting class is wrong !" << "\n";          
    
    if(SecondSitting::Type().isAC_ != 0) cout << "AC of the SecondSitting class is wrong !" << "\n";
    
    if(SecondSitting::Type().isLuxury_ != 0) cout << "Luxury of the SecondSitting class is wrong !" << "\n";
    
    if(SecondSitting::Type().numberOfTiers_ != 0) cout << "Number of Tiers of the SecondSitting class is wrong !" << "\n"; 
    
    if(SecondSitting::Type().GetName() != "Second Sitting") cout << "Name function of the SecondSitting class is wrong !" << "\n";   
    
    if(SecondSitting::Type().GetLoadFactor() != 0.60f) cout << "Load Factor function of the SecondSitting class is wrong !" << "\n";         
    
    if(SecondSitting::Type().IsSitting() != 1) cout << "IsSitting function of the SecondSitting class is wrong !" << "\n";
    
    if(SecondSitting::Type().IsAC() != 0) cout << "IsAC function of the SecondSitting class is wrong !" << "\n";
    
    if(SecondSitting::Type().IsLuxury() != 0) cout << "IsLuxury function of the SecondSitting class is wrong !" << "\n";
    
    if(SecondSitting::Type().GetNumberOfTiers() != 0) cout << "GetNumberOfTiers function of the SecondSitting class is wrong !" << "\n";   
}
