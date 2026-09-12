#ifndef RENTAL_H
#define RENTAL_H

#include <iostream> 
using namespace std;

class Retal{
    //private data members for encapulation
    private : 
    int rentalId;
    int customerId;
    int vehicleId;
    int rentalDays;
    double dailyRate;
    double totalCost;
    bool active;
    
    public:
    //default constructor
    Rental();

    //parameterized constructor 
    Rental(int rentalId, int customerId, int vehicleId, int rentalDays, double dailyRate);
    

   
};