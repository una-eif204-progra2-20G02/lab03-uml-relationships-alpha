//
// Created by computer on 8/12/2020.
//

#include "Conductor.h"

Conductor::Conductor():
        _salario(0.0)
{
}

Conductor::Conductor(std::string nombre, std::string apellido, std::string cedula, double salario):
        Persona::Persona(nombre, apellido, cedula),
        _salario(salario)
{
}

Conductor::~Conductor() {
}

double Conductor::getSalario() const{
    return _salario;
}

void Conductor::setSalario(double salario){
    _salario=salario;
}

std::string Conductor::toString() const{
    std::stringstream s;
    s<<"Conductor: "<<"\n";
    s<<"\n";
    s<<Persona::toString();
    s<<"El Salario es de: "<< Conductor::getSalario()<<"\n";
    return s.str();
}