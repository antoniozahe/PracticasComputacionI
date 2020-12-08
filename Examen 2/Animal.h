//
// Created by Antonio on 08/12/2020.
//

#ifndef EXAMEN2PRACTICO_ANIMAL_H
#define EXAMEN2PRACTICO_ANIMAL_H

#include <string>

using namespace std;

class Animal
{
private:
    string nombreAnimal;
    float pesoAnimal;
    string fechaPesaje;
    int tipoAnimal;
    int numeroJaula;

public:
    Animal()
    {
        nombreAnimal="";
        pesoAnimal=0;
        fechaPesaje="";
        tipoAnimal=0;
        numeroJaula=0;
    }
    Animal(string name, float weight, string date, int type, int cage);

    float getPeso();
    int getTipo();
    int getJaula();

};

#endif //EXAMEN2PRACTICO_ANIMAL_H
