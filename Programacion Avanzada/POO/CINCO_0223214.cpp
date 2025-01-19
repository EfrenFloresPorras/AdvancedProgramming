#pragma once
#include "A.h"

class D : public A
{
protected:
    int d_dato_protegido;
private:
    int d_dato_privado;
public:
    int d_dato_publico;
    D(/args/);
    D(int dato);
    bool setDatoProtegido(int dato);
    int getDatoProtegido();
    ~D();
};

bool D::setDatoProtegido(int dato)
{
    this->d_dato_protegido = dato;
    return true;
}

int D::getDatoProtegido()
{
    return this->d_dato_protegido;
}

D::D(/args/)
{
    this->d_dato_protegido = 1;
    this->d_dato_privado = 0;
}

D::D(int dato)
{
    this->d_dato_protegido = 1;
    this->d_dato_privado = dato;
}

D::~D()
{
    std::cout << "Destructor de D\n";
}