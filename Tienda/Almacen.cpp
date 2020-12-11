//
// Created by Antonio on 09/12/2020.
//

#include "Almacen.h"

bool Almacen::ModificarInventarioArticulo(Articulo* artPtr, int cantidad)
{
    for (int i=0; i<articulos.size(); i++)
    {
        if(artPtr==articulos[i].articulo)
        {
            if (cantidad + articulos[i].cantidad<0)
            {
                return false;
            }
            else
            {
                articulos[i].cantidad+=cantidad;
                return  true;
            }
        }
    }
    if (cantidad<0)
    {
        return false;
    }
    else
    {
        ArticuloAlmacenado update;
        update.articulo=artPtr;
        update.cantidad=cantidad;
        articulos.push_back(update);
        return true;
    }
}

string Almacen::ObtenerNombre() const
{
    return nombre;
}

string Almacen::ObtenerInventario() const
{
    string invStr = "";
    invStr.append("\nArticulo\tCantidad\n");
    for (int i = 0, n = articulos.size(); i < n; i++)
    {
        invStr.append(articulos[i].articulo->nombre);
        invStr.append("\t");
        invStr.append(to_string(articulos[i].cantidad));
        invStr.append("\n");
    }
    return invStr;
}