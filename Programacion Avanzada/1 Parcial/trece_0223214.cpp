// Programa que imprime el número menor de diez números introducidos por el usuario

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int numbers[10];
    int min{ 0 };

    for (int i = 0; i < 10; i++) {
        std::cout << "Introduzca un número: ";
        std::cin >> numbers[i];

        if (i == 0) {
            min = numbers[i];
        } else {
            if (numbers[i] < min) {
                min = numbers[i];
            }
        }
    }

    std::cout << "El número menor de los números introducidos es: " << min << "\n";

    return 0;
}