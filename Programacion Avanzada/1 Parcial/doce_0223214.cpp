// Programa que calcula el promedio de los números introducidos en un array de diez números

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int numbers[10];
    int sum{ 0 };

    for (int i = 0; i < 10; i++) {
        std::cout << "Introduzca un número: ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    std::cout << "El promedio de los números introducidos es: " << sum / 10 << "\n";

    return 0;
}