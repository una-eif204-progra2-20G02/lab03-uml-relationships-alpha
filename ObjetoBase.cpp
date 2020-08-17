//
// Created by computer on 8/17/2020.
//

#include "ObjetoBase.h"

ObjetoBase::~ObjetoBase() {

}

std::ostream& operator<<(std::ostream& out, const ObjetoBase& Obj){
    out<<Obj.toString();
    return out;
}