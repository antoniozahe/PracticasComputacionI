
/*
Proyecto Computacion unidad 1
*/
#include <iostream>
#include "Nash.h"

using namespace std;

template <typename matriz>
void llenarMatrizMA(matriz& MA);
template <typename matriz>
void llenarMatrizMB(matriz& MB);

int main()
{
    // Inicializar Matrices
    float MA[2][2] = { 0 };
    float MB[2][2] = { 0 };

    // Llenar valores de la matriz
    llenarMatrizMA(MA);
    cout << endl;
    llenarMatrizMB(MB);
    cout << endl;

    //
    Solucion Juego(MA, MB);
    Juego.imprimirMatrices();
    cout << endl;

    // Equilibrio de Nash
    Juego.revisarMatrizA();
    Juego.revisarMatrizB();
    Juego.imprimirMatrizN();
    cout << endl;
    Juego.equilibrioNash();
}

template <typename matriz>
void llenarMatrizMA(matriz& MA)
{
    cout << "Ingrese los pagos del jugador 1" << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Pagos opcion " << i+1 << endl;
        for (int j = 0; j < 2; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]:";
            cin >> MA[i][j];

        }
    }
}

template <typename matriz>
void llenarMatrizMB(matriz& MB)
{
    cout << "Ingrese los pagos del jugador 2" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]:";
            cin >> MB[i][j];
        }
    }
}