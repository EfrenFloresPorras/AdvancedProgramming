#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>
// #include "UNO_0223214.h"
// #include "DOS_0223214.h"
// #include "TRES_0223214.h"
#include "CUATRO_0223214.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "spanish");
    system("cls");

    /*
    Conceptos a;
    Conceptos b(100); // Ya con un valor agregado
    Conceptos c(b); // Constructor copia, solamente una copia
    Conceptos * conceptos = new Conceptos(100);

    cout << "direccion de puntero: " << *(conceptos) << "\n";
    delete conceptos;
    cout << "direccion de puntero: " << *(conceptos) << "\n";
    cout << "leer dato: " << conceptos.leerDato() << "\n";
    cout << "leer dato de b: " << b.leerDato() << "\n";

    delete conceptos;
    */
    
    unsigned char inputWheels;
    bool inputStatus;
    unsigned char inputDoors;
    std::string inputColor;
    std::string inputMarca;
    std::string inputPlates;
    float inputGas;
    char inputMarcha;
    
    db::Vehiculo vehiculo;
    cout << "Introduzca la cantidad de llantas del vehículo.\n";
    cin >> inputWheels;
    vehiculo.setWheels(inputWheels);

    cout << "Introduzca el estado del vehículo.\n";
    cin >> inputStatus;
    vehiculo.setStatus(inputStatus);

    // output
    cout << "Cantidad de llantas: " << vehiculo.getWheels() << "\n";
    if(vehiculo.getStatus()){
        cout << "El vehículo está encendido.\n";
    }else{
        cout << "El vehículo está apagado.\n";
    }
    return 0;
}