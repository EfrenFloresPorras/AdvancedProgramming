#include <iostream>
#include "equalLenght_0223214.h"

using namespace std;

int main(char args, const char* arg[]){
    setlocale(LC_ALL, "Spanish");

    char chain1[100] = {'\0'};
    char chain2[10] = {'\0'};

    cout << "Ingrese la primera cadena de carácateres: ";
    cin >> chain1;

    cout << "Ingrese la segunda cadena de carácateres: ";
    cin >> chain2;

    if (equalLenght(chain1, chain2)){
        cout << "Las cadenas son del mismo tamaño" << endl;
    } else {
        cout << "Las cadenas no son del mismo tamaño" << endl;
    }
}