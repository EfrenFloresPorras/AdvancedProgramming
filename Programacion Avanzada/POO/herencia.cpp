// Herencia Simple

#include <iostream>
#include "A.h"
#include "B.h"
using namespace std;

int main(){
    /*
    A a;
    B b;
    b.setPrivateData(2);
    cout << "Dato: " << b.getPrivateData() << "\n";
    */

    /*
    cout << "dato protegido: " << b.getProtectedData() << "\n";
    
    */

   // Herencia privada de A
   B b;
   b.b_dato_publico = 3;

    // Herencia protegida  de A
   C c;
   c.c_dato_publico = 5;

    // Herencia publica de A
   D d;
   d.a_datp_publico = 2;
   return 0;
}