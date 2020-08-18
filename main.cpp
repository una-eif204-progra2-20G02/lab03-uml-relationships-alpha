


#include "Vehiculo.h"
#include "Tren.h"
#include "Bus.h"

int main(int argc, char** argv) {

    Persona* _p0=new Pasajero("Esteban", "Martinez","1-2464-3456",300);
    Persona* _p1=new Pasajero("Marco", "Polo","4-2567-6754",300);
    Persona* _p2=new Pasajero("Tulio", "Ciceron","1-6743-5436",300);
    Persona* _p3=new Pasajero("Roberto", "Martin","1-4545-4356",300);
    Persona* _p4=new Pasajero("Brandon", "Montero","4-5678-7644",400);
    Persona* _p5=new Pasajero("Eripides", "Conepcion","3-3786-0956",400);
    Persona* _p6=new Pasajero("Pedro", "Perez","4-2464-6543",400);
    Persona* _p7=new Pasajero("Augusto", "Pinochet","5-5674-3467",400);

    Persona _c0=new Conductor("Arturo","Sanez","1-2134-3235", 230000);

    return 0;
}

