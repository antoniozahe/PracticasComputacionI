//
// Created by Antonio on 21/11/2020.
//

#include "Grupo.h"

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