//
// Created by Pc on 17/8/2020.
//
#include "Vehiculo.h"
Vehiculo::Vehiculo()
{
    _marca = "";
    _placa = "";
}

Vehiculo::Vehiculo(string placa, string marca, Conductor* conductor,Pasajero* pasajero, Ruta* ruta)
{
    _placa = placa;
    _marca = marca;
    _conductor = conductor;
    _pasajero = pasajero;
    _ruta = ruta;
}

Vehiculo::~Vehiculo() {

}

const string &Vehiculo::getMarca() const {
    return _marca;
}

const string &Vehiculo::getPlaca() const {
    return _placa;
}

Conductor *Vehiculo::getConductor() const {
    return _conductor;
}

Pasajero *Vehiculo::getPasajero() const {
    return _pasajero;
}
Ruta *Vehiculo::getRuta() const {
    return _ruta;
}

void Vehiculo::setMarca(const string &marca) {
    _marca = marca;
}

void Vehiculo::setPlaca(const string &placa) {
    _placa = placa;
}

void Vehiculo::setConductor(Conductor *conductor) {
    _conductor = conductor;
}

void Vehiculo::setPasajero(Pasajero *pasajero) {
    _pasajero = pasajero;
}

void Vehiculo::setRuta(Ruta *ruta) {
    _ruta = ruta;
}
void Vehiculo::addConductores(Conductor* conductor)
{
    _vC.push_back(*conductor);
}
void Vehiculo::addPasajeros(Pasajero* pasajero)
{
    _vP.push_back(*pasajero);
}
string Vehiculo::toString() {
  stringstream s;
  s<<"Marca: "<<getMarca()<<endl;
  s<<"Placa: "<<getPlaca()<<endl;
  s<<"Conductores: "<<endl;
    for(int i=0;i<_vC.size();i++){//For type cycle from 0 to Conductor's size.
        s<<_vC.data()[i].toString()<<"\n";//Shows data contained in the collection.
    }
  s<<"Pasajero: "<<endl;
    for(int i=0;i<_vP.size();i++){//For type cycle from 0 to Pasajero's size.
        s<<_vP.data()[i].toString()<<"\n";//Shows data contained in the collection.

    }
  s<<"Ruta: " << getRuta()<<endl;
  return s.str();
}