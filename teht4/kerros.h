#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include "katutaso.h"

class Kerros : public Katutaso{
public:
    Kerros();
    Asunto as3;
    Asunto as4;
    void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KERROS_H
