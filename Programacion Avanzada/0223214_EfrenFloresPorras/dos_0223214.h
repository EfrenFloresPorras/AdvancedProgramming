#ifndef DOS_0223214_H
#define DOS_0223214_H

#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

struct Struct{
    char nombre[MAX];
    char apellidoPaterno[MAX];
    char apellidoMaterno[MAX];
};

void structure(int args, const char* args[]){
    struct Struct persona;
    cout << "Ingrese el nombre: ";
    cin.getline(persona.nombre, MAX);
    cout << "Ingrese el apellido paterno: ";
    cin.getline(persona.apellidoPaterno, MAX);
    cout << "Ingrese el apellido materno: ";
    cin.getline(persona.apellidoMaterno, MAX);

    cout << "\nNombre completo: " << persona.nombre << " " << persona.apellidoPaterno << " " << persona.apellidoMaterno << endl;
}