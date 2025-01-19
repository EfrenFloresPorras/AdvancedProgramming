// Hacer una biblioteca que tenga una funcion llamada 'indexOf'
#ifndef _indexOf_ // Busca si ya esta definnido o no.
#define _indexOf_ // En dado caso que no este definido.

#include <iostream>

int indexOf(char palabra[], char letra){
    int index{ -1 };
    for (int i = 0; i < sizeof(palabra); i++){
        if (palabra[i] == letra){
            index = i;
            break;
        }
    }
    return index;
}
#endif