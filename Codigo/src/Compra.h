//
// Created by Alejandro on 14/03/2025.
//

#ifndef COMPRA_H
#define COMPRA_H


#include <string>
#include "Producto.h"
#include "Client.h"

using namespace std;

class Compra {
private:
    string fecha;
    Producto producto;
    int cantidad;

public:
    Compra() = default;
    Compra(string fecha, Producto producto, int cantidad);

    double calcTotal();
    string getFecha();
    int getCantidad();
    Producto getProducto();
};


#endif //COMPRA_H
