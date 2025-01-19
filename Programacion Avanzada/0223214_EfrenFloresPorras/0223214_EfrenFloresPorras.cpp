// hacer un menu, de 5 opciones, con un switch y que valide si las opciones son correctas. (cero para salir)

#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <locale.h>
#include "uno_0223214.h"
#include "dos_0223214.h"
#include "tres_0223214.h"
#include "cuatro_0223214.h"
#include "cinco_0223214.h"
#include "seis_0223214.h"
#include "siete_0223214.h"
#include "ocho_0223214.h"
#include "nueve_0223214.h"
#include "diez_0223214.h"
#include "once_0223214.h"
#include "doce_0223214.h"
#include "trece_0223214.h"
#include "catorce_0223214.h"

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int opt;

    do {
        cout << "\nMENU \n1. Artimética \n2. Estructura \n3. Punteros \n4. Puntero Dinamico \n5. Persona \n6. Zoologico \n7. País \n8. SWAP \n9. Ejemplo paso por referencia \n10. \n11. Ejercicio referencia con estructuras \n12. \n13. Uniones \n14. Escuela \n0. Salir \nIngrese una opción: " << endl;
        cin >> opt;

        switch (opt) {
            case 1:
                arithmetic();
                break;
            case 2:
                structure();
                break;
            case 3:
                puntero();
                break;
            case 4:
                punteroDinamico();
                break;
            case 5:
                dog();
                break;
            case 6:
                zoo();
                break;
            case 7:
                paisEstadoMunicipio();
                break;
            case 8:
                copy();
                break;
            case 9:
                reference();
                break;
            case 10:
                
                break;
            case 11:
                persona();
                break;
            case 12:
                
                break;
            case 13:
                Union();
                break;
            case 14:
                school();
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción incorrecta" << endl;
                break;
        }
    } while (opt != 0);
    return 0;
} 
