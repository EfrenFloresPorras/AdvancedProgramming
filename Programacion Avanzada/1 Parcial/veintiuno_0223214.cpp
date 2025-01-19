// Programa que cuenta la frecuencia de un carácter en una cadena de cien caracteres

#include <iostream>
using namespace std;

int main(char args, const char* arg[]){
    setlocale(LC_ALL, "Spanish");

    char chain[100] = {'\0'};
    char character = '\0';
    int frequency = 0;

    cout << "Ingrese una cadena de carácateres: ";
    cin >> chain;

    cout << "Ingrese el carácter a buscar: ";
    cin >> character;

    for (int i = 0; chain[i] != '\0'; i++){
        if (chain[i] == character){
            frequency++;
        }
    }

    cout << "El carácter " << character << " aparece " << frequency << " veces en la cadena" << endl;
}