// Programa que cuenta la frecuencia de los caracteres en una cadena de máximo cien caracteres introducida por el usuario

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    char cadena[100];
    int frecuencia[256] = { 0 };

    cout << "Introduzca una cadena de máximo cien caracteres: ";
    cin.getline(cadena, 100);

    for (int i = 0; i < 100; i++) {
        if (cadena[i] == '\0') {
            break;
        }

        frecuencia[cadena[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (frecuencia[i] > 0) {
            cout << "El caracter " << (char)i << " aparece " << frecuencia[i] << " veces\n";
        }
    }

    return 0;
}