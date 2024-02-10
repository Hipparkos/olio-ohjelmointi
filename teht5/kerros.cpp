#include <iostream>
using namespace std;
#include "kerros.h"


Kerros::Kerros(){
    cout << "Kerros luotu" << endl;
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
}

void Kerros::maaritaAsunnot(){
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    int asukasMaara = 2;
    int neliot = 100;


    as1->maarita(&asukasMaara, &neliot);
    as2->maarita(&asukasMaara, &neliot);
    as3->maarita(&asukasMaara, &neliot);
    as4->maarita(&asukasMaara, &neliot);
}

double Kerros::laskeKulutus(double hinta){
    return Katutaso::laskeKulutus(hinta) + as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
}

Kerros::~Kerros(){
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}
