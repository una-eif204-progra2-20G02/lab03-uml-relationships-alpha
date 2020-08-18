//
// Created by dell on 17/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_RUTA_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_RUTA_H

#include "Horario.h"
#include "Paradas.h"
using namespace std;
class Ruta{

private:
    Horario* _horario;
    Paradas* _paradas;
    vector<Paradas> _listaParadas;
    vector<Horario> _listaHorario;
public:
    Ruta();
    Ruta(Horario*, Paradas*);
    virtual ~Ruta();
//gets
    virtual Horario* getHorario();
    virtual Paradas* getParada();
//sets
    virtual void setHorario(Horario*);
    virtual void setParada(Paradas*);
//adds
    virtual void addHorario(Horario*);
    virtual void addParada(Paradas*);
 //string
 std:: string toString();
 //
};


#endif //LAB03_UML_RELATIONSHIPS_ALPHA_RUTA_H
