// Programa que valida si un número es par o impar

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int value{ 1 };

    while (value != 0) {
        std::cout << "Introduzca un número: ";
        std::cin >> value;

        if (value % 2 == 0) {
            std::cout << "El número " << value << " es par\n";
        } else {
            std::cout << "El número " << value << " es impar\n";
        }
    }

    return 0;
}