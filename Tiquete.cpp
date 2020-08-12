//
// Created by computer on 8/12/2020.
//

#include "Tiquete.h"

Tiquete::Tiquete() {
    _costoTiquete=0.0;
    _asiento=NULL;
}


Tiquete::Tiquete(double costoTiquete, Asientos* asiento){
    {
        _costoTiquete=costoTiquete;
        _asiento=asiento;

    }
}

Tiquete::~Tiquete() {
}

double Tiquete::getCostoTiquete() const{
    return _costoTiquete;
}

Asientos* Tiquete::getAsiento() const{
    return _asiento;
}

void Tiquete::setCostoTiquete(double costoTiquete){
    _costoTiquete=costoTiquete;
}

void Tiquete::setAsiento(Asientos* asiento){
    _asiento=asiento;
}

std::string Tiquete::toString() const{
    std::stringstream s;
    s<<"Tiquete: "<<"\n";
    s<<"\n";
    s<<Tiquete::getAsiento()->toString();
    s<<"Costo de tiquete: "<<Tiquete::getCostoTiquete()<<"\n";
    return s.str();
}