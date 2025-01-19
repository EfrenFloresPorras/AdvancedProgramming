// Calcular el precio con descuento de n artículos, tendrá descuento de 20% sí su precio es 100 o mas, si es menor no tendrá descuento.

#include <iostream>
#include <math.h>
#include <locale.h>
#include "Source/Discount.h"

using namespace std;

int main(){
    setlocale(LC_ALL, "Spanish");
    int n;
    double precio;
    double articules[n];
    double descuento;

    cout << "Ingrese la cantidad de artículos: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        descuento = 0;
        precio = 0;
        cout << "Ingrese el precio del artículo " << i + 1 << ": ";
        cin >> precio;
        cout << "Ingrese el descuento del artículo, en base a 100, " << i + 1 << ": ";
        cin >> descuento;

        articules[i] = discount(precio, descuento);
        cout << "El precio del artículo " << i + 1 << " es: " << articules[i] << endl;
    }

}