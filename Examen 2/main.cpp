#include <iostream>
#include <string>

#include "Animal.h"
#include "Zoologico.h"

using namespace std;

Animal CrearAnimal(int numAnimales);

int main()
{
    string nombreZoo;
    cout<<"Nombre del Zoo:"<<endl;
    cin>>nombreZoo;

    Zoologico miZoologico(nombreZoo);

    int numAnimales;
    do
    {
        cout<<"Numero de Animales:"<<endl;
        cin>>numAnimales;
    }while(numAnimales<=0);

    for(int i=0; i<numAnimales; i++)
    {
        miZoologico.AgregarAnimal(CrearAnimal(i));
    }

    return 0;
}

Animal CrearAnimal(int i)
{
    string nombreAnimal;
    float pesoAnimal;
    string fechaPesaje;
    int tipoAnimal;
    int numeroJaula;

    cout<<"Nombre del Animal "<<i<<":"<<endl;
    cin>>nombreAnimal;
    cout<<"Peso de "<<nombreAnimal<<" (kg):"<<endl;
    cin>>pesoAnimal;
    cout<<"Fecha de Pesaje:"<<endl;
    cin>>fechaPesaje;
    do
    {
        cout<<"Tipo de Animal (0=Depredador, 1=Presa):"<<endl;
        cin>>tipoAnimal;
    }while(tipoAnimal==0 || tipoAnimal==1);
    cout<<"Número de Jaula:"<<endl;
    cin>>numeroJaula;

    Animal miAnimal(nombreAnimal, pesoAnimal, fechaPesaje, tipoAnimal, numeroJaula);
    return miAnimal;
}
