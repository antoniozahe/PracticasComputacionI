//
// Created by Antonio on 18/11/2020.
//
#include "Grupo.h"
#include <iostream>

Grupo::Grupo(string nom, float pk, int carga)
{
    nombreGrupo=nom;
    pkGrupo=pk;
    cargaGrupo=carga;
}

float Grupo::getpk() const {
    return pkGrupo;
}

int Grupo::getcarga() const {
    return cargaGrupo;
}
