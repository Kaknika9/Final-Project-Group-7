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

//parameterized constructor
Rental::Rental(int rentalId, int customerId, int vehicleId, int rentalDays, double dailyRate){
    this->rentalId = rentalId;
    this->customerId = customerId;
    this->vehicleId = vehicleId;
    this->rentalDays = rentalDays;
    this->dailyRate = dailyRate;

    //A new rental is active
    active = true;

    //calculate the total rental cost
    calculateTotal();
}

//get rental ID
int Rental::getRentalId() const{
    return rentalId;
}
//get customer ID
int Rental::getCustomerId() const{
    return customerId;
}
