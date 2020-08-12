//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_TIQUETE_H
#define BASIC_00_EXAMPLE_TIQUETE_H

#include "Asientos.h"
class Asiento;
class Tiquete{
public:
    Tiquete();
    Tiquete(double, Asientos*);
    virtual ~Tiquete();

    virtual double getCostoTiquete()const;
    virtual Asientos* getAsiento() const;


    virtual void setCostoTiquete(double);
    virtual void setAsiento(Asientos*);


    virtual std::string toString() const;

private:
    double _costoTiquete;
    Asientos* _asiento;

};


#endif //BASIC_00_EXAMPLE_TIQUETE_H
