// Ejercicio:
// Hacer una struct que se llame 'zoo' que contenga: nombre, dirección y la struct animal *animales, donde puedas meter una diversa cantidad de animales
// Posteriormente, realizar otra struct llamada 'animal', que contenga: tipo, nombre, bool alas, bool pelo y patas

#ifndef SEIS_0223214_H
#define SEIS_0223214_H

#include <iostream>

using namespace std;

struct Animal {
    int ojos {0};
    int patas {0};
    char color [30] {'\0'};
    char tipo [50] {'\0'};
    char nombre [50] {'\0'};
    bool alas = false;
    bool pelo = false;
};

struct Zoo {
    Animal * animales{NULL};
    char nombreZoo [50] {'\0'};
    char domicilio [50] {'\0'};
    int cantAnimales {0};
};

void zoo (int args, const char *argv[]) {
    struct Zoo * zoo;
    zoo = new Zoo;

    cout << "Ingrese el nombre del Zoo: ";
    cin >> zoo->nombreZoo; //"->" se utiliza para acceder a la dirección de...
    cout << "Ingrese la dirección: ";
    cin >> zoo->domicilio;
    cout << "Ingrese la cantidad de animales: ";
    cin >> zoo->cantAnimales;
    zoo->animales = new Animal{zoo->cantAnimales};

    for (int i = 0; i < zoo->cantAnimales; i++){
        cout << "\nIngrese el nombre del animal: ";
        cin >> (zoo->animales + i)->nombre;
        cout << "Ingrese el tipo de animal: ";
        cin >> (zoo->animales + i)->tipo;
        cout << "El animal tiene alas? ";
        cin >> (zoo->animales + i)->alas;
        cout << "El animal tiene pelo?";
        cin >> (zoo->animales + i)->pelo;
        cout << "Ingrese el número de patas: ";
        cin >> (zoo->animales + i)->patas;
    }
    cout << "=================================================" << endl;
    cout << "NOMBRE DEL ZOO: " << zoo->nombreZoo << endl;
    cout << "DOMICILIO DEL ZOO: " << zoo->domicilio << endl << endl;

    for (int i = 0; i < zoo->cantAnimales; i++) {
        cout << "-Nombre del animal: " << (zoo->animales + i)->nombre << endl;
        cout << "-Tipo del animal: " << (zoo->animales + i)->tipo << endl;
        cout << "-Alas: " << (zoo->animales + i)->alas << endl;
        cout << "-Pelo: " << (zoo->animales + i)->pelo << endl;
        cout << "-Número de patas: " << (zoo->animales + i)->patas << endl;
    }

    delete[] zoo->animales;
    delete zoo;
}

#endif // !SEIS_0223214_H