//
// Created by Pc on 17/8/2020.
//
#include "Vehiculo.h"
Vehiculo::Vehiculo()
{
    _marca = "";
    _placa = "";
}
Vehiculo::Vehiculo(std::string marca, std::string placa)
{
    _marca = marca;
    _placa = placa;
}
Vehiculo::Vehiculo(std::string placa, std::string marca, Conductor* conductor,Pasajero* pasajero, Ruta* ruta)
{
    _placa = placa;
    _marca = marca;
    _conductor = conductor;
    _pasajero = pasajero;
    _ruta = ruta;
}

Vehiculo::~Vehiculo() {

}

std::string Vehiculo::getMarca() const {
    return _marca;
}

std::string Vehiculo::getPlaca() const {
    return _placa;
}

Conductor* Vehiculo::getConductor() const {
    return _conductor;
}

Pasajero* Vehiculo::getPasajero() const {
    return _pasajero;
}
Ruta* Vehiculo::getRuta() const {
    return _ruta;
}

void Vehiculo::setMarca(const std::string marca) {
    _marca = marca;
}

void Vehiculo::setPlaca(const std::string placa) {
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
    _listaConductores.push_back(*conductor);
}
void Vehiculo::addPasajeros(Pasajero* pasajero)
{
    _listaPasajeros.push_back(*pasajero);
}
std::string Vehiculo::toString() const{
  std::stringstream s;
  s<<"Ruta: " << getRuta()->toString()<<"\n";
  s<<"Marca: "<<getMarca()<<"\n";
  s<<"Placa: "<<getPlaca()<<"\n";
  s<<"Conductores: "<<"\n";
    for(int i=0;i<_listaConductores.size();i++){//For type cycle from 0 to Conductor's size.
        s<<_listaConductores.data()[i].toString()<<"\n";//Shows data contained in the collection.
    }
  s<<"Pasajeros: "<<"\n";
    for(int i=0;i<_listaPasajeros.size();i++) {//For type cycle from 0 to Pasajero's size.
        s << _listaPasajeros.data()[i].toString() << "\n";//Shows data contained in the collection.

    }
  return s.str();
}