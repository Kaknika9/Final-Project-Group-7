#include "Customer.h"
#include <iostream>

using namespace std;

//default constructor
Customer::Customer(){
    customerId = 0;
    name = "";
    phone = "";
    email = "";
}
//parameterized constractor
Customer::Customer(int customerId, string name, string phone, string email){
    customerId = id;
    this->name = name;
    this->phone = phone;
    this->email = email;
}
//get customer ID
int Customer::getCustomerId() const{
    return customerId;
}
//get customer name
string Customer::getName()const{
    return name;
}