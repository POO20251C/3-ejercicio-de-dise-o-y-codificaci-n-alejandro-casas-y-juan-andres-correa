//
// Created by Alejandro on 14/03/2025.
//

#include "Compra.h"
#include <string>

#include "Producto.h"
#include "Client.h"

using namespace std;

Compra::Compra(string fecha, Producto producto, int cantidad)
{
    this->fecha = fecha;
    this->producto = producto;
    this->cantidad = cantidad;
}

double Compra::calcTotal()
{
    return producto.getPrice() * cantidad;
}

string Compra::getFecha()
{
    return fecha;
}


int Compra::getCantidad()
{
    return  cantidad;
}

Producto Compra::getProducto()
{
    return producto;
}