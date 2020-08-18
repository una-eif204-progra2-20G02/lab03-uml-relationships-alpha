//
// Created by computer on 8/12/2020.
//

#include "Bus.h"
Bus::Bus() {
    _tipo = "";
}

Bus::~Bus() {

}

Bus::Bus(string marca,string placa,Conductor* conductor,Pasajero* pasajero, Ruta* ruta,string tipo) : Vehiculo(marca,placa,conductor,pasajero,ruta)
{
    _tipo = tipo;
}

void Bus::setTipo(const string tipo) {
    _tipo = tipo;
}
string Bus::toString() {
    stringstream s;
    s<<"Ruta: " << Bus::getTipo()<<"\n";
    s<<"Datos: "<<"\n";
    s<<Vehiculo::toString()<<"\n";
    return s.str();
}

