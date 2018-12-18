// Author       :   Alex Kourkoumelis
// Date         :   11/12/2017
// Title        :   BarberShop
// Description  :   Manages a barbershop utilizing a LinkedStack data structure
//              :   Creates a BarberShop object, BarberShop creates 2 LinkedStacks
//              :   The LinkedStacks accept Customer Objects
//              :   Customers are shuffled while inserting to make sure they are served in order

#include <iostream>
#include "Customer.h"
#include "LinkedStack.h"
using namespace std;

#ifndef PART_II_ATTEMPT_1_BARBERSHOP_H
#define PART_II_ATTEMPT_1_BARBERSHOP_H

class BarberShop{
    LinkedStack<Customer> s1;
    LinkedStack<Customer> s2;
public:
    void addCustomer(Customer&);
    Customer nextCustomer();
};


#endif //PART_II_ATTEMPT_1_BARBERSHOP_H
