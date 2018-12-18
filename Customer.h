// Author       :   Alex Kourkoumelis
// Date         :   11/12/2017
// Title        :   BarberShop
// Description  :   Manages a barbershop utilizing a LinkedStack data structure
//              :   Creates a BarberShop object, BarberShop creates 2 LinkedStacks
//              :   The LinkedStacks accept Customer Objects
//              :   Customers are shuffled while inserting to make sure they are served in order

#ifndef PART_II_ATTEMPT_1_CUSTOMER_H
#define PART_II_ATTEMPT_1_CUSTOMER_H
#include <iostream>
using namespace std;

class Customer{
private:
    string fname;
    string lname;

public:
    Customer(){}
    Customer(string, string);
    string getName();
};

#endif //PART_II_ATTEMPT_1_CUSTOMER_H
