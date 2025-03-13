//
// Created by caren on 13/03/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H


#include <string>
#include <vector>
using namespace std;

class Producto {
 public:
    Producto();
    Producto(string id, string nombre, double precio, int stock, int cambioStock);

// Getters
    string getId();
    string getNombre();
    double getPrecio();
    int getStock();
    int getCambioStock();
// Setters
    void setCambioStock(int cambioStock);
 private:
    int cambioStock;
    string id;
    string nombre;
    double precio;
    int stock;

};



#endif //PRODUCTO_H
