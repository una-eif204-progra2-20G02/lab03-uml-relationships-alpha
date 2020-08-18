//
// Created by computer on 8/12/2020.
//

#include "Tren.h"

Tren::Tren() {
    _tipo="";

}

Tren::Tren(std::string tipo,std::string marca, std::string placa,Ruta* ruta):Vehiculo(marca, placa, ruta){
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
void Tren::addConductores(Conductor* conductor)
{
    _listaConductores.push_back(*conductor);
}
void Tren::addPasajeros(Pasajero* pasajero)
{
    _listaPasajeros.push_back(*pasajero);
}


std::string Tren::toString() const{
    std::stringstream s;
    s<<"Tipo vehiculo: "<<Tren::getTipo()<<"\n";
    s<<"*******************Datos**************  "<<"\n";
    s<<Vehiculo::toString()<<"\n";
    s<<"-------Conductores:------- "<<"\n";
    for(int i=0;i<_listaConductores.size();i++){//For type cycle from 0 to Conductor's size.
        s<<_listaConductores.data()[i].toString()<<"\n";//Shows data contained in the collection.
    }
    s<<"--------Pasajeros-----: "<<"\n";
    for(int i=0;i<_listaPasajeros.size();i++) {//For type cycle from 0 to Pasajero's size.
        s << _listaPasajeros.data()[i].toString() << "\n";//Shows data contained in the collection.

    }
    return s.str();
}




