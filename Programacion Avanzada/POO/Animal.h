#pragma once
#include <iostream>
#include <string>

class Animal
{
protected:
	short cantidad_de_patas;
	short cantidad_de_ojos;
	std::string sonido_r;
	std::string tipo;
	std::string color;
private:
	/data/
public:
	Animal(/args/);
	Animal(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color);
	~Animal();
	virtual void sonido()
	{
		std::cout << "Default\n";
	}
};
Animal::Animal(/args/)
{
	this->cantidad_de_ojos = 0;
	this->cantidad_de_patas = 0;
	this->sonido_r = "Indefinido";
	this->color = "Indefinido";
	this->tipo = "Indefinido";
}
Animal::Animal(short cantidad_patas, short cantidad_ojos, std::string sonido_r, std::string tipo, std::string color)
{
	this->cantidad_de_ojos = cantidad_ojos;
	this->cantidad_de_patas = cantidad_patas;
	this->sonido_r = sonido_r;
	this->tipo = tipo;
	this->color = color;
}
Animal::~Animal(/args/)
{

}