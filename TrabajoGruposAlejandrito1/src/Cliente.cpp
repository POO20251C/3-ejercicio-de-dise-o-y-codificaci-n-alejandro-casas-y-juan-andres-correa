//
// Created by caren on 13/03/2025.
//

#include "Cliente.h"
#include <string>

Cliente::Cliente(string idCliente, string nombre, string direccion){
    this -> idCliente = idCliente;
    this -> nombre = nombre;
    this -> direccion = direccion;
}

// Getters
string Cliente::getIdCliente(){
    return idCliente;
}

string Cliente::getNombre(){
    return nombre;
}

string Cliente::getDireccion(){
    return direccion; 
}

// Setters

