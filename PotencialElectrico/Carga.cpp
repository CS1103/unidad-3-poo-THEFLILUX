//
// Created by jorge on 26/04/19.
//
#include <cmath>
#include "simulador.h"
#include "Carga.h"

Carga::Carga(int x, int y, int q): x(x), y(y), q(q) {}

Carga::~Carga() = default;

double Carga::potencia() {

    double k = 8.99*pow(10,9);

    double r = sqrt(pow(x-puntoX(),2)+pow(y-puntoY(),2));
    double salida = (k*q)/r;

    return salida;
}



