//
// Created by Antonio on 08/12/2020.
//

#include "Zoologico.h"

Zoologico::Zoologico(string nomAn) {
    nomAn=nomAnimales;
}

void Zoologico::AgregarAnimal(Animal animalito) {
    todosAnimales.push_back(animalito);
}
