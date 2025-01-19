// Progama que indique la frecuencia de cada caracter en una cadena indroducida por el usuario.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "Spanish");
    
    const int MAX{256};
    char array[MAX] = {'\0'};
    int counter[256] = {0};

    cout << "Introduzca las palabras de la cadena.\n";
    cin >> array;

    for (int i = 0; i < sizeof(array) && array[i] != 0; i++){
        cout << "Texto: " << array[i] << ".\n";
        counter[array[i]]++;

    }

    for (int j = 0; j < sizeof(counter)/sizeof(int); j++){
        if (counter[j] != 0){
            cout << "Caracter : [" << (char)j << "]: " << counter[j] << ".\n";
        }
    }
    
}