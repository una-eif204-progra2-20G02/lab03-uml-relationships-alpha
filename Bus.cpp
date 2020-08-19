//
// Created by computer on 8/12/2020.
//

#include "Bus.h"
//Buildeers
Bus::Bus() {
    _tipo = "";
}
Bus::Bus(std::string tipo,std::string marca, std::string placa, Ruta* ruta):Vehiculo(marca, placa, ruta){
    _tipo=tipo;
}

Bus::Bus(std::string placa, std::string marca, Conductor * conductor, Pasajero * pasajero, Ruta * ruta, std::string tipo):
Vehiculo(placa, marca, conductor, pasajero, ruta),_tipo(tipo){

}
//Destructor
Bus::~Bus() {
_listaConductores.clear();

}
//get methd
std::string Bus::getTipo() const {
    return _tipo;
}
//set method
void Bus::setTipo(const std::string tipo) {
    _tipo = tipo;
}
void Bus::addConductores(Conductor* conductor)
{
    _listaConductores.push_back(*conductor);
}
void Bus::addPasajeros(Pasajero* pasajero)
{
    _listaPasajeros.push_back(*pasajero);
}
//to string method
std::string Bus::toString() {
    std::stringstream s;
    s<<"Tipo transporte: "<< Bus::getTipo()<<"\n";
    s<<"**************Datos:************ "<<"\n";
    s<<Vehiculo::toString()<<"\n";
    s<<"--------Conductores:------ "<<"\n";
    for(int i=0;i<_listaConductores.size();i++){//For type cycle from 0 to Conductor's size.
        s<<_listaConductores.data()[i].toString()<<"\n";//Shows data contained in the collection.
    }
    s<<"-------Pasajeros:------ "<<"\n";
    for(int i=0;i<_listaPasajeros.size();i++) {//For type cycle from 0 to Pasajero's size.
        s << _listaPasajeros.data()[i].toString() << "\n";//Shows data contained in the collection.

    }
    return s.str();
}

