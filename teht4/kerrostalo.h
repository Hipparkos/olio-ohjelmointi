#ifndef KERROSTALO_H
#define KERROSTALO_H

#include "katutaso.h"
#include "kerros.h"



class Kerrostalo : public Kerros{
public:
    Kerrostalo();
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
    double laskeKulutus(double);
};

#endif // KERROSTALO_H
