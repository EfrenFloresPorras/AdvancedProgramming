#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int array[] = {1, 3, 6, 7, 10, 9};
    int arrayNotAsigned[10]; // Solo se asignaron los 

    cout << "Espacio de momoria utilizado por la variable 'array', en bytes: " 
        << sizeof(array) << "\n";
    cout << "Espacio utilizado por un int: " << sizeof(int) << "\n";

    for (int i = 0; i < sizeof(array)/ sizeof(int); i++){
        cout << "Valor en [" << i << "]: " << array[i] << ".\n";
    }

}