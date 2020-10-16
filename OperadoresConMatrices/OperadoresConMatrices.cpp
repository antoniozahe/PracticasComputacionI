#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    //Variables constantes para filas y columnas
    const int fil=5;
    const int col=5;
    char op;

    array<array<float, col>, fil> A = {};
    array<array<float, col>, fil> B = {};

    srand((int)time(0));

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
           A[i][j] = (rand() % 9)+ 1;
           B[i][j] = (rand() % 9)+ 1;
        }
    }

    cout << "Matriz A" << endl;
    for (int i = 0; i < fil - 1; i++)
    {
        for (int j = 0; j < col - 1; j++)
        {
            cout << A[i][j] << "  ";
        } cout << endl;
    }

    cout << "Matriz B" << endl;
    for (int i = 0; i < fil - 1; i++)
    {
        for (int j = 0; j < col - 1; j++)
        {
            cout << B[i][j] << "  ";
        } cout << endl;
    }

    cout << "Qué operación desea realizar?" << endl;
    cout << "Suma(+), Resta(-), Multiplicación(*), División" << endl;
    cin >> op;
    cout << "Su resultado es:" << endl;

    if (op == '+')
    {
        for (int i = 0; i < fil - 1; i++)
        {
            for (int j = 0; j < col - 1; j++)
            {
                cout << A[i][j] + B[i][j] << "  ";
            } cout << endl;
        }
    }

    if (op == '-')
    {
        for (int i = 0; i < fil - 1; i++)
        {
            for (int j = 0; j < col - 1; j++)
            {
                cout << A[i][j] - B[i][j] << "  ";
            } cout << endl;
        }
    }

    if (op == '*')
    {
        for (int i = 0; i < fil - 1; i++)
        {
            for (int j = 0; j < col - 1; j++)
            {
                cout << A[i][j] * B[i][j] << "  ";
            } cout << endl;
        }
    }

    if (op == '/')
    {
        for (int i = 0; i < fil - 1; i++)
        {
            for (int j = 0; j < col - 1; j++)
            {
                cout << A[i][j] / B[i][j] << "  ";
            } cout << endl;
        }
    }

    return 0;
}