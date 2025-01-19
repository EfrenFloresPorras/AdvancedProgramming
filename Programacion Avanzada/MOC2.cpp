//examne
/*
1) escriba correctamente el siguiente
#include <iostram> // 1
int main(int 35args, const char* argv[5]){ // 2 35args // 3 argv[5]
    int float identificador (10.5); // 4 int float
    return "h20"; // 5
}
2) escriba la diferencia entre memoria dinamica y estatica.

3) escriba un programa que le permita al usuario ingresar n cantidad de elementos del
tipo de una estructura, crear funciones para leer los datos y para imprimirlos en la
consola, crear una biblioteca donde estaran las funciones.
struct Avion{
    int id{0};
    std::string aerolinea;
    int pasajeros;
    std::string matricula;
}

*/

// 1) escriba correctamente el siguiente.
/*
#include <iostream> 
int main(int args, const char* *argv[]){ 
    float identificador (10.5); 
    return 0;
}
*/


 // 2) escriba la diferencia entre memoria dinamica y estatica.
// La memoria dinamica es la que se crea en tiempo de ejecución, mientras que la estatica es la que se crea en tiempo de compilación.
/*
    int var; // Esto es memoria estatica, lo que causa que este no pueda ser utilizado para tener otros espacios de memoria o el espacio de memoria no cambia.
    int *puntero = NULL; // Un puntero es un lugar donde varias memorias pueden acumularse o modificrse, esto es una memoria dinamica.
*/

/*
3) escriba un programa que le permita al usuario ingresar n cantidad de elementos del
tipo de una estructura, crear funciones para leer los datos y para imprimirlos en la
consola, crear una biblioteca donde estaran las funciones.
struct Avion{
    int id{0};
    std::string aerolinea;
    int pasajeros;
    std::string matricula;
}
*/

#include <iostream>
#include "Source/MOC2bblio.h"


int main(int args, char const *argv[]){
    int n;
    std::cout << "Ingrese la cantidad de aviones: ";
    std::cin >> n;
    struct Avion *aviones = new struct Avion[n];
    dataEntry(aviones, n);
    readData(aviones, n);
    delete [] aviones;
    return 0;
}