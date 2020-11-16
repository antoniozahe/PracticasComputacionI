/*
 * Created by Antonio,Oliver,Alfonso on 11/11/2020.
*/

#ifndef PROYECTODEUNIDAD1_NASH_H
#define PROYECTODEUNIDAD1_NASH_H

#include <iostream>
#include <array>
#include <limits>

class Solucion{
public:
    Solucion(float A[][2], float B[][2]);

    void ImprimirMatrices();
    void RevisarMatriz();
    void Equilibrio();
    void DeterminarMejorCaso();

private:
    float A[2][2];
    float B[2][2];
    int a{0}, b{0}, c{0}, d{0};
    float CasoA, CasoB, CasoC, CasoD;
};

#endif //PROYECTODEUNIDAD1_NASH_H