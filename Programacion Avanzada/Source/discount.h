#ifndef _discount_
#define _discount_

#include <iostream>

float discount(double price, double discount){
        price = price - (price * (discount / 100));
        return price;
}

#endif