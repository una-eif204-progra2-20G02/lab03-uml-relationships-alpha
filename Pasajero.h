//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_PASAJERO_H
#define BASIC_00_EXAMPLE_PASAJERO_H

#include "Persona.h"
class Pasajero: public Persona {
public:
    Pasajero();
    Pasajero(std::string, std::string, std::string);
    Pasajero(const Pasajero& orig);
    virtual ~Pasajero();

    virtual std::string toString()const;

private:

};

#endif //BASIC_00_EXAMPLE_PASAJERO_H
