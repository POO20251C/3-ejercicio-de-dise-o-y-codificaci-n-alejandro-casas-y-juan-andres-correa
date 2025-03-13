//
// Created by caren on 13/03/2025.
//

#include "Producto.h"
#include <string>

Producto::Producto(string id, string nombre, double precio, int stock, int cambioStock){
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
    this->cambioStock = cambioStock;
}

// Getters
string Producto::getId(){
  return this->id;
}
string Producto::getNombre(){
  return this->nombre;
}
double Producto::getPrecio(){
  return this->precio;
}
int Producto::getStock(){
  return this->stock;
}

// Setters
void Producto::setCambioStock(int cambioStock){
  if(!(cambioStock < 0 && -cambioStock > stock)){
    stock = stock + cambioStock;
  }
}