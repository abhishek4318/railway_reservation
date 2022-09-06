// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "Sleeper.h"
using namespace std;

// This is the initialisation of the singleton pointer
Sleeper *Sleeper::myClass = 0;        

// This is the constructor for the class, assigning the values for the variables
Sleeper::Sleeper(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minimumTatkalCharge_ = mintatkal;
    maximumTatkalCharge_ = maxtatkal;
    reservationCharges_ = reservationcharge;
    minimumTatkalDistance_ = mindistance;
}

// Getting the constant pointer for the class, for using the information
const Sleeper& Sleeper::Type() {
    if(!myClass) {
        myClass = new Sleeper();       
    }
    return *myClass;
}

// Getting the load factor for cost calculation
float Sleeper::GetLoadFactor() const{
    return this->loadFactor_;
}

// Getting the name of the booking class
string Sleeper::GetName() const{
    return this->name_;
}

// Getting the Number of Tiers in the Booking class
int Sleeper::GetNumberOfTiers() const{
    return this->numberOfTiers_;
}

// Getting the sitting condition of the booking class, whether the class is sitting or not
bool Sleeper::IsSitting() const{
    return this->hasSeat_;
}

// Function to get the AC condition of the booking class, if the class is AC or not
bool Sleeper::IsAC() const{
    return this->isAC_;
}

// Getting whether the class is luxury or not
bool Sleeper::IsLuxury() const{
    return this->isLuxury_;
}

// Destructor for the class
Sleeper::~Sleeper() {}

// Friend function to output the details of the class easily.
ostream& operator<<(ostream& os , const Sleeper& sleeper) {      
    os << "\nName : " << sleeper.name_ << "\n";
    os << "Load Factor : " << sleeper.loadFactor_ << "\n";
    os << "Is Sitting : " << sleeper.hasSeat_ << "\n";
    os << "Is AC : " << sleeper.isAC_ << "\n";
    os << "Is Luxury : " << sleeper.isLuxury_ << "\n";
    os << "Number of Tiers : " << sleeper.numberOfTiers_ << "\n" << "\n";
    return os;
}

// Unit Tests for the class, to check the good functioning of all the funcitons, and the variables.
// The output can be seen while using the Application.cpp file
void Sleeper::UnitTestSleeper() {           
    
    if(Sleeper::Type().name_ != "Sleeper") cout << "Name of the sleeper class is wrong !" << "\n"; 
    
    if(Sleeper::Type().loadFactor_ != 1.0f) cout << "Load Factor of the sleeper class is wrong !" << "\n";
    
    if(Sleeper::Type().hasSeat_ != 0) cout << "Has Seat of the sleeper class is wrong !" << "\n";          
    
    if(Sleeper::Type().isAC_ != 0) cout << "AC of the sleeper class is wrong !" << "\n";
    
    if(Sleeper::Type().isLuxury_ != 0) cout << "Luxury of the sleeper class is wrong !" << "\n";
    
    if(Sleeper::Type().numberOfTiers_ != 3) cout << "Number of Tiers of the sleeper class is wrong !" << "\n"; 
    
    if(Sleeper::Type().GetName() != "Sleeper") cout << "Name function of the sleeper class is wrong !" << "\n";  
    
    if(Sleeper::Type().GetLoadFactor() != 1.0f) cout << "Load Factor function of the sleeper class is wrong !" << "\n";         
    
    if(Sleeper::Type().IsSitting() != 0) cout << "IsSitting function of the sleeper class is wrong !" << "\n";
    
    if(Sleeper::Type().IsAC() != 0) cout << "IsAC function of the sleeper class is wrong !" << "\n";
    
    if(Sleeper::Type().IsLuxury() != 0) cout << "IsLuxury function of the sleeper class is wrong !" << "\n";
    
    if(Sleeper::Type().GetNumberOfTiers() != 3) cout << "GetNumberOfTiers function of the sleeper class is wrong !" << "\n";   
}