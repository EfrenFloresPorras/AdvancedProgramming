#pragma once
#ifndef DOS_0223214_H
#define DOS_0223214_H
#include <iostream>
#include <math.h>
#include <Windows.h>
#include <locale.h>
#include "alumno.h"
using namespace std;

Alumno::Alumno(/* args */){
    cout << "Se creo la instancia  de Alumno.\n";
}

Alumno::Alumno(std::string name){
    this->name = name;
}

Alumno::~Alumno(){
    cout << "Se destruyo la instancia de Alumno.\n";
}

std::string Alumno::getName(){
    return this->name;
}

void Alumno::setName(std::string name){
    this->name = name;
}

int main()
{
    Alumno alumno;
    alumno.setName(" ");
    alumno.getName();
}

#endif // !DOS_0223214_H