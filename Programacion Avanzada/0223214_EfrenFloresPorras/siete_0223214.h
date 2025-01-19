/* 

Un programa que lea un país, utilizando tres estructuras: pais, estado y municipio

pais {
    nombre
    coordenadas
    capital
    cantidad de estados
    Estado * estados
}

estado {
    nombre 
    coordenadas
    capital
    cantidad de municipios
    municipio * municipios
}

municipio {
    nombre
    coordenadas
}

*/ 

#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>

using namespace std;

struct Municipio {
    string nombre;
    int coordenadas[2];
};

struct Estado {
    string nombre;
    int coordenadas[2];
    string capital;
    int cantidadMunicipios;
    Municipio * municipios;
};

struct Pais {
    string nombre;
    int coordenadas[2];
    string capital;
    int cantidadEstados;
    Estado * estados;
};

void pedirDatosMunicipio(Municipio &municipio) {
    cout << "Nombre del municipio: ";
    getline(cin, municipio.nombre);
    cout << "Coordenadas del municipio: ";
    cin >> municipio.coordenadas[0] >> municipio.coordenadas[1];
    cin.ignore();
}

void pedirDatosEstado(Estado &estado) {
    cout << "Nombre del estado: ";
    getline(cin, estado.nombre);
    cout << "Coordenadas del estado: ";
    cin >> estado.coordenadas[0] >> estado.coordenadas[1];
    cin.ignore();
    cout << "Capital del estado: ";
    getline(cin, estado.capital);
    cout << "Cantidad de municipios: ";
    cin >> estado.cantidadMunicipios;
    cin.ignore();
    estado.municipios = new Municipio[estado.cantidadMunicipios];
    for (int i = 0; i < estado.cantidadMunicipios; i++) {
        pedirDatosMunicipio(estado.municipios[i]);
    }
}

void pedirDatosPais(Pais &pais) {
    cout << "Nombre del país: ";
    getline(cin, pais.nombre);
    cout << "Coordenadas del país: ";
    cin >> pais.coordenadas[0] >> pais.coordenadas[1];
    cin.ignore();
    cout << "Capital del país: ";
    getline(cin, pais.capital);
    cout << "Cantidad de estados: ";
    cin >> pais.cantidadEstados;
    cin.ignore();
    pais.estados = new Estado[pais.cantidadEstados];
    for (int i = 0; i < pais.cantidadEstados; i++) {
        pedirDatosEstado(pais.estados[i]);
    }
}

void paisEstadoMunicipio(int args, const char *argv[]) {
    setlocale(LC_ALL, "Spanish");
    SetConsoleOutputCP(CP_UTF8);
    
    Pais pais;
    pedirDatosPais(pais);
    
    cout << "Nombre del país: " << pais.nombre << endl;
    cout << "Coordenadas del país: " << pais.coordenadas[0] << ", " << pais.coordenadas[1] << endl;
    cout << "Capital del país: " << pais.capital << endl;
    cout << "Cantidad de estados: " << pais.cantidadEstados << endl;
    cout << "Estados: " << endl;
    for (int i = 0; i < pais.cantidadEstados; i++){
        cout << "Nombre del estado: " << pais.estados[i].nombre << endl;
        cout << "Coordenadas del estado: " << pais.estados[i].coordenadas[0] << ", " << pais.estados[i].coordenadas[1] << endl;
        cout << "Capital del estado: " << pais.estados[i].capital << endl;
        cout << "Cantidad de municipios: " << pais.estados[i].cantidadMunicipios << endl;
        cout << "Municipios: " << endl;
        for (int j = 0; j < pais.estados[i].cantidadMunicipios; j++) {
            cout << "Nombre del municipio: " << pais.estados[i].municipios[j].nombre << endl;
            cout << "Coordenadas del municipio: " << pais.estados[i].municipios[j].coordenadas[0] << ", " << pais.estados[i].municipios[j].coordenadas[1] << endl;
        }
    }
    return 0;
}