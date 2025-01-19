#ifndef UNO_0223214_H
#define UNO_0223214_H

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>

// Constructor: Is
// Destructor: Is 

class Conceptos
{
    protected:
        /**/
        int datoProtegido{ 0 };
        // You cannot access this
    private:
        /* data */
        int datoPrivado{ 0 };
        // You can only access this throu a controller, which is a method
    public:
        /* data */
        Conceptos(/* args */);
        Conceptos(int dato); // Ya con un valor agregado
        Conceptos(Conceptos &copia) // Constructor copia, solamente una copia

        int leerDato();
        void escribirDato(int dato);
        ~Conceptos(); // Destructor
        // Annyone can access this 
};

// Definition of each prototype in the public section.
Conceptos::Conceptos(int dato)
{
    this->dato = 0;
}

Conceptos::Conceptos(int dato){
    this->dato = dato;
}

Conceptos::Conceptos(Conceptos &copia){
    this->dato = copia.dato;
}

Conceptos::~Conceptos()
{
    std::cout << "Se destruyo la instalación.\n"
}

int Conceptos::leerDato(){
    return this->dato;
}

void Conceptos::escribirDato(int dato){
    this->dato = dato;
}

Conceptos::~Conceptos(int dato)
{
    this->dato = dato;
}

Conceptos::Conceptos()

Conceptos::Conceptos(/* args */)
{
    this->dato = 0;
    std::cout << "Se creo la instalación.\n"
}   

#endif // UNO_0223214_H