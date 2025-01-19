// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Imprimir o recibir de la terminal
#include <locale.h>
using namespace std;

int sum(int numberOne, int numberTwo); // Primero declaramos uego definimos

int sum(int numberOne, int numberTwo) {
    return numberOne + numberTwo;
}

void message();
void message() {
    cout << "Hola Procedimiento.\n";
}

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    
    int value1{ 0 }, value2{ 0 };

    cout << "Introduzca el primer valor entero: ";
    cin >> value1;
    cout << "Introduzca el segundo valor entero: ";
    cin >> value2;

    cout << "El sesultado de la suma de ambos valoress es: " << sum(value1, value2) << ".\n";

    int result = sum(5, 6);
    cout << "El resultado de la suma de  5 + 6 es " << result << "\n";

    message();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
