//
// Created by Antonio on 21/11/2020.
//

#include "Molecula.h"
#include <string>
#include <vector>
#include <iostream>

Molecula::Molecula(string nomgrup) {
    nombregrupos=nomgrup;
}

void Molecula::AgregarGrupo(Grupo grupito) {
    todosGrupos.push_back(grupito);
}

float Molecula::CalcularPuntoIsoelectrico() {
    float PI, ph, carga=0;
    int numGrupos=CantidadGrupos();
    vector <float> todospk(numGrupos);

    for(int i=0; i<numGrupos; i++)
    {
        todospk[i]=todosGrupos[i].getpk();
    }

    for (int i=0; i<numGrupos; i++)
    {
        float sup=0, inf=0;
        ph=todospk[i]+0.01;
        carga=CargaMolecula(ph);
        if(carga==0)
        {
            inf=todospk[i];
            sup=todospk[i+1];
            return (sup+inf)/2;
        }
    }
}

int Molecula::CargaMolecula(float ph)
{
    int numGrupos=CantidadGrupos();
    vector <float> todospk(numGrupos);
    vector <float> todoscargas(numGrupos);


    for (int i=0;i<numGrupos;i++)
    {
        todospk[i]=todosGrupos[i].getpk();
        todoscargas[i]=todosGrupos[i].getcarga();
        ph+=todosGrupos[i].getpk()+0.001;

        if(ph<=todospk[i])
        {
            int CargaMol=0;
            CargaMol=CargaMol+todoscargas[i]+1;
            return CargaMol;
        }
        if(ph>todospk[i])
        {
            int CargaMol=0;
            CargaMol=CargaMol+todoscargas[i];
            return CargaMol;
        }
    }
}

int Molecula::CantidadGrupos() {
    return 0;
}

