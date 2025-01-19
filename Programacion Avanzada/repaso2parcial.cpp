#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
    /*
    int var; // Esto es memoria estatica, lo que causa que este no pueda ser utilizado para tener otros espacios de memoria o el espacio de memoria no cambia.
    int *puntero = NULL; // Un puntero es un lugar donde varias memorias pueden acumularse o modificrse
    cout << &var; // usamos '&', ya que si no lo ponemos solamente nos dara el valor dentro de la memoria y al utilizarlo nos da la memoria.

    int array [10];
    int array_2 [10] = {0};
    int array_3 [] = {2, 4, 5, 7};

    int numero [10];
    int *puntero;
    puntero = &numero; // asignamos la memoria al puntero
    *puntero; // de esta forma accedemos a la cantidad de memoria asignada al puntero
    */

   int var;
   char array []= {0,3,4,5};
   float array1 []= {0,3,4,5};
   for(int i = 0; i < 4; i++){
        cout << "direccion base: " << (array+i) << "\n";
   }
   for(int i = 0; i < 4; i++){
        cout << "direccion base: " << (array1+i) << "\n";
   }

    int *array2;
    array2 = new int (4);
    for(int i = 0; i < 4; i++){
        cout << "direccion base: " << *(array+i) << "\n";
   }
    

    struct Data * data, data1;
    data1.numero;
    data->numero // la flecha es un operador para acceder al valor.

    delete [] array;
    delete data;
    return 0;
}