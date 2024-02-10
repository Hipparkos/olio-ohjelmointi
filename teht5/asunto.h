#ifndef ASUNTO_H
#define ASUNTO_H


class Asunto{
public:
    Asunto();
    int asukasMaara;
    int neliot;
    void maarita(int*asukkaat,int*nelioita);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
