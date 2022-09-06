// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "FirstClass.h"
using namespace std;

// This is the initialisation of the singleton pointer
FirstClass *FirstClass::myClass = 0;        

// This is the constructor for the class, assigning the values for the variables
FirstClass::FirstClass(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ) : hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers){
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const FirstClass& FirstClass::Type() {
    if(!myClass) {
        myClass = new FirstClass();     
    }
    return *myClass;
}

// Getting the load factor for cost calculation
float FirstClass::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string FirstClass::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int FirstClass::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool FirstClass::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool FirstClass::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool FirstClass::IsLuxury() const{
    return this->isLuxury_;
}

// Destructor for the class
FirstClass::~FirstClass() {}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const FirstClass& firstClass) {    
    os << "\nName : " << firstClass.name_ << "\n";
    os << "Load Factor : " << firstClass.loadFactor_ << "\n";
    os << "Is Sitting : " << firstClass.hasSeat_ << "\n";
    os << "Is AC : " << firstClass.isAC_ << "\n";
    os << "Is Luxury : " << firstClass.isLuxury_ << "\n";
    os << "Number of Tiers : " << firstClass.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void FirstClass::UnitTestFirstClass() {           
    if(FirstClass::Type().name_ != "First Class") cout << "Name of the FirstClass class is wrong !" << "\n"; 
    
    if(FirstClass::Type().numberOfTiers_ != 2) cout << "Number of Tiers of the FirstClass class is wrong !" << "\n"; 
    
    if(FirstClass::Type().loadFactor_ != 3.0f) cout << "Load Factor of the FirstClass class is wrong !" << "\n";
    
    if(FirstClass::Type().hasSeat_ != 0) cout << "Has Seat of the FirstClass class is wrong !" << "\n";         
    
    if(FirstClass::Type().isLuxury_ != 1) cout << "Luxury of the FirstClass class is wrong !" << "\n";
    
    if(FirstClass::Type().isAC_ != 0) cout << "AC of the FirstClass class is wrong !" << "\n";
    
    if(FirstClass::Type().GetLoadFactor() != 3.0f) cout << "Load Factor function of the FirstClass class is wrong !" << "\n";        
    
    if(FirstClass::Type().GetNumberOfTiers() != 2) cout << "GetNumberOfTiers function of the FirstClass class is wrong !" << "\n";   
    
    if(FirstClass::Type().IsAC() != 0) cout << "IsAC function of the FirstClass class is wrong !" << "\n";
    
    if(FirstClass::Type().IsSitting() != 0) cout << "IsSitting function of the FirstClass class is wrong !" << "\n";
    
    if(FirstClass::Type().GetName() != "First Class") cout << "Name function of the FirstClass class is wrong !" << "\n";   
    
    if(FirstClass::Type().IsLuxury() != 1) cout << "IsLuxury function of the FirstClass class is wrong !" << "\n";
}
