//
// Created by computer on 8/12/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_HORARIO_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_HORARIO_H
#include "ObjetoBase.h"
class Horario:public ObjetoBase {
public:
    Horario();
    Horario(std::string,std::string);
    virtual ~Horario();

    std::string getLlegada()const;
    std::string getSalida()const;

    void setLlegada( std::string);
    void setSalida( std::string) ;

    std::string toString() const;

private:
    std::string _llegada;
    std::string _salida;
};
#endif //LAB03_UML_RELATIONSHIPS_ALPHA_HORARIO  _H
