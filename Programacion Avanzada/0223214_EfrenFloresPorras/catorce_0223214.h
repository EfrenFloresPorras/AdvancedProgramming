#ifndef CATORCE_0223214_H
#define CATORCE_0223214_H

#include <iostream>
#include "escuela.h"

using namespace std;

void school(int args, const char *argv[]) {
    struct Escuela * escuela;
    escuela = new Escuela;

    cout << "Ingrese el nombre de la escuela: ";
    cin >> escuela->nombre;
    cout << "Ingrese el domicilio de la escuela " << escuela->nombre << ": ";
    cin >> escuela->domicilio;
    cout << "Ingrese el nivel educativo de la escuela " << escuela->nombre << ": ";
    cin >> escuela->nivel_educativo;
    cout << "Ingrese la cantidad de alumnos de la escuela " << escuela->nombre << ": ";
    cin >> escuela->cant_alumnos;

    escuela->alumno = new Alumno [escuela->cant_alumnos]; //Asignar valor a la memoria

    for (int i = 0; i < escuela->cant_alumnos; i++) {
        cout << "\n-----------------ALUMNO " << i + 1 << "-------------------" << endl << endl;
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin >> (escuela->alumno + i)->nombre;
        cout << "Ingrese el apellido paterno del alumno " << (escuela->alumno + i)->nombre << ": ";
        cin >> (escuela->alumno + i)->apellido_paterno;
        cout << "Ingrese el apellido materno " << (escuela->alumno + i)->nombre << ": ";
        cin >> (escuela->alumno + i)->apellido_materno;
        cout << "Ingrese la edad del alumno " << (escuela->alumno + i)->nombre << ": ";
        cin >> (escuela->alumno + i)->edad;
        cout << "Ingrese el semestre del alumno " << (escuela->alumno + i)->nombre << ": ";
        cin >> (escuela->alumno + i)->semestre;
        cout << "Ingrese la cantidad de materias del alumno " << (escuela->alumno + i)->nombre << ": ";
        cin >> (escuela->alumno + i)->cant_materias;

        (escuela->alumno + i)->materia = new Materia[(escuela->alumno + i)->cant_materias];

        for (int j = 0; j < escuela->alumno->cant_materias; j++) {
            cout << "\nIngrese el nombre de la materia " << j + 1 << " del alumno " << (escuela->alumno + i)->nombre << ": ";
            cin >> (escuela->alumno->materia + j)->nombre;
            cout << "Ingrese el número de créditos de la materia " << j + 1 << " del alumno " << i + 1 << ": ";
            cin >> (escuela->alumno->materia + j)->creditos;
            cout << "Ingrese el la horia de inicio de la materia " << j + 1 << " del alumno " << i + 1 << ": ";
            cin >> (escuela->alumno->materia + j)->horario;

            (escuela->alumno->materia + j)->profesor = new Profesor[(escuela->alumno + i)->cant_materias];

            cout << "\nIngrese el nombre del profesor que da la materia " << (escuela->alumno->materia + j)->nombre << ": ";
            cin >> (escuela->alumno->materia->profesor + j)->nombre;
            cout << "Ingrese el apellido paterno del profesor que da la materia " << (escuela->alumno->materia + j)->nombre << ": ";
            cin >> (escuela->alumno->materia->profesor + j)->apellido_paterno;
            cout << "Ingrese el apellido materno del profesor que da la materia " << (escuela->alumno->materia + j)->nombre << ": ";
            cin >> (escuela->alumno->materia->profesor + j)->apellido_materno;
            
        }
    }

    for (int i = 0; i < escuela->cant_alumnos; i++) {
        cout << "\n=========================ALUMNO " << i + 1 << "==============================" << endl;
        cout << "Nombre: " << (escuela->alumno + i)->nombre << endl;
        cout << "Apellido paterno: " << (escuela->alumno + i)->apellido_paterno << endl;
        cout << "Apellido materno: " << (escuela->alumno + i)->apellido_materno << endl;
        cout << "Número de materias: " << (escuela->alumno + i)->cant_materias << endl << endl;

        for (int j = 0; j < escuela->alumno->cant_materias; j++) {
            cout << "----------------MATERIA " << j + 1 << "-------------------------" << endl;
            cout << "Nombre: " << (escuela->alumno->materia + j)->nombre << endl; 
            cout << "Número de créditos: " << (escuela->alumno->materia + j)->creditos << endl; 
            cout << "Hora de inicio: " << (escuela->alumno->materia + j)->horario << endl << endl; 

            cout << "Nombre del profesor: " << (escuela->alumno->materia->profesor + j)->nombre << endl;
            cout << "Apellido paterno del profesor: " << (escuela->alumno->materia->profesor + j)->apellido_paterno << endl;
            cout << "Apellido materno del profesor: " << (escuela->alumno->materia->profesor + j)->apellido_materno << endl;
        }
 
    }

}
#endif //CATORCE_0223214_H