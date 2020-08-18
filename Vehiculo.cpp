//
// Created by Pc on 17/8/2020.
//
#include "Vehiculo.h"
Vehiculo::Vehiculo()
{
    _marca = "";
    _placa = "";
}
Vehiculo::Vehiculo(std::string marca, std::string placa, Ruta* ruta)
{
    _marca = marca;
    _placa = placa;
    _ruta=ruta;
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

std::string Vehiculo::toString() const{
  std::stringstream s;
  s<<"------Ruta: -----\n" << getRuta()->toString()<<"\n";
  s<<"Marca: "<<getMarca()<<"\n";
  s<<"Placa: "<<getPlaca()<<"\n";

  return s.str();
}