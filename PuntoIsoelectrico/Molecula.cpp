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
    float ph, carga;
    numGrupos= CantidadGrupos();
    vector <float> todospk(numGrupos);

    if(numGrupos==2)
    {
        for(int i=0; i<numGrupos; i++)
        {
            todospk[i]=todosGrupos[i].getpk();

        }

        for (int i=0; i<numGrupos; i++)
        {
            ph=todospk[i];
            carga=CargaMolecula(ph);

            if(carga==0)
            {
                float inf=todospk[i];
                float sup=todospk[i+1];

                return (inf+sup)/2;

            }

        }
    }

    if(numGrupos>=3)
    {
        for(int i=0; i<numGrupos; i++)
        {
            todospk[i]=todosGrupos[i].getpk();

        }

        for (int i=0; i<numGrupos; i++)
        {
            ph=todospk[i];
            carga=CargaMolecula(ph);

            if(carga==0)
            {
                float inf=todospk[i+1];
                float sup=todospk[i+2];

                return (inf+sup)/2;

            }

        }
    }

}

int Molecula::CargaMolecula(float ph)
{
    numGrupos= CantidadGrupos();
    vector <float> todospk(numGrupos);
    vector <float> todoscargas(numGrupos);

    for (int i=0;i<numGrupos;i++)
    {
        todospk[i]=todosGrupos[i].getpk();
        todoscargas[i]=todosGrupos[i].getcarga();
     }

    for (int i=0;i<numGrupos;i++)
    {
        if(ph<=todospk[i])
        {
            int CargaMol=0;
            CargaMol=CargaMol+todoscargas[i]+1;
            return CargaMol;
        }
        else
        {
            int CargaMol=0;
            CargaMol=CargaMol+todoscargas[i];
            return CargaMol;
        }
    }
    return 0;
}

int Molecula::CantidadGrupos() {
    int cant=todosGrupos.size();
    return cant;
}

