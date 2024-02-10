#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main(){
    Kerrostalo *kerrostalo = new Kerrostalo();
    double hinta = 1;

    double kulutusKerrostalo = kerrostalo->laskeKulutus(hinta);
    cout << "Kulutus, kun hinta = 1: " << kulutusKerrostalo << endl;

    delete kerrostalo;
    return 0;

}
