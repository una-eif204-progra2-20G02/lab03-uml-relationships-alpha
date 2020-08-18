//
// Created by computer on 8/12/2020.
//

#include "Paradas.h"

Paradas::Paradas() {
    _lugar="";
}

Paradas::Paradas(std::string lugar) {
    _lugar=lugar;
}

Paradas::~Paradas() {
}

std::string Paradas::getLugar() const{
    return _lugar;
}

void Paradas::setLugar(const std::string lugar){
    _lugar=lugar;
}

std::string Paradas::toString() const{
    std::stringstream s;
    s<<"El lugar de la parada es: "<<Paradas::getLugar()<<"\n";
    return s.str();
}

