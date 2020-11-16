/*
 *EQUILIBRIO DE NASH Y LA MEJOR DECISIÓN
 * Created by Antonio,Oliver,Alfonso on 11/11/2020.
*/
#include <iostream>
#include "Nash.h"

using namespace std;

template <typename matriz>
void LlenarMatrizMA(matriz & MA);
template <typename matriz>
void LlenarMatrizMB(matriz & MB);

int main ()
{

    float MA[2][2];
    float MB[2][2]={{5, 10},
                   {0, 1}};

    cout<<"Ingrese las Opciones del Prisionero A:"<<endl;
    LlenarMatrizMA(MA);

    cout<<"Ingrese las Opciones del Prisionero B:"<<endl;
    LlenarMatrizMB(MB);

    Solucion miJuego(MA, MB);

    miJuego.ImprimirMatrices();
    miJuego.RevisarMatriz();
    cout<<"Encontramos Equilibrio de Nash cuando:"<<endl;
    miJuego.Equilibrio();
    miJuego.DeterminarMejorCaso();
}

template <typename matriz>
void LlenarMatrizMA(matriz & MA)
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> MA[i][j];

        }
    }
}

template <typename matriz>
void LlenarMatrizMB(matriz & MB)
{
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> MB[i][j];

        }
    }
}