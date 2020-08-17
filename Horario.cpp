/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Hora.cpp
 * Author: computer
 *
 * Created on August 12, 2020, 5:09 PM
 */

#include "Horario.h"

Horario::Horario() {
    _llegada="";
    _salida="";
}

Horario::Horario(std::string llegada, std::string salida) {
    _llegada=llegada;
    _salida=salida;
}

Horario::~Horario() {
}

std::string Horario::getLlegada() const {
    return _llegada;
}
std::string Horario::getSalida() const {
    return _salida;
}

void Horario::setLlegada(std::string llegada) {
    _llegada =llegada;
}
void Horario::setSalida(std::string salida) {
    _salida=salida;
}

std::string Horario::toString() const{
    std::stringstream s;
    s<<"La hora de salida es:  "<<Horario::getSalida()<<"\n";
    s<<"La hora de llegada es: "<<Horario::getLlegada()<<"\n";
    return s.str();
}