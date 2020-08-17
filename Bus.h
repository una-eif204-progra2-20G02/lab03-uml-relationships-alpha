//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_BUS_H
#define BASIC_00_EXAMPLE_BUS_H



#include "Vehiculo.h"
using namespace std;
class Bus : public Vehiculo {
private:

    string _tipo;
public:
    Bus();
    Bus(string tipo);
    Bus(string,string,Conductor*,Pasajero*,Ruta*,string);

    virtual ~Bus();

    const string &getTipo() const;

    void setTipo(const string &tipo);

    virtual string toString();

};


#endif //BASIC_00_EXAMPLE_BUS_H
