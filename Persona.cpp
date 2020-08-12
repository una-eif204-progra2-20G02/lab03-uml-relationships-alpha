//
// Created by computer on 8/12/2020.
//

#include "Persona.h"

Persona::Persona():
        _nombre(""),
        _apellido(""),
        _cedula("")
{
}

Persona::Persona(std::string nombre, std::string apellido, std::string cedula)
{
    _nombre=nombre;
    _apellido=apellido;
    _cedula=cedula;
}

Persona::~Persona() {
}

std::string Persona::getNombre() const{
    return _nombre;
}

std::string Persona::getApellido() const{
    return _apellido;
}

std::string Persona::getCedula() const{
    return _cedula;
}

void Persona::setNombre(std::string nombre){
    _nombre=nombre;
}

void Persona::setApellido(std::string apellido){
    _apellido=apellido;
}
void Persona::setCedula(std::string cedula){
    _cedula=cedula;
}
std::string Persona::toString() const{
    std::stringstream s;
    s<<"Nombre: "<<Persona::getNombre()<<"\n";
    s<<"Apellido: "<<Persona::getApellido()<<"\n";
    s<<"Cedula: "<<Persona::getCedula()<<"\n";
    return s.str();
}