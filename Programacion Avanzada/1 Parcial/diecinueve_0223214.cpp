// Programa que valida si dos cadenas tienen el mismo número de elementos

#include <iostream>
using namespace std;

bool equalLenght(char chain1[], char chain2[]){
    int size1 = 0;
    int size2 = 0;

    for (int i = 0; chain1[i] != '\0'; i++){
        size1++;
    }

    for (int i = 0; chain2[i] != '\0'; i++){
        size2++;
    }

    return size1 == size2;
}

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