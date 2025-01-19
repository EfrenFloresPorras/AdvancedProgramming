#pragma once
#include <iostream>
class A
{
protected:
	int a_dato_protegido;
	bool setDatoProtegido(int dato);
	int getDatoProtegido();
private:
	/data/
	int a_dato_privado;
public:
	int a_dato_publico;
	A(/args/);
	A(int dato);
	~A();
	bool setDatoPrivado(int dato);
	int getDatoPrivado();
};
A::A(int dato)
{
	this->a_dato_privado = dato;
}
//set
bool A::setDatoPrivado(int dato)
{
	std::cout << "Constructor de A\n";
	this->a_dato_privado = dato;
	return true;
}
bool A::setDatoProtegido(int dato)
{
	this->a_dato_privado = dato;
	return true;
}
//get
int A::getDatoPrivado()
{
	return this->a_dato_privado;
}
int A::getDatoProtegido()
{
	return this->a_dato_protegido;
}
A::A(/args/)
{
	this->a_dato_protegido = 1;
	this->a_dato_privado = 0;
}
A::~A()
{
	std::cout << "Destructor de A\n";

}