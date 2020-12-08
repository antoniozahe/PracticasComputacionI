//
// Created by Antonio on 08/12/2020.
//

#include "Animal.h"

Animal::Animal(string name, float weight, string date, int type, int cage)
{
    nombreAnimal=name;
    pesoAnimal=weight;
    fechaPesaje=date;
    tipoAnimal=type;
    numeroJaula=cage;
}

float Animal::getPeso() {
    return pesoAnimal;
}

int Animal::getTipo() {
    return tipoAnimal;
}

int Animal::getJaula() {
    return numeroJaula;
}
