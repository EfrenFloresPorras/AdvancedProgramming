#ifndef NUEVE_0223214_H
#define NUEVE_0223214_H

#include <iostream>
#include <string.h>

using namespace std;

struct Datos {
    std::string nombre;
    int edad { 0 };
};

void swap(Datos &d1, Datos &d2){
    struct Datos aux;
    aux = d1;
    d1 = d2;
    d2 = aux;
}

void reference(){
    struct Datos var1, var2;
    var1.nombre = "Juan";
    var1.edad = 100;
    var2.nombre = "Pedro";
    var2.edad = 200;

    swap(var1, var2);   // swap(&var1, &var2);

    cout << "var1.nombre = " << var1.nombre << endl;    // Pedro
    cout << "var2.nombre = " << var2.nombre << endl;        // Juan

    return 0;
}
#endif // !NUEVE_0223214_H