


#include "Vehiculo.h"
#include "Tren.h"
#include "Bus.h"

int main(int argc, char** argv) {
//pasajeros
    //tren
    Pasajero* _p0=new Pasajero("Esteban", "Martinez","1-2464-3456",300);
    Pasajero* _p1=new Pasajero("Marco", "Polo","4-2567-6754",300);
    Pasajero* _p2=new Pasajero("Tulio", "Ciceron","1-7643-5436",300);
    Pasajero* _p3=new Pasajero("Roberto", "Martin","1-7675-4356",300);

    //Bus
    Pasajero* _p4=new Pasajero("Ronaldo", "Gonzalez","2-212-4356",300);
    Pasajero* _p5=new Pasajero("Messi", "Lopez","1-5457-4356",300);
    Pasajero* _p6=new Pasajero("Alberto", "Spinetta","7-999-632",300);
    Pasajero* _p7=new Pasajero("Charly", "Chargua","4-888-4356",300);
    Pasajero* _p8=new Pasajero("Sui", "Generis","6-657-8833",300);



 //conductores
    //tren
    Conductor* _c0=new Conductor("Arturo","Sanez","1-2134-3235", 230000);
    Conductor* _c1=new Conductor("Ivan","El Terrible","1-2134-3235", 230000);

    //bus
    Conductor* _c2=new Conductor("Juan","Caballon","5-2444-5544", 230000);
    Conductor* _c3=new Conductor("Ivan","El Terrible","3-332-8877", 230000);


//horarios
    //tren
    Horario* _h0= new Horario("6:00AM","5:00AM");
    Horario* _h1= new Horario("7:00AM","6:00AM");
    Horario* _h2= new Horario("8:00AM","7:00AM");
    Horario* _h3= new Horario("9:00AM","8:00AM");
    Horario* _h4= new Horario("10:00AM","9:00AM");
    Horario* _h5= new Horario("11:00AM","10:00AM");
    Horario* _h6= new Horario("12:00AM","11:00MD");
    Horario* _h7= new Horario("1:00PM","12:00MD");
    Horario* _h8= new Horario("2:00PM","1:00PM");
    Horario* _h9= new Horario("3:00PM","2:00PM");
    Horario* _h10= new Horario("4:00PM","3:00PM");
    Horario* _h11= new Horario("5:00PM","4:00PM");


//paradas
    //tren
    Paradas* _para0= new Paradas("Pavas");
    Paradas* _para1= new Paradas("Mc Donald's");
    Paradas* _para2= new Paradas("Estadio");
    Paradas* _para3= new Paradas("San Jose");

    //bus
    Paradas* _para4= new Paradas("San Jose");
    Paradas* _para5= new Paradas("Burger King");
    Paradas* _para6= new Paradas("La Sabana");
    Paradas* _para7= new Paradas("Hospital de Ninos");

//rutas
    //tren
    Ruta* _ruta0= new Ruta();
    _ruta0->addHorario(_h0);
    _ruta0->addHorario(_h1);
    _ruta0->addHorario(_h2);
    _ruta0->addHorario(_h3);
    _ruta0->addHorario(_h4);
    _ruta0->addHorario(_h5);
    _ruta0->addHorario(_h6);
    _ruta0->addHorario(_h7);
    _ruta0->addHorario(_h8);
    _ruta0->addHorario(_h9);
    _ruta0->addHorario(_h10);
    _ruta0->addHorario(_h11);

    _ruta0->addParada(_para0);
    _ruta0->addParada(_para1);
    _ruta0->addParada(_para2);
    _ruta0->addParada(_para3);

    //bus
    Ruta* _ruta1= new Ruta();
    _ruta1->addHorario(_h0);
    _ruta1->addHorario(_h1);
    _ruta1->addHorario(_h2);
    _ruta1->addHorario(_h3);
    _ruta1->addHorario(_h4);
    _ruta1->addHorario(_h5);
    _ruta1->addHorario(_h6);
    _ruta1->addHorario(_h7);
    _ruta1->addHorario(_h8);
    _ruta1->addHorario(_h9);
    _ruta1->addHorario(_h10);
    _ruta1->addHorario(_h11);

    _ruta1->addParada(_para4);
    _ruta1->addParada(_para5);
    _ruta1->addParada(_para6);
    _ruta1->addParada(_para7);

//vehiculo

    //tren

    Tren* _tren0= new Tren("Tren","Komatzu","T-093", _ruta0);
      _tren0->addPasajeros(_p0);
      _tren0->addPasajeros(_p1);
      _tren0->addPasajeros(_p2);
      _tren0->addPasajeros(_p3);
      _tren0->addConductores(_c0);
      _tren0->addConductores(_c1);
      std::cout<<_tren0->toString()<<"\n";

     //Bus
     Bus* _bus0= new Bus("Bus","Toyota","33230",_ruta1);
     _bus0->addPasajeros(_p4);
     _bus0->addPasajeros(_p5);
     _bus0->addPasajeros(_p6);
     _bus0->addPasajeros(_p7);
     _bus0->addPasajeros(_p8);

     _bus0->addConductores(_c2);
     _bus0->addConductores(_c3);

    std::cout<<_bus0->toString()<<"\n";


    return 0;
}

