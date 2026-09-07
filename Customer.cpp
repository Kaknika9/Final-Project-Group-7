#include "Customer.h"
#include <iostream>
using namespace std;

// default constractor
Customer::Customer(){
    customerId = 0;
    name = "";
    phone = "";
    email = "";
}
// parameterized constructor
Customer::Customer(int id, string name, int phone, string email){
    customerId = id;
    this.name = name;
    this.phone = phone;
    this.email = email;
}
