//
// Created by computer on 8/12/2020.
//


#include "Pasajero.h"

Pasajero::Pasajero():Persona() {
}

Pasajero::Pasajero(std::string nombre, std::string apellido, std::string cedula):
        Persona(nombre,apellido, cedula)
{
}

Pasajero::~Pasajero() {
}


std::string Pasajero::toString() const{
    std::stringstream s;
    s<<"Pasajero: "<<"\n";
    s<<Persona::toString();
    return s.str();
}