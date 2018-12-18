// Author       :   Alex Kourkoumelis
// Date         :   11/12/2017
// Title        :   BarberShop
// Description  :   Manages a barbershop utilizing a LinkedStack data structure
//              :   Creates a BarberShop object, BarberShop creates 2 LinkedStacks
//              :   The LinkedStacks accept Customer Objects
//              :   Customers are shuffled while inserting to make sure they are served in order

#include "Customer.h"
using namespace std;


Customer::Customer(string fname, string lname){
    this->fname = fname;
    this->lname = lname;
}

string Customer::getName() {
    return fname + " " + lname;
}