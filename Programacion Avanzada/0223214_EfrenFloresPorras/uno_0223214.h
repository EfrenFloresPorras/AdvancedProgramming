// funtions with arithmetic operations  (add, sub, mul, div, mod)
using namespace std;

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

float add(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mul(float a, float b){
    return a * b;
}

float div(float a, float b){
    return a / b;
}

float mod(int a, int b){
    return a % b;
}

void menu(int opt, float a, float b){
    switch (opt) {
            case 1:
                cout << "La suma da: " << add(a, b);
                break;
            case 2:
                cout << "La resta da: " << sub(a, b);
                break;
            case 3:
                cout << "La multiplicación da: " << mul(a, b);
                break;
            case 4:
                cout << "La división da: " << div(a, b);
                break;
            case 5:
                cout << "El módulo da: " << mod(a, b);
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción incorrecta" << endl;
                break;
        }
}

void arithmetic(){
    int opt{-1};
    float a, b;

    cout << "\nIngrese el primer número: " << endl;
    cin >> a;
    cout << "\nIngrese el segundo número: " << endl;
    cin >> b;

    while (opt != 0){
        cout << "\nMenu \n1. Suma \n2. Resta \n3. Multiplicación \n4. División \n5. Módulo \n0. Salir \nIngrese una opción: " << endl;
        cin >> opt;

        menu(opt, a, b);
    }
}

#endif