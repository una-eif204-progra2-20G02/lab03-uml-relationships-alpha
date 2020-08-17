//
// Created by Pc on 17/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_VEHICULO_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_VEHICULO_H
#include <iostream>
#include <vector>
#include "Conductor.h"
#include "Pasajero.h"
#include "Ruta.h"
using namespace std;
class Vehiculo{
private:
string _marca;
string _placa;
Conductor* _conductor;
Pasajero* _pasajero;
Ruta* _ruta;
vector<Conductor> _vC;
vector<Pasajero> _vP;
public:
    Vehiculo();
    Vehiculo(string,string,Conductor*,Pasajero*,Ruta*);
    virtual ~Vehiculo();
    const string &getPlaca() const;
    const string &getMarca() const;
    Conductor *getConductor() const;
    Pasajero *getPasajero() const;
    Ruta *getRuta() const;
    void setMarca(const string &marca);
    void setPlaca(const string &placa);
    void setConductor(Conductor *conductor);
    void setPasajero(Pasajero *pasajero);
    void setRuta(Ruta *ruta);
    void addConductores(Conductor*);
    void addPasajeros(Pasajero*);
    virtual string toString();
};
#endif //LAB03_UML_RELATIONSHIPS_ALPHA_VEHICULO_H
