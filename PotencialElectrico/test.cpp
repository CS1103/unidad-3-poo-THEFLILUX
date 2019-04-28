//
// Created by jorge on 27/04/19.
//
#include "catch.hpp"
#include "Carga.h"

using namespace std;

SCENARIO("Calculo del voltaje") {
    GIVEN("Una sola carga hacia un punto") {
        WHEN("Se establece el valor de la carga, su posicion en X y su posicion en Y") {
            Carga carga(23.78,3.45,5.89);
            double potencial = carga.potencia();
            THEN("Potencial es 51579863259.4128875732") {
                REQUIRE(potencial == 51579863259.4128875732);
            }
        }
    }

    GIVEN("Caso 2: De varias cargas hacia un punto") {
        WHEN("Se establece el valor de las 3 cargas, su posicion en X y su posicion en Y") {
            Carga carga1(23.78,3.45,5.89);
            Carga carga2(22.78,4.45,6.89);
            Carga carga3(21.78,5.45,7.89);
            vector <Carga> cargas;
            cargas.push_back(carga1);
            cargas.push_back(carga2);
            cargas.push_back(carga3);
            double totalPotencial = 0;
            for (int i = 0; i < cargas.size(); i++) {
                totalPotencial = totalPotencial + cargas[i].potencia();
            }
            THEN("Potencial es 116834562159.9390563965") {
                REQUIRE(totalPotencial == 116834562159.9390563965);
            }
        }
    }
}