#pragma once
#include "A.h"

class C : protected A
{
protected:
    int c_dato_protegido;
private:
    int c_dato_privado;
public:
    int c_dato_publico;
    C(/args/);
    C(int dato);
    bool setDatoProtegido(int dato);
    int getDatoProtegido();
    ~C();
};

bool C::setDatoProtegido(int dato)
{
    this->c_dato_protegido = dato;
    return true;
}

int C::getDatoProtegido()
{
    return this->c_dato_protegido;
}

C::C(/args/)
{
    this->c_dato_protegido = 1;
    this->c_dato_privado = 0;
}

C::C(int dato)
{
    this->c_dato_protegido = 1;
    this->c_dato_privado = dato;
}

C::~C()
{
    std::cout << "Destructor de C\n";
}