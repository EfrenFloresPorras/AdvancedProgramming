// Realizar una estructura con el nombre 'ciudadano' que contenga los siguientes datos:
// - Nombre
// - Apellidos
// - Edad
// - CURP

#include <iostream>
#include <string>
#include <math.h>
#include <locale.h>
#include <Windows.h>

using namespace std;

struct ciudadano{
    string nombre;
    string apellidos;
    int edad;
    string curp;
};

int main(){
    setlocale(LC_ALL, "spanish");
    
    ciudadano ciudadano1;
    cout << "Ingrese el nombre del ciudadano: ";
    getline(cin, ciudadano1.nombre);
    cout << "Ingrese los apellidos del ciudadano: ";
    getline(cin, ciudadano1.apellidos);
    cout << "Ingrese la edad del ciudadano: ";
    cin >> ciudadano1.edad;
    cout << "Ingrese la CURP del ciudadano: ";
    cin >> ciudadano1.curp;
    cout << "Nombre: " << ciudadano1.nombre << endl;
    cout << "Apellidos: " << ciudadano1.apellidos << endl;
    cout << "Edad: " << ciudadano1.edad << endl;
    cout << "CURP: " << ciudadano1.curp << endl;
    return 0;
}