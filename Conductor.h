//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_CONDUCTOR_H
#define BASIC_00_EXAMPLE_CONDUCTOR_H
#include "Persona.h"
class Conductor:public Persona{
public:
    Conductor();
    Conductor(std::string, std::string, std::string, double);
    virtual ~Conductor();

    virtual double getSalario() const;
    virtual void setSalario(double);

    virtual std::string toString() const;
private:
    double _salario;
};
#endif //BASIC_00_EXAMPLE_CONDUCTOR_H
