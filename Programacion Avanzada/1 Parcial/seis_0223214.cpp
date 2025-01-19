// Ejemplo de operadores relacionales

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int numeroUno{ 0 }, numeroDos{ 0 };
    cout << "Ingrese el primer número: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo número: ";
    cin >> numeroDos;
    if(numeroUno > numeroDos){
        cout << "El primer número es mayor que el segundo" << endl;
    }else if(numeroUno < numeroDos){
        cout << "El primer número es menor que el segundo" << endl;
    }else{
        cout << "Los números son iguales" << endl;
    }
    return 0;
}