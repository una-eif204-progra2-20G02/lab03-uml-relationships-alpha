//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_TREN_H
#define BASIC_00_EXAMPLE_TREN_H

#include <vector>

#include "Conductor.h"
#include "Pasajero.h"
//#include "Ruta.h"

class Tren {
public:
    Tren();
    Tren(std::string,std::string, std::string); //tipo, marca,placa
    Tren(std::string, std::string, std::string,Pasajero*, Conductor* /*,Ruta*\*/);
    virtual ~Tren();

    virtual std::string getMarca()const;
    virtual std::string getPlaca()const;
    virtual std::string getTipo()const;
    virtual Conductor* getConductor()const;
    virtual Pasajero* getPasajero() const;
    //virtual Ruta* getRuta() const;


    virtual void setMarca(std::string);
    virtual void setPlaca(std::string);
    virtual void setTipo(std::string);
    virtual void setConductor(Conductor*);
    virtual void setPasajero(Pasajero*);
    //virtual void setRuta(Ruta*);

    virtual void addConductor(Conductor*);
    virtual void addPasajero(Pasajero*);
    //virtual void addRuta(Ruta*);

    std::string toString() const;

private:
    std::string _tipo;
    std::string _marca;
    std::string _placa;
    Conductor* _conductor;
    Pasajero* _pasajero;
    //Ruta* _ruta;
    //std::vector<Ruta> _listaRutas;
    std::vector<Conductor> _listaConductor;
    std::vector<Pasajero> _listaPasajero;

};
#endif //BASIC_00_EXAMPLE_TREN_H
