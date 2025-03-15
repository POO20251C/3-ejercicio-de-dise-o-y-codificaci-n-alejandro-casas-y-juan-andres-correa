//
// Created by Alejandro on 14/03/2025.
//

#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include "Producto.h"
#include "Client.h"
#include "Compra.h"

using namespace std;

class Tienda {
private:
    vector<Producto> productos;
    vector<Client> clientes;
    vector<Compra> compras;

public:

    Tienda() = default;
    Tienda(vector<Producto> productos, vector<Client> clientes);


    string registrarCliente(Client cliente);
    string agregarProducto(Producto producto);
    vector<Producto> getProductos();
    string registrarCompra(int idClient, int idProducto, int cantidad);
    vector<Compra> consultarCompras();
    string consultarCompras(int idCliente);
    vector<Client> consultarClientes();
};

#endif //TIENDA_H
