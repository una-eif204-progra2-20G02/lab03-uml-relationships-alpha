//
// Created by computer on 8/12/2020.
//

#include "Bus.h"
Bus::Bus() {
    _tipo = "";
}
Bus::Bus(std::string tipo) {
    _tipo=tipo;
}

Bus::Bus(std::string placa, std::string marca, Conductor * conductor, Pasajero * pasajero, Ruta * ruta, std::string tipo):
Vehiculo(placa, marca, conductor, pasajero, ruta),_tipo(tipo){

}
Bus::~Bus() {

}
Bus::Bus(string, string, Conductor *, Pasajero *, Ruta *, string) {}

Bus::Bus(string marca,string placa,Conductor* conductor,Pasajero* pasajero, Ruta* ruta,string tipo) : Vehiculo(marca,placa,conductor,pasajero,ruta)
{
    _tipo = tipo;
}

void Bus::setTipo(const string tipo) {
    _tipo = tipo;
}
string Bus::toString() {
    stringstream s;
    s<<"Tipo transporte: "<< Bus::getTipo()<<"\n";
    s<<"Datos: "<<"\n";
    s<<Vehiculo::toString()<<"\n";
    return s.str();
}

