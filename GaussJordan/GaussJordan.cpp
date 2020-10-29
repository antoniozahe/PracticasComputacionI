#include <iostream>
#include <array>
#include <cmath>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

template <typename matriz>
void VariableIgualaUno(matriz & miMatriz);

template <typename matriz>
void Echelon(matriz & miMatriz);

template <typename matriz>
void RevisarPivote(matriz & miMatriz);

template <typename matriz>
void CambiarLineas(matriz & miMatriz);

int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    cout<<"Su Matriz Inicial Es:"<<endl;
    ImprimirMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    cout<<"Row Echelon Form:"<<endl;
    ImprimirMatriz(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];

        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    const int variables=miMatriz.size();

    for(int i=0; i<variables; i++)
    {
        if(isnan(miMatriz[i][variables]))
        {
            cout<<"Su Sistema no tiene Solucion"<<endl;
            return;
        }
        else
        {
            cout << "x [" << i << "] = ";
            cout << miMatriz[i][variables] << endl;
        }
    }

}


/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
   RevisarPivote(miMatriz);
   Echelon(miMatriz);
   VariableIgualaUno(miMatriz);
}

template <typename matriz>
void Echelon(matriz & miMatriz)
{
    int variables=miMatriz.size();
    float coc;

    for(int j=0; j < variables; j++)
    {
        for(int i=0; i<variables; i++)
        {
            if(i!=j)
            {
                coc= miMatriz[i][j] / miMatriz[j][j];
                for(int k=0; k<variables+1; k++)
                {
                    miMatriz[i][k]= miMatriz[i][k] - coc * miMatriz[j][k];
                }
            }
        }
    }
}

template <typename matriz>
void VariableIgualaUno(matriz & miMatriz)
{
    int variables=miMatriz.size();
    float div;

    for (int i=0; i<variables; i++)
    {
        div=miMatriz[i][i];
        for (int j=0; j<variables+1; j++)
        {//Variable de linea a 1
            miMatriz[i][j]=miMatriz[i][j]/div;
        }
    }
}

template <typename matriz>
void RevisarPivote(matriz & miMatriz)
{
    int variables=miMatriz.size();
   int control =0;

    for (int i=0; i<variables; i++)
    {
        for (int j=0; j<variables+1; j++)
        {
            if(miMatriz[i][i]!=0)
            {
                control=0;
            }
            else
            {
                control=1;
            }
        }
    }
    if(control=1)
    {
        CambiarLineas(miMatriz);
    }
}
template <typename matriz>
void CambiarLineas(matriz & miMatriz)
{
    int variables=miMatriz.size();
    array <array<float, 4>, 3> temp = {0};

    for (int i=0; i<variables; i++)
    {
        for (int j=0; j<variables+1; j++)
        {
            temp[i][j]=miMatriz[i][j];
        }
    }
    for (int j=0; j<variables+1; j++)
    {
        miMatriz[0][j]=temp[1][j];
        miMatriz[1][j]=temp[2][j];
        miMatriz[2][j]=temp[0][j];
    }
}
