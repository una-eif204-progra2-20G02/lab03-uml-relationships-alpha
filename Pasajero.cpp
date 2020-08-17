//
// Created by computer on 8/12/2020.
//


#include "Pasajero.h"

Pasajero::Pasajero():Persona() {
}

Pasajero::Pasajero(std::string nombre, std::string apellido, std::string cedula, double pasaje):
        Persona(nombre,apellido, cedula), _pasaje(pasaje)
{
}

Pasajero::~Pasajero() {
}

double Pasajero::getPasaje()const {
    return _pasaje;
}
void Pasajero::setPasaje(double pasaje) {
    _pasaje=pasaje;
}

std::string Pasajero::toString() const{
    std::stringstream s;
    s<<"Pasajero: "<<"\n";
    s<<Persona::toString();
    s<<"El monto de pasaje es de: "<<Pasajero::getPasaje()<<" colones."<<"\n";
    return s.str();
}