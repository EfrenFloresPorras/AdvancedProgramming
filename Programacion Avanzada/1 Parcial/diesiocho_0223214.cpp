// Creación de una biblioteca con una función llamada indexof que retorna el índice donde se encuentra un carácter en una cadena de máximo cien caracteres

#include <iostream>
#include <math.h>
#include "indexOf_0223214.h"
using namespace std;

int main(int args, const char* arg[]){
    setlocale(LC_ALL, "Spanish");

    const int MAX {101};
    char text[MAX] = {'\0'};

    cout << "Tamaño cadena: " << sizeof(text) << ".\n";
    cout << "Cadena: " << text << "\n";

    cin >> text;
    cout << "texto: " << text << "\n";
    cout << "El indice del caracter es: " << indexOf(text, 'a');
}