// FunctionPrimo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool esPrimo(int numero) {
    // Casos especiales

    if (numero == 0 || numero == 1 || numero == 4) return false;

    // ---------------

    for(int i = 2; i < numero / 2; i++) {
        if (numero % i == 0) return false;
    }

}

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    int value1;

    cout << "Introduzca su valor entero: \n";
    cin >> value1;

    if (esPrimo(value1)) {
        cout << "El número " << value1 << " es primo.\n";
    }
    else {
        cout << "El número " << value1 << " no es primo.\n";
    }

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
