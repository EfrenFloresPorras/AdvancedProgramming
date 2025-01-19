// Crear estructura llamada 'Persona' 
#ifndef ONCE_0223214_H
#define ONCE_0223214_H

#include <iostream>
#include <math.h>
#include <Windows.h>    
#include <locale.h>

using namespace std;

struct Persona{
    std::string nombre;
    int edad { 0 };
    std::string BirthDate;
    std::string curp;
};

void inputAndCopy(Persona *datos, Persona *copia, int cantidad){
    for(int i = 0; i < cantidad; i++){
        cout << "\nDatos de la persona " << i + 1 << ": " << endl;
        cout << "Ingrese el nombre: ";
        cin >> datos[i].nombre;
        cout << "Ingrese la edad: ";
        cin >> datos[i].edad;
        cout << "Ingrese la fecha de nacimiento: ";
        cin >> datos[i].BirthDate;
        cout << "Ingrese la curp: ";
        cin >> datos[i].curp;
        copia[i] = datos[i];
    }   
}

void persona(){
    struct Persona *personas, *personasCopias;
    int cantidad { 0 };

    cout << "Ingrese la cantidad de personas: ";
    cin >> cantidad;

    personas = new Persona[cantidad];
    personasCopias = new Persona[cantidad];

    inputAndCopy(personas, personasCopias, cantidad);

    cout << "\nDatos originales: " << endl;
    for(int i = 0; i < cantidad; i++){
        cout << "Nombre: " << personasCopias[i].nombre << endl;
        cout << "Edad: " << personasCopias[i].edad << endl;
        cout << "Fecha de nacimiento: " << personasCopias[i].BirthDate << endl;
        cout << "CURP: " << personasCopias[i].curp << endl;
    }

    cout << "\nDatos copiados: " << endl;
    for(int i = 0; i < cantidad; i++){
        cout << "Nombre: " << personasCopias[i].nombre << endl;
        cout << "Edad: " << personasCopias[i].edad << endl;
        cout << "Fecha de nacimiento: " << personasCopias[i].BirthDate << endl;
        cout << "CURP: " << personasCopias[i].curp << endl;
    }
}
#endif // !ONCE_0223214_H