#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>
#include "concept.cpp"
#include "Alumno.h"

using namespace std;

int main(){
    Conceptos conceptos(100)
    Conceptos b;
    Conceptos *puntero = new Conceptos(300);
    delete puntero;
    
    b = conceptos;
    cout << "leerdato: " << conceptos.leerDato() << "\n";
    conceptos.escribirDato(20);
    cout << "leerdato: " << conceptos.leerDato() << "\n";
    cout << "leerdato b:. " << b.leerDato() << "\n";
    b.~Conceptos();

    Alumno alumno;

}