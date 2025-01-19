#ifdef CINCO_0223214_H
#define CINCO_0223214_H

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>
using namespace std;

struct Perro{
    char color{'\0'};
    char raza{'\0'};
    int patas{0};
    int ojos{0};
};

void dog(int args, const char* argvs[]){
    struct Perro, Perro2;
    struct Perro* puntero;

    Perro.patas = 4;
    Perro.ojos = 2;
    strcpy(Perro.color, "rojo");
    strcpy(Perro.raza, "labrador");
    Perro2.patas = 4;
    Perro2.ojos = 2;
    strcpy(Perro2.color, "blanco y negro");
    strcpy(Perro2.raza, "husky");
    puntero = &Perro;

    cout << "Patas: " << puntero->patas << "\nOjos: " << puntero->ojos << "\nColor: " << puntero->color << "\nRaza: " << puntero->raza << endl;

    puntero = &Perro2;
    cout << "Patas: " << puntero->patas << "\nOjos: " << puntero->ojos << "\nColor: " << puntero->color << "\nRaza: " << puntero->raza << endl;
}