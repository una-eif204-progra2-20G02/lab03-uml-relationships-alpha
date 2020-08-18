//
// Created by computer on 8/12/2020.
//

#ifndef BASIC_00_EXAMPLE_PERSONA_H
#define BASIC_00_EXAMPLE_PERSONA_H
#include <iostream>
#include <sstream>
#include <string>
class Persona {
public:
    Persona();
    Persona(std::string, std::string, std::string);
    virtual ~Persona();

    virtual std::string getNombre()const;
    virtual std::string getApellido() const;
    virtual std::string getCedula() const;

    virtual void setNombre (const std::string);
    virtual void setApellido (const std::string);
    virtual void setCedula (const std::string);

    virtual std::string toString()const;


private:
    std::string _nombre;
    std::string _apellido;
    std::string _cedula;
};

#endif //BASIC_00_EXAMPLE_PERSONA_H
