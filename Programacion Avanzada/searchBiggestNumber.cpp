// Leer n numeros y dija cual de ellso es el mayor}

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int n;
    double number;
    double biggestNumber;

    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> number;

        if (number > biggestNumber){
            biggestNumber = number;
        }
    }

    cout << "El número más grande es: " << biggestNumber << endl;
}