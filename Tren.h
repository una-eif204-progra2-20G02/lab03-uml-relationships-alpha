//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_TREN_H
#define BASIC_00_EXAMPLE_TREN_H

#include "Vehiculo.h"
using namespace std;

class Tren:public Vehiculo {

public:

    Tren();
    Tren(std::string, std::string, std::string, Ruta*); //tipo, marca,placa
    Tren(std::string, std::string, std::string,Pasajero*, Conductor* ,Ruta*);
    virtual ~Tren();

//gets sets
    virtual std::string getTipo()const;
    virtual void setTipo(std::string);
//add methods
    virtual void addConductores(Conductor*);
    virtual void addPasajeros(Pasajero*);
//tostring
    std::string toString() const;

private:
    std::string _tipo;
    std::vector<Conductor> _listaConductores;
    std::vector<Pasajero> _listaPasajeros;

};
#endif //BASIC_00_EXAMPLE_TREN_H
