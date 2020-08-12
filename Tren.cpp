//
// Created by computer on 8/12/2020.
//

#include "Tren.h"

Tren::Tren() {
    _marca="";
    _placa="";
}

Tren::Tren(std::string marca, std::string placa){
    _marca=marca;
    _placa=placa;
}

Tren::Tren(std::string marca, std::string placa,Tiquete* tiquete, Conductor* conductor) {
    _marca=marca;
    _placa=placa;
    _conductor=conductor;
    _tiquete=tiquete;
}

Tren::~Tren() {
    _listaConductor.clear();
    _listaTiquete.clear();
}

std::string Tren::getMarca() const{
    return _marca;
}

std::string Tren::getPlaca() const{
    return _placa;
}

Conductor* Tren::getConductor() const{
    return _conductor;
}
Tiquete* Tren::getTiquete() const{
    return _tiquete;
}

void Tren::setMarca(std::string marca){
    _marca=marca;
}
void Tren::setPlaca(std::string placa){
    _placa=placa;
}

void Tren::setConductor(Conductor* conductor){
    _conductor=conductor;
}
void Tren::setTiquete(Tiquete* tiquete){
    _tiquete=tiquete;
}

void Tren::addConductor(Conductor* conductor){
    _listaConductor.push_back(*conductor);
}
void Tren::addTiquete(Tiquete* tiquete){
    _listaTiquete.push_back(*tiquete);
}

std::string Tren::toString() const{
    std::stringstream s;
    s<<"Datos del Tren: "<<"\n";
    s<<"\n";
    s<<"Marca del Tren: "<<Tren::getMarca()<<"\n";
    s<<"El numero de placa es: "<<Tren::getPlaca()<<"\n";
    s<<"\n";
    if(_listaTiquete.size()!=0){
        for(int i=0; i<_listaTiquete.size();i++){
            s<<_listaTiquete.data()[i].toString();
        }
    }
    s<<"\n";
    if(_listaConductor.size()!=0){
        for(int i=0; i<_listaConductor.size();i++){
            s<<i+1<<"\t";
            s<<_listaConductor.data()[i].toString();
            s<<"\n";
        }
    }
    return s.str();
}
