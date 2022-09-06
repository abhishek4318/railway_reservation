// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "ACChairCar.h"
using namespace std;
// This is the initialisation of the singleton pointer
ACChairCar *ACChairCar::myClass = 0;   

// This is the constructor for the class, assigning the values for the variables
ACChairCar::ACChairCar(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const ACChairCar& ACChairCar::Type() {
    if(!myClass) {
        myClass = new ACChairCar();         
    }
    return *myClass;
}

// Getting the load factor for cost calculation
float ACChairCar::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string ACChairCar::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int ACChairCar::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool ACChairCar::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool ACChairCar::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool ACChairCar::IsLuxury() const{
    return this->isLuxury_;
}

// Destructor for the class
ACChairCar::~ACChairCar() {}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const ACChairCar& acchairCar) {     
    os << "\nName : " << acchairCar.name_ << "\n";
    os << "Load Factor : " << acchairCar.loadFactor_ << "\n";
    os << "Is Sitting : " << acchairCar.hasSeat_ << "\n";
    os << "Is AC : " << acchairCar.isAC_ << "\n";
    os << "Is Luxury : " << acchairCar.isLuxury_ << "\n";
    os << "Number of Tiers : " << acchairCar.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void ACChairCar::UnitTestACChairCar() {            
    if(ACChairCar::Type().isAC_ != 1) cout << "AC of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().hasSeat_ != 1) cout << "Has Seat of the ACChairCar class is wrong !" << "\n";          
    
    if(ACChairCar::Type().isLuxury_ != 0) cout << "Luxury of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().loadFactor_ != 2.0f) cout << "Load Factor of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().name_ != "AC Chair Car") cout << "Name of the ACChairCar class is wrong !" << "\n"; 
    
    if(ACChairCar::Type().numberOfTiers_ != 0) cout << "Number of Tiers of the ACChairCar class is wrong !" << "\n"; 
    
    if(ACChairCar::Type().IsSitting() != 1) cout << "IsSitting function of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().GetName() != "AC Chair Car") cout << "Name function of the ACChairCar class is wrong !" << "\n";   
    
    if(ACChairCar::Type().IsLuxury() != 0) cout << "IsLuxury function of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().GetNumberOfTiers() != 0) cout << "GetNumberOfTiers function of the ACChairCar class is wrong !" << "\n";   
    
    if(ACChairCar::Type().IsAC() != 1) cout << "IsAC function of the ACChairCar class is wrong !" << "\n";
    
    if(ACChairCar::Type().GetLoadFactor() != 2.0f) cout << "Load Factor function of the ACChairCar class is wrong !" << "\n";         
}
