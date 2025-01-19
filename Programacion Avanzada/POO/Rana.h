#pragma once
#include <iostream>
#include "Animal.h"

class Rana : public Animal
{
private:
    bool veneno;

public:
    Rana();
    Rana(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color, bool veneno);

    void setVeneno(bool veneno);
    bool getVeneno();

    void saltar();
    void sonido();

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

    ~Rana();
};

Rana::Rana()
{
    this->veneno = false;
}

Rana::Rana(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color, bool veneno)
    : Animal(cantidad_patas, cantidad_ojos, sonido_r, tipo, color)
{
    this->veneno = veneno;
}

void Rana::setVeneno(bool veneno)
{
    this->veneno = veneno;
}

bool Rana::getVeneno()
{
    return this->veneno;
}

void Rana::saltar()
{
    std::cout << "La rana está saltando." << std::endl;
}

void Rana::sonido()
{
    std::cout << "La rana hace '" << this->sonido_r << "'." << std::endl;
}

// Implementación de los métodos de Animal
void Rana::setPatas(short patas)
{
    this->cantidad_de_patas = patas;
}

void Rana::setOjos(short ojos)
{
    this->cantidad_de_ojos = ojos;
}

void Rana::setSonido(std::string sonido)
{
    this->sonido_r = sonido;
}

void Rana::setColor(std::string color)
{
    this->color = color;
}

void Rana::setTipo(std::string tipo)
{
    this->tipo = tipo;
}

short Rana::getPatas()
{
    return this->cantidad_de_patas;
}

short Rana::getOjos()
{
    return this->cantidad_de_ojos;
}

std::string Rana::getSonido()
{
    return this->sonido_r;
}

std::string Rana::getColor()
{
    return this->color;
}

std::string Rana::getTipo()
{
    return this->tipo;
}

Rana::~Rana()
{
}