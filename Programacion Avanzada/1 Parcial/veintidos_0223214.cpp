// Bubble Sort Algorithm an array from the lowest to the highest

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n;
    int aux;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    int array[n];

    for (int k = 0; k < n; k++){
        cout << "Ingrese el número " << k + 1 << ": ";
        cin >> array[k];
    }

    // Bubble Sort Algorithm from the lowest to the highest
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - 1; j++){
            if (array[j] > array[j + 1]){
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

    cout << "Los números ordenados de menor a mayor son: " << endl;
    for (int m = 0; m < n; m++){
        cout << "El " << m + 1 << " número es: " << array[m] << endl;
    }
}