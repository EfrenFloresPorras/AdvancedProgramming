#ifndef VEHICULO_H
#define VEHICULO_H

#include <iostream>
#include <math.h>
#include <string>
#include <Windows.h>
#include <locale.h>
using namespace std;

namespace DB{
    class Vehiculo{
    private:
        unsigned char wheels{ 0 };
        bool vehiculo.status { 0 };
        unsigned char doors{ 0 };
        std::string color;
        std::string marca;
        std::string plates;
        float gas{ 0 };
        char marcha;
    public:
        Vehiculo(/* args */);
        Vehiculo(unsigned char llantas, bool status, unsigned char doors, std::string color, std::string marca, std::string plates, float gas, char marcha);
        Vehiculo(const Vehiculo &vehiculo);
        bool setWheels(unsigned char wheels);
        unsigned char getWheels();
        bool setStatus(bool status);
        bool getStatus();
        bool setDoors(unsigned char doors);
        unsigned char getDoors();
        bool setColor(std::string color);
        std::string getColor();
        bool setMarca(std::string marca);
        std::string getMarca();
        bool setPlates(std::string plates);
        std::string getPlates();
        bool setGas(float gas);
        float getGas();
        bool setMarcha(char marcha);
        char getMarcha();

        ~Vehiculo();

    }

    Vehiculo::Vehiculo(/*args*/){
        this->wheels = 0;
        this->status = false;
        this->doors = 0;
        this->color = "undefined";
        this->marca = "undefined";
        this->plates = "undefined";
        this->gas = 0.0;
        this->marcha = 'p';
    }

    Vehiculo::Vehiculo(unsigned char llantas, bool status, unsigned char doors, std::string color, std::string marca, std::string plates, float gas, char marcha){
        this->wheels = wheels;
        this->status = status;
        this->doors = doors;
        this->color = color;
        this->marca = marca;
        this->plates = plates;
        this->gas = gas;
        this->marcha = marcha;
    }

    Vehiculo::Vehiculo(const Vehiculo &vehiculo){
        this->wheels = vehiculo.wheels;
        this->status = vehiculo.status;
        this->doors = vehiculo.doors;
        this->color = vehiculo.color;
        this->marca = vehiculo.marca;
        this->plates = vehiculo.plates;
        this->gas = vehiculo.gas;
        this->marcha = vehiculo.marcha;
    }
};

#endif // !VEHICULO_H