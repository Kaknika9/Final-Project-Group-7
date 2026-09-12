#include "Rental.h"
#include <iostream>

using namespace std;

//default constructor
Rental::Rental(){
    rentalId = 0;
    customerId = 0;
    vehicleId = 0;
    rentalDays = 0;
    dailyRate = 0.0;
    totalCost = 0.0;
    active = false;
}