//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_BUS_H
#define BASIC_00_EXAMPLE_BUS_H



#include "Vehiculo.h"

class Bus : public Vehiculo {

public:
    Bus();
    Bus(std::string);
    Bus(std::string,std::string,Conductor*,Pasajero*,Ruta*,std::string);

    virtual ~Bus();

    const std::string getTipo() const;

    void setTipo(const std::string);

    virtual std::string toString();
private:

    std::string _tipo;
};


#endif //BASIC_00_EXAMPLE_BUS_H
