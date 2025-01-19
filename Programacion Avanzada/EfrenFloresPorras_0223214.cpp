/*

1.     ¿Qué es una clase base?
Una clase base es una clase que no hereda de ninguna otra clase, es decir, no tiene clases padre.

2.     ¿Qué es una clase derivada?}
Una clase derivada es una clase que hereda de otra clase, es decir, tiene una clase padre. Una clase derivada puede tener clases derivadas, pero no puede ser una clase base.

3.     ¿Qué es un constructor copia?
El constructor copia es un constructor especial de las clases que se utiliza para inicializar un objeto con otro objeto de la misma clase. Se llama constructor copia porque se 
utiliza para copiar valores de un objeto a otro.

4.     ¿Qué es el destructor?
El destructor es un método especial de las clases que se utiliza para destruir un objeto. El destructor se llama automáticamente cuando un objeto se destruye, es decir, 
cuando se elimina de la memoria.

5.     Describa las características de los diferentes niveles de acceso para los miembros de una clase y que pasa en cada uno de los casos cuando se tiene herencia.
Dentro de una clase se pueden declarar miembros con diferentes niveles de acceso, los cuales son: public, protected y private. 
Estos niveles de acceso determinan si los miembros de una clase pueden ser accedidos desde fuera de la clase o no.
En public los miembros de una clase pueden ser accedidos desde fuera de la clase.
En protected los miembros de una clase no pueden ser accedidos desde fuera de la clase, pero si pueden ser accedidos desde las clases derivadas.
En private los miembros de una clase no pueden ser accedidos desde fuera de la clase ni desde las clases derivadas.
 
6.     Escriba un programa que le permita al usuario ingresar n cantidad de elementos de una clase Alumno que tiene herencia de la clase Persona.

a.     Los miembros de la clase Alumno son (calificación, grado, id_alumno ,id_materia, carrera)

b.     Los miembros de la clase Persona son (nombre, edad, fecha_nacimiento, curp)

c.     Programar los métodos gets, sets para los respectivos atributos de cada una de las clases.

*/

#include <iostream>
#include <string.h>
using namespace std;

class Persona{
    private:
        char nombre[30];
        int edad;
        char fecha_nacimiento[30];
        char curp[30];
    public:
        Persona(char nombre[30], int edad, char fecha_nacimiento[30], char curp[30]){
            strcpy(this->nombre, nombre);
            this->edad = edad;
            strcpy(this->fecha_nacimiento, fecha_nacimiento);
            strcpy(this->curp, curp);
        }
        void mostrar(){
            cout << "Nombre: " << nombre << endl;
            cout << "Edad: " << edad << endl;
            cout << "Fecha de nacimiento: " << fecha_nacimiento << endl;
            cout << "CURP: " << curp << endl;
        }
};

class Alumno : public Persona{
    private:
        int calificacion;
        int grado;
        int id_alumno;
        int id_materia;
        char carrera[30];
    public:
        Alumno(char nombre[30], int edad, char fecha_nacimiento[30], char curp[30], int calificacion, int grado, int id_alumno, int id_materia, char carrera[30]) : Persona(nombre, edad, fecha_nacimiento, curp){
            this->calificacion = calificacion;
            this->grado = grado;
            this->id_alumno = id_alumno;
            this->id_materia = id_materia;
            strcpy(this->carrera, carrera);
        }
        void mostrar(){
            Persona::mostrar();
            cout << "Calificacion: " << calificacion << endl;
            cout << "Grado: " << grado << endl;
            cout << "ID alumno: " << id_alumno << endl;
            cout << "ID materia: " << id_materia << endl;
            cout << "Carrera: " << carrera << endl;
        }
};

int main(){
    char nombre[30];
    int edad;
    char fecha_nacimiento[30];
    char curp[30];
    int calificacion;
    int grado;
    int id_alumno;
    int id_materia;
    char carrera[30];
    int n;
    cout << "Ingrese la cantidad de alumnos: ";
    cin >> n;
    Alumno *alumnos[n];
    for(int i = 0; i < n; i++){
        cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
        cin >> nombre;
        cout << "Ingrese la edad del alumno " << i + 1 << ": ";
        cin >> edad;
        cout << "Ingrese la fecha de nacimiento del alumno " << i + 1 << ": ";
        cin >> fecha_nacimiento;
        cout << "Ingrese el CURP del alumno " << i + 1 << ": ";
        cin >> curp;
        cout << "Ingrese la calificacion del alumno " << i + 1 << ": ";
        cin >> calificacion;
        cout << "Ingrese el grado del alumno " << i + 1 << ": ";
        cin >> grado;
        cout << "Ingrese el ID del alumno " << i + 1 << ": ";
        cin >> id_alumno;
        cout << "Ingrese el ID de la materia del alumno " << i + 1 << ": ";
        cin >> id_materia;
        cout << "Ingrese la carrera del alumno " << i + 1 << ": ";
        cin >> carrera;
        alumnos[i] = new Alumno(nombre, edad, fecha_nacimiento, curp, calificacion, grado, id_alumno, id_materia, carrera);
    }
    for(int i = 0; i < n; i++){
        cout << "Alumno " << i + 1 << endl;
        alumnos[i]->mostrar();
        cout << endl;
    }
    return 0;
}