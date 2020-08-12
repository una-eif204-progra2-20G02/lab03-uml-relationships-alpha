//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_ASIENTOS_H
#define BASIC_00_EXAMPLE_ASIENTOS_H

#include "Pasajero.h"
class Pasajero;
class Asientos {
public:
    Asientos();
    Asientos(std::string);
    Asientos(std::string, Pasajero*);
    virtual ~Asientos();

    virtual std::string getCodigo() const;
    virtual Pasajero* getPasajero()const;


    virtual void setCodigo(std::string);
    virtual void setPasajero(Pasajero*);


    virtual std::string toString() const;


private:
    std::string _codigo;
    Pasajero* _pasajero;
};
#endif //BASIC_00_EXAMPLE_ASIENTOS_H
