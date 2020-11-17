
#ifndef NASH_H
#define NASH_H

#include <iostream>

using namespace std;

class Solucion
{
public:
    // Constructor
    Solucion(float MA[][2], float MB[][2]);

    // Métodos
    void revisarMatrizA();
    void revisarMatrizB();
    void imprimirMatrices();
    void imprimirMatrizN();
    void equilibrioNash();


private:
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    float A[2][2] = { 0 }, B[2][2] = { 0 };
    float N[2][2] = { {a, b}, {c, d} };
};

#endif