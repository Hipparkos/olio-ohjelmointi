#include <iostream>
using namespace std;
#include "kerrostalo.h"


Kerrostalo::Kerrostalo(){
    cout << "Kerrostalo luotu" << endl;
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();

    eka -> maaritaAsunnot();
    toka -> maaritaAsunnot();
    kolmas -> maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta){
    return eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
}

Kerrostalo::~Kerrostalo(){
    delete eka;
    delete toka;
    delete kolmas;
}
