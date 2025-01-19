#pragma once
#include <iostream>
#include "Animal.h"
class Perro : public Animal
{
private:
	/data/
	std::string raza;
public:
	Perro(/args/);
	Perro(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color, std::string raza);
	//set
	bool setPatas(short patas);
	bool setOjos(short ojos);
	bool setSonido(std::string sonido);
	bool setColor(std::string color);
	bool setTipo(std::string tipo);
	bool setRaza(std::string raza);
	//get
	short getPatas();
	short getOjos();
	std::string getSonido();
	std::string getColor();
	std::string getTipo();
	std::string getRaza();
	~Perro();
};
Perro::Perro(/args/)
{
	this->raza = "Indefinido";
}
Perro::Perro(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color, std::string raza): Animal(cantidad_de_patas,cantidad_de_ojos,sonido_r,tipo,color)
{
	this->raza = raza;

}
Perro::~Perro()
{

}
bool Perro::setPatas(short patas)
{
	if (patas < 0)
	{
		return false;
	}
	this->cantidad_de_patas = patas;
	return true;
}
bool Perro::setOjos(short ojos)
{
	if (ojos < 0)
	{
		return 0;
	}
	this->cantidad_de_ojos = ojos;
	return 1;
}
bool Perro::setSonido(std::string sonido)
{
	if (sonido.length() == 0)
	{
		return false;
	}
	this->sonido_r = sonido;
}
bool Perro::setColor(std::string color)
{
	if (color.length())
	{
		return false;
	}
	this->color = color;
	return true;
}
bool Perro::setTipo(std::string tipo)
{
	if (tipo.length())
	{
		return false;
	}
	this->tipo = tipo;
}
bool Perro:: setRaza(std::string raza)
{
	if (raza.length())
	{
		return false;
	}
	this->raza = raza;
}
short Perro::getPatas()
{
	return this->cantidad_de_patas;
}
short Perro::getOjos()
{
	return this->cantidad_de_ojos;
}
std::string Perro::getSonido()
{
	return this->sonido_r;
}
std::string Perro::getColor()
{
	return this->color;
}
std::string Perro::getTipo()
{
	return this->tipo;
}
std::string Perro::getRaza()
{
	return this->raza;
}
void Animal:: sonido()
{
	std::cout << "Ladrar\n";
}