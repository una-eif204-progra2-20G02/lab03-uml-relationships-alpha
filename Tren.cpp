//
// Created by computer on 8/12/2020.
//

#include "Tren.h"

Tren::Tren() {
    _tipo="";
    _marca="";
    _placa="";
}

Tren::Tren(std::string tipo, std::string marca, std::string placa){
    _marca=marca;
    _placa=placa;
    _tipo=tipo;
}

Tren::Tren(std::string tipo, std::string marca, std::string placa,Pasajero* pasajero, Conductor* conductor/*, Ruta* ruta */) {
    _marca=marca;
    _placa=placa;
    _conductor=conductor;
    _pasajero=pasajero;
    _tipo=tipo;
    //_Rura=ruta;
}

Tren::~Tren() {
    _listaConductor.clear();
    _listaPasajero.clear();
    //_listaRutas.clear();
}

//gets
std::string Tren::getMarca() const{
    return _marca;
}

std::string Tren::getPlaca() const{
    return _placa;
}
std::string Tren::getTipo() const {
    return _tipo;
}

Conductor* Tren::getConductor() const{
    return _conductor;
}
Pasajero* Tren::getPasajero() const{
    return _pasajero;
}
//Ruta *Tren::getRuta() const {
//    return _ruta;
//}



//sets
void Tren::setMarca(std::string marca){
    _marca=marca;
}
void Tren::setPlaca(std::string placa){
    _placa=placa;
}
void Tren::setTipo(std::string tipo) {
    _tipo=tipo;
}

void Tren::setConductor(Conductor* conductor){
    _conductor=conductor;
}
void Tren::setPasajero(Pasajero* pasajero){
    _pasajero=pasajero;
}
//void Tren::setRuta(Ruta* ruta) {
//    _ruta=ruta;
//}


void Tren::addConductor(Conductor* conductor){
    _listaConductor.push_back(*conductor);
}
void Tren::addPasajero(Pasajero* pasajero){
    _listaPasajero.push_back(*pasajero);
}
//void Tren::addRuta(Ruta* ruta) {
//    _listaRutas.push_back(*ruta);
//}



std::string Tren::toString() const{
    std::stringstream s;
    s<<"Datos del Tren: "<<"\n";
    s<<"\n";
    s<<"Marca del Tren: "<<Tren::getMarca()<<"\n";
    s<<"El numero de placa es: "<<Tren::getPlaca()<<"\n";
    s<<"\n";
    s<<"\n" << "Conductores: \n";
    if(_listaConductor.size()!=0){
        for(int i=0; i<_listaConductor.size();i++){
            s<<i+1<<"\t";
            s<<_listaConductor.data()[i].toString();
            s<<"\n";
        }
    }
    s<<"Pasajeros: \n";
    if(_listaPasajero.size()!=0){
        for(int i=0; i<_listaPasajero.size();i++){
            s<<_listaPasajero.data()[i].toString();
        }
    }
    s<<"\n\n";
    return s.str();
}




