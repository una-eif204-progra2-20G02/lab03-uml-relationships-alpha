//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_LINEAS_H
#define BASIC_00_EXAMPLE_LINEAS_H
#include "Bus.h"
#include "Tren.h"
#include "Paradas.h"
class Lineas {
public:
    Lineas();
    Lineas(std::string, std::string);
    Lineas(std::string, std::string,Bus*,Tren*, Paradas*);
    virtual ~Lineas();

    virtual std::string getCodigo() const;
    virtual std::string getNombre() const;
    virtual Bus* getBus() const;
    virtual Tren* getTren() const;
    virtual Paradas* getParadas() const;

    virtual void setCodigo(std::string);
    virtual void setNombre(std::string);
    virtual void setBus(Bus*);
    virtual void setTren(Tren*);
    virtual void setParadas(Paradas*);

    virtual void addBus(Bus*);
    virtual void addParada(Paradas*);
    virtual void addTren(Tren*);

    virtual std::string toString() const;

private:
    std::string _codigo;
    std::string _nombre;
    Bus* _bus;
    Tren* _tren;
    Paradas* _paradas;
    std::vector<Bus> _listaBus;
    std::vector<Paradas> _listaParadas;
    std::vector<Tren> _listaTren;
};

#endif //BASIC_00_EXAMPLE_LINEAS_H
