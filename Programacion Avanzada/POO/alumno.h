#pragma once
#ifndef ALUMNO_H
#define ALUMNO_H
#include "DOS_0223214.h"

#include <iostream>
using namespace std;

class Alumno{
    private:
        /* data */
        std::string name;
    public:
        Alumno(/* args */);
        Alumno(std::string name);
        ~Alumno();
        void setName(std::string name);
        std::string getName();
}

#endif // !ALUMNO_H
