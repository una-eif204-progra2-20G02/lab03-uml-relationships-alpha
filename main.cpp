//
// Created by computer on 8/12/2020.
//


#include "Vehiculo.h"
#include "Tren.h"
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {
    Horario* h1 = new Horario("22:00 pm","22:10 pm");
    Paradas* par1 = new Paradas("Hospital");
    Conductor* c1 = new Conductor("adolfo","avila","402440766",1000000);
    Pasajero* p1 = new Pasajero("adolfo","avila","402440766",290);
    Ruta* r1 = new Ruta(h1,par1);
    Tren* t1 = new Tren("bala","marcedez","AED505",p1,c1,r1);
    t1->addConductores(c1);
    t1->addPasajeros(p1);
    cout<<t1->toString();
      return 0;
}

