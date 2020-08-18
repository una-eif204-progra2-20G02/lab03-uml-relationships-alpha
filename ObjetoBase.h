//
// Created by computer on 8/17/2020.
//

#ifndef LAB03_UML_RELATIONSHIPS_ALPHA_OBJETOBASE_H
#define LAB03_UML_RELATIONSHIPS_ALPHA_OBJETOBASE_H
#include <iostream>
#include <sstream>
#include <string>

struct ObjetoBase {
~ObjetoBase();
virtual std::string toString()const = 0;

};

std::ostream& operator<<(std::ostream&,const ObjetoBase&);

#endif //LAB03_UML_RELATIONSHIPS_ALPHA_OBJETOBASE_H
