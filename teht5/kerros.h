#ifndef KERROS_H
#define KERROS_H

#include "asunto.h"
#include "katutaso.h"

class Kerros : public Katutaso{
public:
    Kerros();
    ~Kerros();
    void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto* as1;
    Asunto* as2;
    Asunto* as3;
    Asunto* as4;
};
#endif // KERROS_H
