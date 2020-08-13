//
// Created by computer on 8/12/2020.
//


#include "Lineas.h"

Lineas::Lineas() {
    _codigo="";
    _nombre="";
}

Lineas::Lineas(std::string codigo, std::string nombre){
    _codigo=codigo;
    _nombre=nombre;
}

Lineas::Lineas(std::string codigo, std::string nombre, Bus* bus,Tren* tren, Paradas* parada)
{
    _codigo=codigo;
    _nombre=nombre;
    _bus=bus;
    _paradas=parada;
    _tren=tren;
}

Lineas::~Lineas() {
    _listaBus.clear();
    _listaParadas.clear();
    _listaTren.clear();
}
std::string Lineas::getCodigo() const{
    return _codigo;
}
std::string Lineas::getNombre() const{
    return _nombre;
}
Bus* Lineas::getBus() const{
    return _bus;
}
Tren* Lineas::getTren() const{
    return _tren;
}
Paradas* Lineas::getParadas()const{
    return _paradas;
}
Hora* Lineas::getHora()const{
    return _hora;
}

void Lineas::setCodigo(std::string codigo){
    _codigo=codigo;
}
void Lineas::setNombre(std::string nombre){
    _nombre=nombre;
}
void Lineas::setBus(Bus* bus){
    _bus=bus;
}
void Lineas::setTren(Tren* tren){
    _tren=tren;
}
void Lineas::setParadas(Paradas* parada){
    _paradas=parada;
}
void Lineas::setHora(Hora* hora){
    _hora=hora;
}
void Lineas::addBus(Bus* const bus){
    _listaBus.push_back(*bus);
}
void Lineas::addParada(Paradas* const parada){
    _listaParadas.push_back(*parada);
}
void Lineas::addTren(Tren* const tren){
    _listaTren.push_back(*tren);
}
void Lineas::addHora(Hora* const hora){
    _listaHora.push_back(*hora);
}
std::string Lineas::toString() const{
    std::stringstream s;
    s<<"Codigo de ruta Bus: "<<Lineas::getCodigo()<<"\n";
    s<<"Nombre de la ruta Bus: "<<Lineas::getNombre()<<"\n";
    s<<"\n";
    for(int i=0;i<_listaBus.size();i++){
        s<<_listaBus.data()[i].toString();
    }
    s<<"\n";
    for(int j=0;j<_listaParadas.size();j++){
        s<<j+1<<"\t";
        s<<_listaParadas.data()[j].toString();
    }
    s<<"Codigo de ruta de Tren: "<<Lineas::getCodigo()<<"\n";
    s<<"Nombre de la ruta de Tren: "<<Lineas::getNombre()<<"\n";
    s<<"\n";
    for(int i=0;i<_listaTren.size();i++){
        s<<_listaTren.data()[i].toString();
    }
    s<<"\n";
    for(int j=0;j<_listaParadas.size();j++){
        s<<j+1<<"  ";
        s<<"\t"<<_listaParadas.data()[j].toString();
    }
    for(int k=0;k<_listaHora.size();k++){
        s<<k+1<<"  "<<"Hora de Servicio Tren y Bus:"<<"\n";
        s<<"\t"<<_listaHora.data()[k].toString();
    }
    return s.str();

}