// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main(int args, const char* argvs[])
{
    int operacion{ 0 };
    setlocale(LC_ALL, "Spanish");
    std::cout << "Introduce una operaci�n: " << std::endl;
    std::cin >> operacion;

    switch (operacion) {
    case 1:
        std::cout << "uno";
        break;
    case 2:
        std::cout << "dos";
        break;
    case 3:
        std::cout << "tres";
        break;
    case 1:
        std::cout << "cuatro";
        break;
    default:
        std::cout << "NO";
        break;
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
