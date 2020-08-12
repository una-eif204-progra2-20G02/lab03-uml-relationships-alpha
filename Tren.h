//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_TREN_H
#define BASIC_00_EXAMPLE_TREN_H

#include <vector>

#include "Conductor.h"
#include "Tiquete.h"

class Tiquete;
class Conductores;
class Tren {
public:
    Tren();
    Tren(std::string, std::string);
    Tren(std::string, std::string,Tiquete*, Conductor*);
    virtual ~Tren();

    virtual std::string getMarca()const;
    virtual std::string getPlaca()const;
    virtual Conductor* getConductor()const;
    virtual Tiquete* getTiquete() const;


    virtual void setMarca(std::string);
    virtual void setPlaca(std::string);
    virtual void setConductor(Conductor*);
    virtual void setTiquete(Tiquete*);

    virtual void addConductor(Conductor*);
    virtual void addTiquete(Tiquete*);

    std::string toString() const;

private:
    std::string _marca;
    std::string _placa;
    Conductor* _conductor;
    Tiquete* _tiquete;
    std::vector<Conductor> _listaConductor;
    std::vector<Tiquete> _listaTiquete;

};
#endif //BASIC_00_EXAMPLE_TREN_H
