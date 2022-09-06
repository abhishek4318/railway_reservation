// Name : Abhishek Kumar
// Roll No. : 19ME10003

#ifndef Divyang_H
#define Divyang_H
#include <iostream>
#include "Concession.h"
using namespace std;

class Divyang : public Concession {
protected:
    Divyang(string name) : Concession(name) {}
};

#endif