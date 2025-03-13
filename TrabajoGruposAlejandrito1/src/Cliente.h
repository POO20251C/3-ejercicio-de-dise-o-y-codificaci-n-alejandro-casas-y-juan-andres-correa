//
// Created by caren on 13/03/2025.
//

#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
#include "Compra.h"
using namespace std;


class Cliente {
  public:
    Cliente();
    Cliente(string idCliente, string nombre, string direccion);

    void registrarCompra(Compra compra);

  //Getters
    string getIdCliente();
    string getNombre();
    string getDireccion();

  private:
  string idCliente;
  string nombre;
  string direccion;
  vector<Compra> compras;
};



#endif //CLIENTE_H
