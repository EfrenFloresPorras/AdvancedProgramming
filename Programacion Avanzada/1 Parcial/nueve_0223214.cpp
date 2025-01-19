// Ejemplo estructuras de control for, while, do-while

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    // Control for
    int value{ 1 };

    for (int i = 0; i < 100; i++) {
        std::cout << "Número " << i + 1 << "\n";
    }

    // While
    while (value != 0) {
        std::cout << "Introduzca un número: ";
        std::cin >> value;
    }

    // Do While
    do {
        std::cout << "Introduzca un número: ";
        std::cin >> value;
    } while (value != 0);

    return 0;
}