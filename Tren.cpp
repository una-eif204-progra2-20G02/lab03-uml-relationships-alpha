//
// Created by computer on 8/12/2020.
//

#include "Tren.h"

Tren::Tren() {
    _tipo="";

}

Tren::Tren(std::string tipo):Vehiculo(){
    _tipo=tipo;
}

Tren::Tren(std::string tipo, std::string marca, std::string placa,Pasajero* pasajero, Conductor* conductor, Ruta* ruta )
: Vehiculo(marca,placa,conductor,pasajero,ruta) {
    _tipo=tipo;
}

Tren::~Tren() {
}

//gets
std::string Tren::getTipo() const {
    return _tipo;
}


//sets
void Tren::setTipo(std::string tipo) {
    _tipo=tipo;
}


std::string Tren::toString() const{
    std::stringstream s;
    s<<"Datos del Tren: "<<"\n";
    s<<this->toString()<<"\n";
    return s.str();
}




