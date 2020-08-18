//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_PASAJERO_H
#define BASIC_00_EXAMPLE_PASAJERO_H

#include "Persona.h"
class Pasajero: public Persona {
public:
    Pasajero();
    Pasajero(std::string, std::string, std::string, double);
    virtual ~Pasajero();

    virtual double getPasaje()const;

    virtual void setPasaje(double);

    virtual std::string toString()const;
private:
    double _pasaje;

private:

};

#endif //BASIC_00_EXAMPLE_PASAJERO_H
