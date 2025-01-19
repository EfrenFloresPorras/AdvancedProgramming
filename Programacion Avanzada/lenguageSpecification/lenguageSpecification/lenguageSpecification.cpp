// lenguageSpecification.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "Spanish");
    std::cout << "n�mero" << std::endl;

    unsigned char numero{ 1 }; // 00000001
    unsigned char numeroUno{ 5 }; // 00000101

    std::cout << "corrimiento derecha: " << (numero >> 1) << std::endl;
    std::cout << "corrimiento a uno: " << ((unsigned int)~numero) << std::endl;
    std::cout << "and: " << (numero & numeroUno) << std::endl;
    std::cout << "or: " << (numero | numeroUno) << std::endl;
    std::cout << "xor" << (numero ^ numeroUno) << std::endl;
    return 0;
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
