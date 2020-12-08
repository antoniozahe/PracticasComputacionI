//
// Created by Antonio on 08/12/2020.
//

#ifndef EXAMEN2PRACTICO_ZOOLOGICO_H
#define EXAMEN2PRACTICO_ZOOLOGICO_H

#include <string>
#include <vector>
#include "Animal.h"

using namespace std;

class Zoologico
{
private:
    string nomAnimales;
    vector<Animal> todosAnimales;
    int numAnimales;

public:
    Zoologico(string nomAn);
    void AgregarAnimal(Animal animalito);
};

#endif //EXAMEN2PRACTICO_ZOOLOGICO_H
