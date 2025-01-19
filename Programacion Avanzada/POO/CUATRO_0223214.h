// diretiva que nos indica que estamos poniendo una definicion y solamente lo realize una vez, se puede definir pero no redefinir.
// #pragma once

// Igualmente, esta directiva, primero, pregunta si la constante esta definida, si no esta definida, la define, si esta definida, no la define. Es lo miso que lo de arriba.
#ifndef CUATRO_0223214_H
#define CUATRO_0223214_H

#include <iostream> //
#include <math.h>
#include <string>
#include <Windows.h>
#include <locale.h>
using namespace std;

//
namespace db
{
    class Vehiculo
    {
    private: // You can only access this variables from this class or frinds classes/methods
             /*data*/
        unsigned char wheels;
        bool status;
        unsigned char doors;
        std::string color;
        std::string marca;
        std::string plates;
        float gas;
        char marcha;

    public: // You can access this variables from anywhere
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

    };

    Vehiculo::Vehiculo(/*args*/)
    {
        this->wheels = 0;
        this->status = false;
        this->doors = 0;
        this->color = "undefined";
        this->marca = "undefined";
        this->plates = "undefined";
        this->gas = 0.0;
        this->marcha = 'p';
    }

    Vehiculo::Vehiculo(unsigned char llantas, bool status, unsigned char doors, std::string color, std::string marca, std::string plates, float gas, char marcha)
    {
        this->wheels = wheels;
        this->status = status;
        this->doors = doors;
        this->color = color;
        this->marca = marca;
        this->plates = plates;
        this->gas = gas;
        this->marcha = marcha;
    }

    Vehiculo::Vehiculo(const Vehiculo &vehiculo)
    {
        this->wheels = vehiculo.wheels;
        this->status = vehiculo.status;
        this->doors = vehiculo.doors;
        this->color = vehiculo.color;
        this->marca = vehiculo.marca;
        this->plates = vehiculo.plates;
        this->gas = vehiculo.gas;
        this->marcha = vehiculo.marcha;
    }

    // SETTERS
    bool Vehiculo::setWheels(unsigned char wheels)
    {
        if (wheels < 0)
        {
            return false;
        }
        this->wheels = wheels;
        return true;
    }
    bool Vehiculo::setStatus(bool status)
    {
        this->status = status;
        return true;
    }
    bool Vehiculo::setDoors(unsigned char doors)
    {
        this->doors = doors;
        return true;
    }
    bool Vehiculo::setColor(std::string color)
    {
        this->color = color;
        return true;
    }
    bool Vehiculo::setMarca(std::string marca)
    {
        this->marca = marca;
        return true;
    }
    bool Vehiculo::setPlates(std::string plates)
    {
        this->plates = plates;
        return true;
    }
    bool Vehiculo::setGas(float gas)
    {
        this->gas = gas;
        return true;
    }
    bool Vehiculo::setMarcha(char marcha)
    {
        this->marcha = marcha;
        return true;
    }

    // GETTERS
    unsigned char Vehiculo::getWheels()
    {
        return this->wheels;
    }
    bool Vehiculo::getStatus()
    {
        return this->status;
    }
    unsigned char Vehiculo::getDoors()
    {
        return this->doors;
    }
    std::string Vehiculo::getColor()
    {
        return this->color;
    }
    std::string Vehiculo::getMarca()
    {
        return this->marca;
    }
    std::string Vehiculo::getPlates()
    {
        return this->plates;
    }
    float Vehiculo::getGas()
    {
        return this->gas;
    }
    char Vehiculo::getMarcha()
    {
        return this->marcha;
    }

    Vehiculo::~Vehiculo()
    {
        cout << "Destructor" << endl;
    }
};

#endif // !CUATRO_0223214_H