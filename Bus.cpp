//
// Created by computer on 8/12/2020.
//

#include "Bus.h"

Bus::Bus() {
    _marca="";
    _placa="";
}

Bus::Bus(std::string marca, std::string placa){
    _marca=marca;
    _placa=placa;
}

Bus::Bus(std::string marca, std::string placa,Tiquete* tiquete, Conductor* conductor) {
    _marca=marca;
    _placa=placa;
    _conductor=conductor;
    _tiquete=tiquete;
}

Bus::~Bus() {

    _listaConductor.clear();

    _listaTiquete.clear();
}

std::string Bus::getMarca() const{
    return _marca;
}

std::string Bus::getPlaca() const{
    return _placa;
}

Conductor* Bus::getConductor() const{
    return _conductor;
}
Tiquete* Bus::getTiquete() const{
    return _tiquete;
}

void Bus::setMarca(std::string marca){
    _marca=marca;
}
void Bus::setPlaca(std::string placa){
    _placa=placa;
}

void Bus::setConductor(Conductor* conductor){
    _conductor=conductor;
}
void Bus::setTiquete(Tiquete* tiquete){
    _tiquete=tiquete;
}

void Bus::addConductor(Conductor* conductor){
    _listaConductor.push_back(*conductor);
}
void Bus::addTiquete(Tiquete* tiquete){
    _listaTiquete.push_back(*tiquete);
}

std::string Bus::toString() const{
    std::stringstream s;
    s<<"Datos del Bus: "<<"\n";
    s<<"\n";
    s<<"Marca del Bus: "<<Bus::getMarca()<<"\n";
    s<<"El numero de placa es: "<<Bus::getPlaca()<<"\n";
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
