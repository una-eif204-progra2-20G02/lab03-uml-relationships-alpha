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

#include "Hora.h"

Hora::Hora() {
    _hora="";
}

Hora::Hora(std::string hora) {
    _hora=hora;
}

Hora::~Hora() {
}

std::string Hora::getHora() const{
    return _hora;
}

void Hora::setHora(std::string hora){
    _hora=hora;
}

std::string Hora::toString() const{
    std::stringstream s;
    s<<Hora::getHora()<<"\n";
    return s.str();
}