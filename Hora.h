//
// Created by computer on 8/12/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_HORA_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_HORA_H
#include "TransportePublico.h"
class Hora:public TransportePublico {
public:
    Hora();
    Hora(std::string);
    virtual ~Hora();

    std::string getHora()const;

    void setHora(std::string);

    std::string toString() const;

private:
    std::string _hora;
};
#endif //LAB03_UML_RELATIONSHIPS_ALPHA_HORA_H
