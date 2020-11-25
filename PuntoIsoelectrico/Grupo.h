//
// Created by Antonio on 21/11/2020.
//

#ifndef PUNTOISOELECTRICO_GRUPO_H
#define PUNTOISOELECTRICO_GRUPO_H

#include <string>

using namespace std;

class Grupo
{
private:
    string nombreGrupo;
    float pkGrupo;
    int cargaGrupo;

public:
    Grupo()
    {
        nombreGrupo="";
        pkGrupo=0;
        cargaGrupo=0;
    }
    Grupo(string nom, float pk, int carga);

    float getpk() const;
    int getcarga() const;
};

#endif //PUNTOISOELECTRICO_GRUPO_H
