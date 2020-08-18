//
// Created by Pc on 17/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_VEHICULO_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_VEHICULO_H
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include "Conductor.h"
#include "Pasajero.h"
#include "Ruta.h"

class Vehiculo{

public:
    Vehiculo();
    Vehiculo(std::string, std::string);
    Vehiculo(std::string,std::string,Conductor*,Pasajero*,Ruta*);
    virtual ~Vehiculo();

    std::string getPlaca() const;
    std::string getMarca() const;
    Conductor* getConductor() const;
    Pasajero* getPasajero() const;
    Ruta* getRuta() const;

    void setMarca(const std::string);
    void setPlaca(const std::string);
    void setConductor(Conductor*);
    void setPasajero(Pasajero*);
    void setRuta(Ruta*);

    void addConductores(Conductor*);
    void addPasajeros(Pasajero*);

    virtual std::string toString()const;
private:
    std::string _marca;
    std::string _placa;
    Conductor* _conductor;
    Pasajero* _pasajero;
    Ruta* _ruta;
    std::vector<Conductor> _listaConductores;
    std::vector<Pasajero> _listaPasajeros;
};
#endif //LAB03_UML_RELATIONSHIPS_ALPHA_VEHICULO_H
