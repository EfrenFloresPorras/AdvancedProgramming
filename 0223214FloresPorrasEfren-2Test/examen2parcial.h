#ifndef Exam2_ParcialH_
#define Exam2_ParcialH_

using namespace std;

struct Alumno{
    string nombre;
    int edad;
    string curp;
    // la fecha tiene que ser completa, ej: 15/09/2003.
    string fechaNacimiento;
    string carrera;
    string universidad;
};

void readData(Alumno *alumno, int n){
    for(int i = 0; i < n; i++){
        cout << "\nAlumno " << i + 1 << ": " << endl;
        cout << "Nombre: ";
        cin >> alumno[i].nombre;
        cout << "Edad: ";
        cin >> alumno[i].edad;
        cout << "CURP: ";
        cin >> alumno[i].curp;
        cout << "Fecha de nacimiento: ";
        cin >> alumno[i].fechaNacimiento;
        cout << "Carrera: ";
        cin >> alumno[i].carrera;
        cout << "Universidad: ";
        cin >> alumno[i].universidad;
    }
}

void printData(Alumno *alumno, int n){
    for(int i = 0; i < n; i++){
        cout << "\nAlumno " << i + 1 << ":" << endl;
        cout << "Nombre: " << alumno[i].nombre << endl;
        cout << "Edad: " << alumno[i].edad << endl;
        cout << "CURP: " << alumno[i].curp << endl;
        cout << "Fecha de nacimiento: " << alumno[i].fechaNacimiento << endl;
        cout << "Carrera: " << alumno[i].carrera << endl;
        cout << "Universidad: " << alumno[i].universidad << endl;
    }
}

#endif /* Exam2_ParcialH_ */