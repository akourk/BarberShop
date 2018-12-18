// Author       :   Alex Kourkoumelis
// Date         :   11/12/2017
// Title        :   BarberShop
// Description  :   Manages a barbershop utilizing a LinkedStack data structure
//              :   Creates a BarberShop object, BarberShop creates 2 LinkedStacks
//              :   The LinkedStacks accept Customer Objects
//              :   Customers are shuffled while inserting to make sure they are served in order

#include "BarberShop.h"

void BarberShop::addCustomer(Customer& customer) {

    if(s1.isEmpty()) {
        s1.push(customer);
    } else {
        while(!s1.isEmpty()){
            Customer temp = s1.pop();
            s2.push(temp);
        }
        s1.push(customer);
        while(!s2.isEmpty()){
            Customer temp = s2.pop();
            s1.push(temp);
        }
    }
}

Customer BarberShop::nextCustomer() {

    if(s1.isEmpty()){
        cout << "There are no customers in line!" << endl;
    } else {
        return s1.pop();
    }
}
