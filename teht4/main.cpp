#include <iostream>

using namespace std;

#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"
#include "kerrostalo.h"



Asunto::Asunto(){
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int, int){
    asukasMaara = 2;
    neliot = 100;
    cout << "Asunto maaritetty asukkaita " << asukasMaara << " nelioita " << neliot << endl;
}

double Asunto::laskeKulutus(double){
    double kulutus = asukasMaara * neliot;
    return kulutus;
}

Katutaso::Katutaso(){
    cout << "Katutaso luotu" << endl;
}

void Katutaso::maaritaAsunnot(){
    cout << "Maaritetaan 2 kpl katutason asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta){
    return as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta);
}

Kerros::Kerros(){
    cout << "Kerros luotu" << endl;
}

void Kerros::maaritaAsunnot(){
    cout << "Maaritetaan 4 kpl kerroksen asuntoja" << endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta){
    return Katutaso::laskeKulutus(hinta) + as1.laskeKulutus(hinta) + as2.laskeKulutus(hinta) + as3.laskeKulutus(hinta) + as4.laskeKulutus(hinta);
}

Kerrostalo::Kerrostalo(){
    cout << "Kerrostalo luotu" << endl;
}

double Kerrostalo::laskeKulutus(double hinta){
    return eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
}

int main(){
    Kerrostalo kerrostalo;
    double hinta = 1;

    kerrostalo.eka.maaritaAsunnot();
    kerrostalo.toka.maaritaAsunnot();
    kerrostalo.kolmas.maaritaAsunnot();

    double kulutusKerrostalo = kerrostalo.laskeKulutus(hinta);
    cout << "Kulutus, kun hinta = 1: " << kulutusKerrostalo << endl;
    return 0;

}
