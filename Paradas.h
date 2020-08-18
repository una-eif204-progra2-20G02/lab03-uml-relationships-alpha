//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_PARADAS_H
#define BASIC_00_EXAMPLE_PARADAS_H
#include <iostream>
#include <string>
#include <sstream>


class Paradas{
public:
    Paradas();
    Paradas(std::string);
    virtual ~Paradas();

    virtual std::string getLugar() const;

    virtual void setLugar(const std::string);

    virtual std::string toString() const;

private:
    std::string _lugar;
};

#endif //BASIC_00_EXAMPLE_PARADAS_H
