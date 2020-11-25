//
// Created by Antonio on 21/11/2020.
//

#ifndef PUNTOISOELECTRICO_MOLECULA_H
#define PUNTOISOELECTRICO_MOLECULA_H

#include <string>
#include <vector>
#include "Grupo.h"

class Molecula
{
private:
    string nombregrupos;
    vector<Grupo> todosGrupos;
    int numGrupos;

public:
    Molecula(string nomgrup);
    void AgregarGrupo(Grupo grupito);
    float CalcularPuntoIsoelectrico();
    int CargaMolecula(float ph);
    int CantidadGrupos();
};

#endif //PUNTOISOELECTRICO_MOLECULA_H
