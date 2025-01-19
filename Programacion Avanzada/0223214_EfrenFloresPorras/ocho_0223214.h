#ifndef OCHO_0223214_H
#define OCHO_0223214_H

#include <iostream>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    float altura;
    string curp;
    string direccion;
};

void swap(Persona *persona, Persona *personaCopia);
void swap(Persona *persona, Persona *personaCopia) {
    struct Persona temp;
    temp = *persona;
    *persona = *personaCopia;
    *personaCopia = temp;
}

void copy(int args, const char *argv[]) {
    cout << "Ingrese la cantidad de personas: ";
    int n;
    cin >> n;

    struct Persona *persona, *personaCopia;
    persona = new Persona [n];
    personaCopia = new Persona [n];

    for (int i = 0; i < n; i++) {

        cout << "\nIngrese el nombre de la persona " << i + 1 << ": "; 
        cin >> (persona + i) -> nombre;
        cout << "Ingrese la edad de " << (persona + i) -> nombre << ": ";
        cin >> (persona + i)->edad;
        cout << "Ingrese la altura de " << (persona + i) -> nombre << ": ";
        cin >> (persona + i)->altura;
        cout << "Ingrese el CURP de " << (persona + i) -> nombre << ": ";
        cin >> (persona + i)->curp;
        cout << "Ingrese la dirección de " << (persona + i) -> nombre << ": ";
        cin >> (persona + i)->direccion;
    }

    cout << "\n=============DATOS INGRESADOS=============" << endl << endl;
    for (int j = 0; j < n; j++) {
        cout << "\n~~~~~~~~~~~PERSONA " << j + 1 << "~~~~~~~~~~~" <<endl;
        cout << "NOMBRE: " << (persona + j)->nombre << endl;
        cout << "EDAD: " << (persona + j)->edad << endl;
        cout << "ALTURA: " << (persona + j)->altura << endl;
        cout << "CURP: " << (persona + j)->curp << endl;
        cout << "DIRECCIÓN: " << (persona + j)->direccion << endl;

        cout << "-----------COPIA-----------" << endl;

        swap(&persona[j], &personaCopia[j]);

        cout << "NOMBRE: " << (personaCopia + j)->nombre << endl;
        cout << "EDAD: " << (personaCopia + j)->edad << endl;
        cout << "ALTURA: " << (personaCopia + j)->altura << endl;
        cout << "CURP: " << (personaCopia + j)->curp << endl;
        cout << "DIRECCIÓN: " << (personaCopia + j)->direccion << endl;
    }
}

#endif // !OCHO_0223214_H