#include "Nash.h"

Solucion::Solucion(float MA[][2], float MB[][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            A[i][j] = MA[i][j];
            B[i][j] = MB[i][j];
        }
    }
}

void Solucion::revisarMatrizA()
{
    // Revisar Primera Columna
    if (A[0][0] > A[1][0]) {
        N[0][0]++;
    }
    else if (A[0][0] < A[1][0])
    {
        N[1][0]++;
    }
    else {
        N[0][0]++;
        N[1][0]++;
    }
    // Revisar Segunda Columa
    if (A[0][1] > A[1][1]) {
        N[0][1]++;
    }

    else if (A[0][1] < A[1][1])
    {
        N[1][1]++;
    }
    else {
        N[0][1]++;
        N[1][1]++;
    }
}

void Solucion::revisarMatrizB()
{
    // Revisar Primera Fila
    if (B[0][0] > B[0][1]) {
        N[0][0]++;
    }

    else if (B[0][0] < B[0][1]) {
        N[0][1]++;
    }
    else {
        N[0][0]++;
        N[0][1]++;
    }

    // Revisar Segunda Fila
    if (B[1][0] > B[1][1]) {
        N[1][0]++;
    }

    else if (B[1][0] < B[1][1]) {
        N[1][1]++;
    }
    else {
        N[1][0]++;
        N[1][1]++;
    }
}

void Solucion::imprimirMatrices()
{
    cout << "Jugador A" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Jugador B" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}



void Solucion::imprimirMatrizN()
{
    cout << "Matriz de equilibrio" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << N[i][j] << " ";
        }
        cout << endl;
    }
}

void Solucion::equilibrioNash()
{
    int n = 0;
    int temp1 = 0;
    int temp2 = 0;
    float Casos[2][2]={{0,0},{0,0}};
    for (int i=0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (N[i][j] == 2)
            {
                temp1 = i + 1;
                temp2 = j + 1;
                cout << "Un punto de equilibrio de Nash es: N(" << temp1 << "," <<temp2 << ")" << endl;
                cout << "La mejor estrategia para el jugador 1 es la opcion " << temp1 << endl;
                cout << "La mejor estrategia para el jugador 2 es la opcion " << temp2 << endl;
                cout << endl;
                n++;
                Casos[i][j]=A[i][j]+B[i][j];
            }
        }
    }
    if (n == 0)
    {
        cout << "No hay una mejor estrategia pura" << endl;
    }
    else if (n > 1)
    {
        float tempo=Casos[0][0];
        int opc[2][2]={{1,2},{3,4}};
        int fin=opc[0][0];

        cout << "Hay mas de una estrategia viable, recomendable utilizar la que de los mejores resultados Colectivos (";

        for(int i=0; i<2; i++) {
            for (int j = 0; j < 2; j++) {
                if (Casos[i][j] > tempo) {
                    tempo = Casos[i][j];
                    fin=opc[i][j];
                }
            }
        }
        cout<<"Opcion "<<fin<<"="<<tempo<<")"<<endl;
    }
}