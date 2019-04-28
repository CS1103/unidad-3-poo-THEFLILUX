//
// Created by jorge on 27/04/19.
//

#ifndef POTENCIALELECTRICO_SIMULADOR_H
#define POTENCIALELECTRICO_SIMULADOR_H


class simulador {
public:
    int h,w;
public:
    simulador();
    virtual ~simulador();

    int puntoX();
    int puntoY();
    int getH(int h);
    int getW(int w);
};


#endif //POTENCIALELECTRICO_SIMULADOR_H
