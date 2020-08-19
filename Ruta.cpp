//
// Created by dell on 17/8/2020.
//

#include "Ruta.h"

Ruta::Ruta(){

}
Ruta::Ruta(Horario* horario, Paradas* parada){
    _horario=horario;
    _paradas=parada;
}
Ruta:: ~Ruta(){
_listaHorario.clear();
delete _paradas;
delete _horario;
}
//gets
 Horario* Ruta::getHorario()const {
    return _horario;
}
 Paradas* Ruta::getParada()const {
    return _paradas;
}
//sets

 void Ruta::setHorario(Horario* horario){_horario=horario;}
 void Ruta::setParada( Paradas* parada){_paradas=parada;}
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
    s<<"Horario: "<<"\n";
    for(int i=0;i<_listaHorario.size();i++) {//For type cycle from 0 to Pasajero's size.
        s << _listaHorario.data()[i].toString() << "\n";//Shows data contained in the collection.

    }
    s<<"Paradas: "<<"\n";
    for(int i=0;i<_listaParadas.size();i++) {//For type cycle from 0 to Pasajero's size.
        s << _listaParadas.data()[i].toString() << "\n";//Shows data contained in the collection.

    }
    return s.str();
}