// Name : Abhishek Kumar
// Roll No. : 19ME10003

#include<iostream>
#include<exception>
using namespace std;


//  These are the exception classes that is implemented to throw errors if wrong data is encountered
class BadDate : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Date Created";
        }
};

class BadPassenger : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Passenger Created";
        }
};

class BadRailways : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Railways Created";
        }
};

class BadStation : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Station Created";
        }
};

class BadBooking : public exception {
    public:
        virtual const char* what() const throw()
        {
            return "Bad Booking Created";
        }
};
