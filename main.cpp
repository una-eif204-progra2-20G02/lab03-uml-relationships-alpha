//
// Created by computer on 8/12/2020.
//


#include "Lineas.h"
using namespace std;

/*
 *
 */
int main(int argc, char** argv) {

    Hora * _h0=new Hora("7:00 AM");
    Hora * _h1=new Hora("8:00 AM");
    Hora * _h2=new Hora("9:00A AM");
    Hora * _h3=new Hora("10:00 AM");
    Hora * _h4=new Hora("11:00 AM");
    Hora * _h5=new Hora("12:00 MD");
    Hora * _h6=new Hora("1:00 PM");
    Hora * _h7=new Hora("2:00 PM");
    Hora * _h8=new Hora("3:00 PM");
    Hora * _h9=new Hora("4:00 PM");
    Hora * _h10=new Hora("5:00 PM");

    Conductor* _con0=new Conductor("Mauricio", "Noriega", "1-209-8769",300000);
    Conductor* _con1=new Conductor("Salomon", "Mayorga", "4-2345-7654",365000);
    Conductor* _con2=new Conductor("Eladio", "Cruz", "1-9876-8765",370000);

    Pasajero* _p0=new Pasajero("Roberto", "Carlo", "4-5675-6787");
    Pasajero* _p1=new Pasajero("Marco", "Polo", "1-567-3457");
    Pasajero* _p2=new Pasajero("Maracarandal", "Mileno", "5-9878-9876");
    Pasajero* _p3=new Pasajero("Pedro", "Santos", "6-8689-8679");
    Pasajero* _p4=new Pasajero("Alonzo", "Olivares", "4-3383-7885");
    Pasajero* _p5=new Pasajero("Carlos", "Andares", "1-2345-2445");

    Asientos* _a0=new Asientos("234 D",_p0);
    Asientos* _a1=new Asientos("231 A",_p5);
    Asientos* _a2=new Asientos("354 F",_p1);
    Asientos* _a3=new Asientos("345 G",_p3);
    Asientos* _a4=new Asientos("234 H",_p2);

    Asientos* _a5=new Asientos("214 A",_p4);
    Asientos* _a6=new Asientos("235 R",_p5);
    Asientos* _a7=new Asientos("245 D",_p4);
    Asientos* _a8=new Asientos("125 R",_p3);
    Asientos* _a9=new Asientos("456 A",_p2);
    Asientos* _a10=new Asientos("235 A",_p1);

    Tiquete* _t0=new Tiquete(3000,_a0);
    Tiquete* _t1=new Tiquete(3000,_a1);
    Tiquete* _t2=new Tiquete(3000,_a2);
    Tiquete* _t3=new Tiquete(3000,_a3);
    Tiquete* _t4=new Tiquete(3000,_a4);

    Tiquete* _t5=new Tiquete(2800,_a5);
    Tiquete* _t6=new Tiquete(2800,_a6);
    Tiquete* _t7=new Tiquete(2800,_a7);
    Tiquete* _t8=new Tiquete(2850,_a9);
    Tiquete* _t9=new Tiquete(2800,_a8);
    Tiquete* _t10=new Tiquete(2800,_a10);


    Bus* _bus0=new Bus("Kia", "CL-2345");

    _bus0->addTiquete(_t0);
    _bus0->addTiquete(_t1);
    _bus0->addTiquete(_t2);
    _bus0->addTiquete(_t3);
    _bus0->addTiquete(_t4);

    _bus0->addConductor(_con0);
    _bus0->addConductor(_con1);

    Tren* _tren0=new Tren("Koatzu", "TL-3445");

    _t0->setCostoTiquete(750);
    _tren0->addTiquete(_t0);
    _t1->setCostoTiquete(750);
    _tren0->addTiquete(_t1);
    _t2->setCostoTiquete(750);
    _tren0->addTiquete(_t2);
    _t3->setCostoTiquete(750);
    _tren0->addTiquete(_t3);
    _t4->setCostoTiquete(750);
    _tren0->addTiquete(_t4);
    _con0->setNombre("Marco");
    _con0->setApellido("Marconni");
    _con0->setCedula("1-0097-5467");
    _con0->setSalario(765890);
    _tren0->addConductor(_con0);
    _con1->setNombre("Geiner");
    _con1->setApellido("Navarro");
    _con1->setCedula("5-3223-1892");
    _con1->setSalario(900000);
    _tren0->addConductor(_con1);

    Lineas* _line0=new Lineas("AS-345", "La_Florencia-Tibas");

    _line0->addTren(_tren0);
    _line0->addBus(_bus0);
    _line0->addHora(_h0);
    _line0->addHora(_h1);
    _line0->addHora(_h2);
    _line0->addHora(_h3);
    _line0->addHora(_h4);
    _line0->addHora(_h5);
    _line0->addHora(_h6);
    _line0->addHora(_h7);
    _line0->addHora(_h8);
    _line0->addHora(_h9);
    _line0->addHora(_h10);

    Paradas* _pt0=new Paradas("Santo_Domingo");
    Paradas* _pt1=new Paradas("Llorente");
    Paradas* _pt2=new Paradas("Tibas_Centro");

    _line0->addParada(_pt0);
    _line0->addParada(_pt1);
    _line0->addParada(_pt2);


    std::cout<<"Ruta Nacional #2345:"<<"\n"<<"\n"<<_line0->toString()<<"\n";

    Bus* _bus1=new Bus("Toyota", "CL-5467");

    _bus1->addTiquete(_t5);
    _bus1->addTiquete(_t6);
    _bus1->addTiquete(_t7);
    _bus1->addTiquete(_t8);
    _bus1->addTiquete(_t9);
    _bus1->addTiquete(_t10);

    _bus1->addConductor(_con0);
    _bus1->addConductor(_con2);


    Tren* _tren1=new Tren("Nissan", "TL-7643");
    _t5->setCostoTiquete(900);
    _tren1->addTiquete(_t5);
    _t6->setCostoTiquete(900);
    _tren1->addTiquete(_t6);
    _t7->setCostoTiquete(900);
    _tren1->addTiquete(_t7);
    _t8->setCostoTiquete(900);
    _tren1->addTiquete(_t8);
    _t9->setCostoTiquete(900);
    _tren1->addTiquete(_t9);

    _tren1->addConductor(_con2);
    _tren1->addConductor(_con0);

    Lineas* _line1=new Lineas("AF-345", "Heredia-San_Jose");

    _line1->addBus(_bus1);
    _line1->addTren(_tren1);
    _line1->addHora(_h0);
    _line1->addHora(_h1);
    _line1->addHora(_h2);
    _line1->addHora(_h3);
    _line1->addHora(_h4);
    _line1->addHora(_h5);
    _line1->addHora(_h6);
    _line1->addHora(_h7);
    _line1->addHora(_h8);
    _line1->addHora(_h9);
    _line1->addHora(_h10);

    Paradas* _pt3=new Paradas("Santa_Ana");
    Paradas* _pt4=new Paradas("Pavas");
    Paradas* _pt5=new Paradas("Uruca");








    _line1->addParada(_pt3);
    _line1->addParada(_pt4);
    _line1->addParada(_pt5);

    std::cout<<"Ruta Nacional #2345:"<<"\n"<<"\n"<<_line1->toString()<<"\n";

    delete _con0;
    delete _con1;
    delete _con2;

    delete _pt0;
    delete _pt1;
    delete _pt2;
    delete _pt3;
    delete _pt4;
    delete _pt5;

    delete _p0;
    delete _p1;
    delete _p2;
    delete _p3;
    delete _p4;
    delete _p5;

    delete _a0;
    delete _a1;
    delete _a2;
    delete _a3;
    delete _a4;
    delete _a5;
    delete _a6;
    delete _a7;
    delete _a8;
    delete _a9;
    delete _a10;

    delete _t0;
    delete _t1;
    delete _t2;
    delete _t3;
    delete _t4;
    delete _t5;
    delete _t6;
    delete _t7;
    delete _t8;
    delete _t9;
    delete _t10;

    delete _bus0;
    delete _bus1;

    delete _line0;
    delete _line1;

    return 0;
}

