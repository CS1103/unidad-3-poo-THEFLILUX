//
// Created by jorge on 26/04/19.
//

#ifndef POTENCIALELECTRICO_CARGA_H
#define POTENCIALELECTRICO_CARGA_H

#include "simulador.h"


class Carga: public simulador {
public:
    int x,y;
    int q;

public:

    Carga(int x, int y, int q);

    ~Carga();

    double potencia();
};


#endif //POTENCIALELECTRICO_CARGA_H
