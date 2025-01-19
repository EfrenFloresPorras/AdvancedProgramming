// Biblioteca, la funcion validará si 2 arreglos son del mismo tamaño, tanto en arreglo como en cadena, sea true or false. 'equalLength'
#ifndef _equalLength_
#define _equalLenght_

#include <iostream>

int equalLenght(char array1[], char array2[]){
    int size1{ 0 }, size2{ 0 };
    for (int i = 0; array1[i] != '\0'; i++){
        size1++;
    }
    for (int i = 0; array2[i] != '\0'; i++){
        size2++;
    }
    if (size1 == size2 && sizeof(array1) == sizeof(array2)){
        return true;
    }else{
        return false;
    }
}

#endif