//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_BUS_H
#define BASIC_00_EXAMPLE_BUS_H



#include "Vehiculo.h"

class Bus : public Vehiculo {

public:
    //Builders
    Bus();
    Bus(std::string, std::string, std::string, Ruta*);
    Bus(std::string,std::string,Conductor*,Pasajero*,Ruta*,std::string);
//Destructor
    virtual ~Bus();
//get method
    std::string getTipo() const;
//set Method
    void setTipo(const std::string);
    //add methods
    virtual void addConductores(Conductor*);
    virtual void addPasajeros(Pasajero*);
//toString method
    virtual std::string toString();
private:
//Atribute
    std::string _tipo;
    std::vector<Conductor> _listaConductores;
    std::vector<Pasajero> _listaPasajeros;
};


#endif //BASIC_00_EXAMPLE_BUS_H
