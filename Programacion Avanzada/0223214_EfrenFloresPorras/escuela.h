#ifndef _LIBCPP_ESCUELA
#define _LIBCPP_ESCUELA
#define MAX 50

struct Profesor {
    char nombre [MAX] {'\0'};
    char apellido_paterno [MAX] {'\0'};
    char apellido_materno [MAX] {'\0'};
};

struct Materia {
    char nombre [MAX] {'\0'};
    int creditos {0};
    int horario {0};
    Profesor * profesor;
};

struct Alumno {
    char nombre [MAX] {'\0'};
    char apellido_paterno [MAX] {'\0'};
    char apellido_materno [MAX] {'\0'};
    int edad {0};
    int semestre {0};
    int cant_materias {0};
    Materia * materia;
};

struct Escuela {
    char nombre [MAX] {'\0'};
    char domicilio [MAX] {'\0'};
    char nivel_educativo [MAX] {'\0'};
    int cant_alumnos {0};
    Alumno * alumno;
};

#endif