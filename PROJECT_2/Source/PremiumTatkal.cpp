// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include <iostream>
#include "BookingCategory.h"
#include "Booking.h"
#include "PremiumTatkal.h"
#include "TatkalBooking.h"
#include "BookingClasses.h"
#include "PremiumTatkalBooking.h"

Booking* PremiumTatkal::CreateBooking(Station A , Station B , Date& d1 , Date& d2 , Passenger& passenger ,const BookingClasses& bookingclass) const {
    return new PremiumTatkalBooking(A , B ,  d1 , d2 , passenger ,bookingclass);
}