//
// Created by computer on 8/12/2020.
//

#include "Bus.h"
//Buildeers
Bus::Bus() {
    _tipo = "";
}
Bus::Bus(std::string tipo) {
    _tipo=tipo;
}

Bus::Bus(std::string placa, std::string marca, Conductor * conductor, Pasajero * pasajero, Ruta * ruta, std::string tipo):
Vehiculo(placa, marca, conductor, pasajero, ruta),_tipo(tipo){

}
//Destructor
Bus::~Bus() {

}
//get methd
std::string Bus::getTipo() const {
    return _tipo;
}
//set method
void Bus::setTipo(const std::string tipo) {
    _tipo = tipo;
}
//to string method
std::string Bus::toString() {
    std::stringstream s;
    s<<"Tipo transporte: "<< Bus::getTipo()<<"\n";
    s<<"Datos: "<<"\n";
    s<<Vehiculo::toString()<<"\n";
    return s.str();
}

