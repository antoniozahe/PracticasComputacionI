/*
 * Created by Antonio,Oliver,Alfonso on 11/11/2020.
*/
#include "Nash.h"

using namespace std;

void Solucion::ImprimirMatrices()
{   cout<<"Jugador A"<<endl;
    for(int i=0; i<2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            cout<< A[i][j] << "\t";
        }
        cout<<endl;
    }
    cout<<"Jugador B"<<endl;
    for(int i=0; i<2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            cout<< B[i][j] << "\t";
        }
        cout<<endl;
    }
}

void Solucion::RevisarMatriz()
{
    if(A[0][0]<A[1][0])
    {
        a=a+1;
    }
    if(A[0][0]>A[1][0])
    {
        c= c + 1;
    }
    if(A[0][1]<A[1][1])
    {
        b=b+1;
    }
    if(A[0][1]>A[1][1])
    {
        d= d + 1;
    }
    if(B[0][0]<B[0][1])
    {
        a=a+1;
    }
    if(B[0][0]>B[0][1])
    {
        b=b+1;
    }
    if(B[1][0]<B[1][1])
    {
        c= c + 1;
    }
    if(B[1][0]>B[1][1])
    {
        d= d + 1;
    }
}

void Solucion::Equilibrio()
{
    if (a == 2) {
        CasoA=A[0][0]+B[0][0];
        cout << "Ambos Prisioneros Hablan" << endl;
    }
    if (b == 2) {
        CasoB=A[0][1]+B[0][1];
        cout << "Prisionero A Habla y Prisionero B Calla" << endl;
    }
    if (c == 2) {
        CasoC=A[1][0]+B[1][0];
        cout << "Prisionero A Calla y Prisionero B Habla" << endl;
    }
    if (d == 2) {
        CasoD=A[1][1]+B[1][1];
        cout << "Ambos Prisioneros Callan" << endl;
    }
}

Solucion::Solucion(float MA[][2], float MB[][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            A[i][j]=MA[i][j];
            B[i][j]=MB[i][j];
        }
    }
}

void Solucion::DeterminarMejorCaso()
{
    if(a!=2){CasoA=0;}
    if(b!=2){CasoB=0;}
    if(c!=2){CasoC=0;}
    if(d!=2){CasoD=0;}

    float CASOS[4]={CasoA,CasoB,CasoC,CasoD};
    float temp=CasoA;

    for (int i=0; i<4; i++)
    {
        if(CASOS[i]==2)
        {
            if(CASOS[i]<temp)
            {
                temp=CASOS[i];
            }
        }
    }
    if(temp==CasoA)
    {
        cout<<"La Mejor Opcion es que Ambos Hablen."<<endl;
    }
    if(temp==CasoB)
    {
        cout<<"La Mejor Opcion es que el Prisionero A Hable y el PrisioneroB Calle."<<endl;
    }
    if(temp==CasoC)
    {
        cout<<"La Mejor Opcion es que el Prisionero A Calle y el PrisioneroB Hable."<<endl;
    }
    if(temp==CasoD)
    {
        cout<<"La Mejor Opcion es que Ambos Callen."<<endl;
    }
}
