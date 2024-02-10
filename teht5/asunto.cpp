#include <iostream>
#include "asunto.h"
using namespace std;

Asunto::Asunto(){
    cout << "Asunto luotu" << endl;
}

void Asunto::maarita(int *asukkaat, int *nelioita){
    asukasMaara = *asukkaat;
    neliot = *nelioita;
    cout << "Asunto maaritetty asukkaita " << asukasMaara << " nelioita " << neliot << endl;
}

double Asunto::laskeKulutus(double){
    int asukasMaara = 2;
    int neliot = 100;
    return asukasMaara * neliot;
}
