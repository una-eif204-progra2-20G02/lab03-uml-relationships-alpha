//
// Created by dell on 17/8/2020.
//

#include "Ruta.h"

Ruta::Ruta(){
    _horario=NULL;
    _paradas=NULL;
}
Ruta::Ruta(Horario* horario, Paradas* parada){
    _horario=horario;
    _paradas=parada;
}
Ruta:: ~Ruta(){
    if(_horario!=NULL){
        delete _horario;
    }
    if(_paradas!=NULL){
        delete _paradas;
    }
}
//gets
 Horario* Ruta::getHorario(){return _horario;}
 Paradas* Ruta::getParada(){return _paradas;}
//sets

 void Ruta::setHorario(Horario* horario){_horario=horario;}
 void Ruta::setParada(Paradas* parada){_paradas=parada;}
//adds
void Ruta::addHorario(Horario* horario){
    _listaHorario.push_back(*horario);
}
void Ruta::addParada(Paradas* parada){
    _listaParadas.push_back(*parada);
}
//string
std:: string Ruta::toString(){
    std::stringstream  s;
    s<<"Horario: "<<getHorario()->toString()<<"\n";
    s<<"Paradas: "<<getParada();

    return s.str();
}