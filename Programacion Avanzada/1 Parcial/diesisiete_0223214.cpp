//  Ejemplo de un método y sus parámetros

#include <iostream>
using namespace std;

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int main(int args, const char *argv[]){
    int array[10];

    for (int i = 0; i < 10; i++) {
        std::cout << "Introduzca un número: ";
        std::cin >> array[i];
    }

    printArray(array, 10);

    return 0;
}