// katutaso.cpp
#include <iostream>
#include "katutaso.h"
using namespace std;

Katutaso::Katutaso(){
    cout << "Katutaso luotu" << endl;
    as1 = new Asunto();
    as2 = new Asunto();

}

void Katutaso::maaritaAsunnot(){
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    int asukasMaara = 2;
    int neliot = 100;
    as1->maarita(&asukasMaara, &neliot);
    as2->maarita(&asukasMaara, &neliot);
}

double Katutaso::laskeKulutus(double hinta){
    return as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta);
}

Katutaso::~Katutaso(){
    delete as1;
    delete as2;
}
