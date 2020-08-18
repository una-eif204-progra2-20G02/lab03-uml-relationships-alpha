


#include "Vehiculo.h"
#include "Tren.h"
#include "Bus.h"

int main(int argc, char** argv) {
//pasajeros
    Persona* _p0=new Pasajero("Esteban", "Martinez","1-2464-3456",300);
    Persona* _p1=new Pasajero("Marco", "Polo","4-2567-6754",300);
    Persona* _p2=new Pasajero("Tulio", "Ciceron","1-6743-5436",300);
    Persona* _p3=new Pasajero("Roberto", "Martin","1-4545-4356",300);
 //conductores
    Persona* _c0=new Conductor("Arturo","Sanez","1-2134-3235", 230000);
    Persona* _c1=new Conductor("Ivan","El Terrible","1-2134-3235", 230000);
//horarios
    Horario* _h0= new Horario("7:00PM","6:00PM");
    Horario* _h1= new Horario("7:00PM","6:00PM");
//paradas
    Paradas* _para0= new Paradas("Desamparados");
    Paradas* _para1= new Paradas("La Coca Cola");
//rutas
    Ruta* _ruta0= new Ruta(_h0, _para0);
    _ruta0->addHorario(_h0);
    _ruta0->addParada(_para0);
    Ruta* _ruta1= new Ruta(_h1, _para1);
//vehiculo
    Pasajero* a=new Pasajero("Tulio", "Ciceron","1-6743-5436",300);
    Conductor* b=new Conductor("Roberto", "Martin","1-4545-4356",300);

    Vehiculo* tren= new Tren("1", "BMW","212", a, b, _ruta0);
    tren->addConductores(b);
    tren->addPasajeros(a);
    cout<< tren->toString();

    return 0;
}

