#ifndef _circuleArea_ // Busca si ya esta definnido o no.
#define _circuleArea_ // En dado caso que no este definido.

#include <math.h>

// definimos pi
#define pi 3.1416
    float Area(float radio){
        return pi * (radio * radio);
    }

#endif