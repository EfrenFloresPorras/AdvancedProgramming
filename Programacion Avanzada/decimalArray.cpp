// Programa que lea 10 números con punto decimal y calcule la suma y el promedio

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double sum;
    double average;
    double decimalArray[10];

    for (int i = 0; i < (sizeof(decimalArray) / sizeof(int)); i++){
        cout << "Deme el [" << i + 1 << "] valor decimal: ";
        cin >> decimalArray[i];
        sum += decimalArray[i];
    }
    
    average = sum/(sizeof(decimalArray) / sizeof(int));

    cout << "La suma de los decimales da igual a " << sum << "\n";
    cout << "El promedio de los decimales da igual a " << average << "\n";

}