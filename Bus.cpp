//
// Created by computer on 8/12/2020.
//

#include "Bus.h"
Bus::Bus() {
    _tipo = "";
}
Bus::Bus(string tipo) : Vehiculo(){
    _tipo = tipo;
}
Bus::~Bus() {

}

const string &Bus::getTipo() const {
    return _tipo;
}

void Bus::setTipo(const string &tipo) {
    _tipo = tipo;
}
string Bus::toString() {
    stringstream s;
    s<<Vehiculo::toString()<<endl;
    s<<"Tipo: "<<getTipo()<<endl;
    return s.str();
}

