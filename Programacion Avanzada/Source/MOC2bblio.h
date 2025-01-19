#ifndef _MOC_BILBIO
#define _MOC_BILBIO
#define MAX 50

struct Avion{
    int id{0};
    std::string aerolinea;
    int pasajeros;
    std::string matricula;
};

void dataEntry(struct Avion *aviones, int n){
    for(int i = 0; i < n; i++){
        std::cout << "\nIngrese los datos del avion " << i+1 << "\n";
        std::cout << "Ingrese el id del avion: ";
        std::cin >> aviones[i].id;
        std::cout << "Ingrese la aerolinea del avion: ";
        std::cin >> aviones[i].aerolinea;
        std::cout << "Ingrese la cantidad de pasajeros del avion: ";
        std::cin >> aviones[i].pasajeros;
        std::cout << "Ingrese la matricula del avion: ";
        std::cin >> aviones[i].matricula;
    }
}

void readData(struct Avion *aviones, int n){
    for(int i = 0; i < n; i++){
        std::cout << "\nEl id del avion es: " << aviones[i].id << "\n";
        std::cout << "La aerolinea del avion es: " << aviones[i].aerolinea << "\n";
        std::cout << "La cantidad de pasajeros del avion es: " << aviones[i].pasajeros << "\n";
        std::cout << "La matricula del avion es: " << aviones[i].matricula << "\n";
    }
}

#endif