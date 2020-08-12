//
// Created by computer on 8/12/2020.
//

#include "Asientos.h"

Asientos::Asientos() {
    _codigo="";

}
Asientos::Asientos(std::string codigo){
    _codigo=codigo;
}

Asientos::Asientos(std::string codigo, Pasajero* const pasajero) {
    _codigo=codigo;
    _pasajero=pasajero;
}

Asientos::~Asientos() {
}

std::string Asientos::getCodigo() const{
    return _codigo;
}

Pasajero* Asientos::getPasajero()const{
    return _pasajero;
}


void Asientos::setCodigo(std::string codigo){
    _codigo=codigo;
}
void Asientos::setPasajero(Pasajero* pasajero){
    _pasajero=pasajero;
}

std::string Asientos::toString() const{
    std::stringstream s;
    s<<Asientos::getPasajero()->toString();
    s<<"Codigo de asiento: "<<Asientos::getCodigo()<<"\n";
    return s.str();
}