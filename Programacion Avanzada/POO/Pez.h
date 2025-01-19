#pragma once
#include <iostream>
#include "Animal.h"

class Pez : public Animal
{
private:
    bool escamas;
    bool aletas;

public:
    Pez();
    Pez(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color, bool escamas, bool aletas);

    void setEscamas(bool escamas);
    bool getEscamas();

    void setAletas(bool aletas);
    bool getAletas();

    void nadar();

    // Métodos de Animal
    void setPatas(short patas);
    void setOjos(short ojos);
    void setSonido(std::string sonido);
    void setColor(std::string color);
    void setTipo(std::string tipo);

    short getPatas();
    short getOjos();
    std::string getSonido();
    std::string getColor();
    std::string getTipo();

    ~Pez();
};

Pez::Pez()
{
    this->escamas = false;
    this->aletas = false;
}

Pez::Pez(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color, bool escamas, bool aletas)
    : Animal(cantidad_patas, cantidad_ojos, sonido_r, tipo, color)
{
    this->escamas = escamas;
    this->aletas = aletas;
}

void Pez::setEscamas(bool escamas)
{
    this->escamas = escamas;
}

bool Pez::getEscamas()
{
    return this->escamas;
}

void Pez::setAletas(bool aletas)
{
    this->aletas = aletas;
}

bool Pez::getAletas()
{
    return this->aletas;
}

void Pez::nadar()
{
    std::cout << "El pez está nadando." << std::endl;
}

// Implementación de los métodos de Animal
void Pez::setPatas(short patas)
{
    this->cantidad_de_patas = patas;
}

void Pez::setOjos(short ojos)
{
    this->cantidad_de_ojos = ojos;
}

void Pez::setSonido(std::string sonido)
{
    this->sonido_r = sonido;
}

void Pez::setColor(std::string color)
{
    this->color = color;
}

void Pez::setTipo(std::string tipo)
{
    this->tipo = tipo;
}

short Pez::getPatas()
{
    return this->cantidad_de_patas;
}

short Pez::getOjos()
{
    return this->cantidad_de_ojos;
}

std::string Pez::getSonido()
{
    return this->sonido_r;
}

std::string Pez::getColor()
{
    return this->color;
}

std::string Pez::getTipo()
{
    return this->tipo;
}

Pez::~Pez()
{
}