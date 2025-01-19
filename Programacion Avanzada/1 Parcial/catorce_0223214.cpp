// Programa que imprime el número mayor de diez números introducidos por el usuario

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int numbers[10];
    int max{ 0 };

    for (int i = 0; i < 10; i++) {
        std::cout << "Introduzca un número: ";
        std::cin >> numbers[i];

        if (i == 0) {
            max = numbers[i];
        } else {
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }
    }

    std::cout << "El número mayor de los números introducidos es: " << max << "\n";

    return 0;
}