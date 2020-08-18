//
// Created by dell on 17/8/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_RUTA_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_RUTA_H
#include <vector>
#include "Horario.h"
#include "Paradas.h"
class Horario;
class Parada;
class Ruta{


public:
    Ruta();
    Ruta(Horario*, Parada*);
    virtual ~Ruta();
//gets
    virtual Horario* getHorario()const ;
    virtual Parada* getParada()const;
//sets
    virtual void setHorario( Horario*);
    virtual void setParada(Parada*);
//adds
    virtual void addHorario(Horario*);
    virtual void addParada(Paradas*);
 //string
 std:: string toString();
 //
private:
    Horario* _horario;
    Parada* _paradas;
    std::vector<Paradas> _listaParadas;
    std::vector<Horario> _listaHorario;
};


#endif //LAB03_UML_RELATIONSHIPS_ALPHA_RUTA_H
