//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_TRANSPORTEPUBLICO_H
#define BASIC_00_EXAMPLE_TRANSPORTEPUBLICO_H

#include <sstream>
#include <string>
#include <iostream>


class TransportePublico {
public:
    virtual ~TransportePublico();
    virtual std::string toString()const=0;
private:

};


#endif //BASIC_00_EXAMPLE_TRANSPORTEPUBLICO_H
