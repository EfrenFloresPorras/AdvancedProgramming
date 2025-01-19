// Ejemplo estructura condicional if-else

#include <iostream>
using namespace std;

int main(int args, const char *argv[]){
    int a, b, c;
    cout << "Ingrese tres valores enteros: ";
    cin >> a >> b >> c;
    if (a > b){
        if (a > c){
            cout << "El mayor es " << a << endl;
        } else {
            cout << "El mayor es " << c << endl;
        }
    } else {
        if (b > c){
            cout << "El mayor es " << b << endl;
        } else {
            cout << "El mayor es " << c << endl;
        }
    }
    return 0;
}