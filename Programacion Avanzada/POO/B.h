#pragma once
#include "A.h"
class B :private A
{
protected:
	int b_dato_protegido;
private:
	int b_dato_privado;
	/data/
public:
	int b_dato_publico;
	B(/args/);
	B(int dato);
	bool setDatoProtegido(int dato);
	int getDatoProtegido();
	~B();
};
bool B::setDatoProtegido(int dato)
{
	this->b_dato_protegido = dato;
	return true;
}
int B::getDatoProtegido()
{
	return this->b_dato_protegido;
}
B::B(/args/)
{
	this->b_dato_protegido = 1;
	this->b_dato_privado = 0;
}

B::B(int dato)
{
	this->b_dato_protegido = 1;
	this->b_dato_privado = dato;
}

B::~B()
{

	std::cout << "Destructor de B\n";
}