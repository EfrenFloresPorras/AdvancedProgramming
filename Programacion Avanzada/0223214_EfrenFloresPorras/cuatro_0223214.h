/*
Ejercicio con punteros usándolos para crear memoria dinámica
Programa que crea el tamaño de un arreglo de tamaño "n" usando memoria dinámica
*/
#ifndef CUATRO_0223214_H
#define CUATRO_0223214_H

#include <iostream>
using namespace std;

int punteroDinamico(int args, const char* argv []) {
    int n;
    cout << "Inrese el tamaño del arreglo: ";
    cin >> n;
    int *array = new int[n];

    for (int i = 0; i < n; i++) {
        array[i] = i*2;
    }

    cout << "ARREGLO " << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
}

#endif // !CUATRO_0223214_H