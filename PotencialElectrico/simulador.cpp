//
// Created by jorge on 27/04/19.
//
#include <cstdlib>
#include <ctime>
#include "simulador.h"

simulador::simulador() {}

simulador::~simulador() = default;

int simulador::puntoX() {

    int nuevoX = 0;

    nuevoX = rand()%1000;

    return nuevoX;
}

int simulador::puntoY() {

    int nuevoY = 0;

    nuevoY = rand()%1000;

    return nuevoY;
}

int simulador::getH(int h) {
    return h;
}

int simulador::getW(int w) {
    return w;
}
