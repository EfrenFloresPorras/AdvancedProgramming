//examen segundo parcial
/*

1) Escriba correctamente el siguiente código y ejecútelo, indique el resultado.

#include <iostream>

union Data{
    int data {0x214b4f};
    char cad[4];
};

int main (int args, const char *argv[]){

    union Data data;
    std::cout << data.cad;
    return 0;
}

2) ¿Qué es y para que se utiliza #define?
// 'define' es una directiva de preprocesador que permite definir constantes y macros.

3) ¿Qué es un puntero?
// es una variable que almacena la dirección de memoria de otra variable.

4) ¿Qué es una estructura?
// es un tipo de dato que permite agrupar diferentes tipos de datos dentro de una sola variable.

5) Escriba un programa que le permita al usuario ingresar n cantidad de elementos del tipo de una estructura Alumno,
la cual tiene como elementos nombre, edad, curp, fecha de nacimiento, carrera, universidad.
5.1) crear funciones para leer e imprimir los datos en la consola
5.2) crear una biblioteca donde estarán las funciones y la estructura.

*/

#include <iostream>
#include "examen2parcial.h"

using namespace std;

int main(){
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    Alumno *alumno = new Alumno[n];
    readData(alumno, n);
    printData(alumno, n);
    return 0;
}
