#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>
#include "simulador.h"
#include "Carga.h"

using namespace std;

int main() {
    int valor_carga=0,cantidad=0,cordX=0,cordY=0;
    double totalPotencial = 0;

    srand(time(0));

    simulador limite;

    vector <Carga> cargas;

    cantidad = 1 + rand()%(20);

    cout << "Cantidad de cargas: " << cantidad << "\n\n";

    for(int i=0;i<cantidad;i++){

        valor_carga = 1 + rand()%(1000);
        cout << "Valor de la carga:"<< valor_carga << endl;

        cordX = rand()%limite.getH(1000);
        cout << "Valor de X: "<< cordX << endl;

        cordY = rand()%limite.getW(1000);
        cout << "Valor de Y:"<<cordY << endl;

        Carga x(cordX, cordY, valor_carga);

        cargas.push_back(x);

        cout << cargas[i].potencia() << "\n\n";
    }

    for (int i = 0; i < cargas.size(); i++) {
        totalPotencial = totalPotencial + cargas[i].potencia();
    }

    cout << "El potencial total es: " << totalPotencial << "\n\n";

    return 0;
}