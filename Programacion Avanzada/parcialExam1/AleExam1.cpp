/*
Hacer un programa que calcule el sueldo final de “n” trabajadores, n  y el sueldo base deberán ser ingresados desde la terminal.

*Si el sueldo base del empleado es menos a 10000 recibe un incremento en su sueldo final de más el 20%.

*Si el sueldo base del empleado es entre 10000 y 15000 recibe un incremento en su sueldo final de más el 10%.

*Si el sueldo base del empleado es entre 15000 y 20000 recibe un incremento en su sueldo final de más el 5%.

*Si el sueldo base del empleado es mayor a 20000 no recibe incremento.
*/

#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int n;
    double sueldoBase;
    double sueldoFinal;

    cout << "Ingrese la cantidad de trabajadores: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Ingrese el sueldo base del trabajador " << i + 1 << ": ";
        cin >> sueldoBase;

        if (sueldoBase < 10000){
            sueldoFinal = sueldoBase + (sueldoBase * 0.2);
        } else if (sueldoBase >= 10000 && sueldoBase < 15000){
            sueldoFinal = sueldoBase + (sueldoBase * 0.1);
        } else if (sueldoBase >= 15000 && sueldoBase < 20000){
            sueldoFinal = sueldoBase + (sueldoBase * 0.05);
        } else {
            sueldoFinal = sueldoBase;
        }

        cout << "El sueldo final del trabajador " << i + 1 << " es: " << sueldoFinal << endl;
    }
}