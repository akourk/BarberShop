// Author       :   Alex Kourkoumelis
// Date         :   11/12/2017
// Title        :   BarberShop
// Description  :   Manages a barbershop utilizing a LinkedStack data structure
//              :   Creates a BarberShop object, BarberShop creates 2 LinkedStacks
//              :   The LinkedStacks accept Customer Objects
//              :   Customers are shuffled while inserting to make sure they are served in order

#include <iostream>
#include "BarberShop.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    BarberShop shop;
    Customer customer1("MARK", "KILGORE");
    Customer customer2("RICK", "GRIMM");
    shop.addCustomer(customer1);
    shop.addCustomer(customer2);
    Customer nextCustomer = shop.nextCustomer();
    cout << nextCustomer.getName() << " is served next" << endl;
    Customer customer3("JILL", "WOLFF");
    shop.addCustomer(customer3);
    nextCustomer = shop.nextCustomer();
    cout << nextCustomer.getName() << " is served next" << endl;
    nextCustomer = shop.nextCustomer();
    cout << nextCustomer.getName() << " is served next" << endl;

    return 0;
}