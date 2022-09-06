// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include <cmath>
#include "Station.h"
#include "Date.h"
#include "BookingClasses.h"
#include "BookingCategory.h"
#include "TatkalBooking.h"
#include "Railways.h"
using namespace std;

TatkalBooking::TatkalBooking(Station A , Station B , Date& d1 , Date& d2 , Passenger& passenger ,const BookingClasses& bookingclass) : Booking(A , B , d1 , d2 , bookingclass, passenger) {

}

// Computing the fare for the booking that are tatkal, including the fare that has been assigned for the same
float TatkalBooking::ComputeFare() const {
    int distance = Railways::IndianRailways().GetDistance((*this).fromStation_ , (*this).toStation_);
    float base_fare = distance*Booking::sBaseFarePerKM;
    float loaded_fare = base_fare*(*this).bookingClass.GetLoadFactor();
    float tatkal_charge = 0.3*loaded_fare;
    if(distance > (*this).bookingClass.GetMinimumTatkalDistance()) {
        if(tatkal_charge > (*this).bookingClass.GetMaximumTatkalCharge()) {
            tatkal_charge = (*this).bookingClass.GetMaximumTatkalCharge();
        }
        else {
            tatkal_charge = (*this).bookingClass.GetMinimumTatkalDistance();
        }
    }
    else {
        tatkal_charge = 0;
    }

    float final_fare = loaded_fare + (*this).bookingClass.GetReservationCharge() + tatkal_charge;
    return round(final_fare);
}