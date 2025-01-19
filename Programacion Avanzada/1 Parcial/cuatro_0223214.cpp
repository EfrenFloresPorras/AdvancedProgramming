// Ejemplo de entrada y salida estándar}

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int numeroUno{ 0 }, numeroDos{ 0 }, result{ 0 };
    cout << "Ingrese el primer número: ";
    cin >> numeroUno;
    cout << "Ingrese el segundo número: ";
    cin >> numeroDos;
    result = numeroUno + numeroDos;
    cout << "El resultado de la suma es: " << result << endl;
    
    return 0;
}