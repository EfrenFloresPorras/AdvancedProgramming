#ifndef TRES_0223214_H
#define TRES_0223214_H

#include <iostream> 
#include <math.h>
#include <string>
#include <Windows.h>
#include <locale.h>

using namespace std;

void puntero(){
    int a { 30 };
    int* puntero{ NULL};
    cout << "Valor de a: " << a << endl;
    cout << "Dirección de memoria de a: " << &a << endl;
    cout << "Direccion de memoria del puntero: " << puntero << endl;
    cout << "Valor del puntero: " << puntero << endl;

    puntero = &a;

    cout << "Dirección de memoria del puntero: " << &puntero << endl;
    cout << "Valor del puntero: " << puntero << endl;
    cout << "valor de dirección de memoria del puntero: " << *puntero << endl;

    *puntero = 100;
    cout << "Valor de a: " << a << endl;
}
#endif // !TRES_0223214_H