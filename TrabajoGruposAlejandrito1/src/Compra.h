//
// Created by caren on 13/03/2025.
//

#ifndef COMPRA_H
#define COMPRA_H
#include <string>
#include <vector>
#include "Producto.h"
using namespace std;


class Compra {
  public:
    Compra();
    Compra(string id, string fecha, string nombreCliente);
    int calcularPrecio(vector<Producto> productos, vector<int> cantidadProductos);
  // Getters
    string getId();
    string getFecha();
    string getNombreCliente();

  // Setters
    bool setValidarCompras();

  private:
    string id;
    string fecha;
    string nombreCliente;
    vector<Producto> productos;
    vector<int> cantidadProductos;
    bool validarCompra();
};



#endif //COMPRA_H
