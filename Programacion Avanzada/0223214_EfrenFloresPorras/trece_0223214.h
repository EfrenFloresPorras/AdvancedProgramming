#ifndef TRECE_0223214_H
#define TRECE_0223214_H

#include <iostream>

using namespace std;

//Contener varios datos en una misma dirección de memoria
union Datos { //union = ocupan la misma celda
    int n1;
    int n2;
};

union Datos2 {
    int numero {0};
    char texto [8] ;
};

void Union(int args, const char *argv[]) {
    Datos datos;
    datos.n1 = 10;
    datos.n2 = 30;
    cout << "A) Número guardado: " << datos.n1 << endl;
    cout << "B) Número guardado: " << datos.n2 << endl;
    cout << "guillon" << endl << endl;

    cout << "********************************" << endl;
    cout << "-Tamaño de Datos: " << sizeof(Datos) << endl;
    cout << "-Tamaño de Datos2: " << sizeof(Datos2) << endl << endl;

    Datos2 datos2;
    cout << "Número 2 guardado: " << datos2.numero << endl;
    datos2.texto[0] = 'A';
    cout << "\nChar: " << datos2.texto[0] << endl;
    cout << "Número guardado: " << datos2.numero << endl;
    return 0;
}
#endif // !TRECE_0223214_H