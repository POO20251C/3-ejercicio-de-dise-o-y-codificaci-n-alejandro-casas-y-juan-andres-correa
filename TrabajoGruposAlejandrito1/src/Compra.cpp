//
// Created by caren on 13/03/2025.
//

#include "Compra.h"
#include <string>

Compra::Compra(string id, string fecha, string nombreCliente, vector<Producto> productos, vector<int> cantidadProductos,  bool status){
this -> id = id;
this -> fecha = fecha;
this -> nombreCliente = nombreCliente;
this -> productos = productos;
this -> cantidadProductos = cantidadProductos;
this -> status = status;
}

bool Compra::getStatus() {
    return status;
}

double Compra::calcularPrecio() {
    double price;

    for (int i = 0; i >= productos.size(); i++) {
        price += productos[i] * cantidadProductos[i]
    }

    return price
}