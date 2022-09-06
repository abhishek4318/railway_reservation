// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "BookingCategory.h"
#include "Booking.h"
#include "SeniorCitizen.h"
#include "SeniorCitizenBooking.h"
#include "BookingClasses.h"

Booking* SeniorCitizen::CreateBooking(Station A , Station B , Date& d1 , Date& d2 , Passenger& passenger ,const BookingClasses& bookingclass) const {
    return new SeniorCitizenBooking(A , B ,  d1 , d2 , passenger ,bookingclass);
}