//
// Created by Alejandro on 14/03/2025.
//

#include "Tienda.h"
#include "Producto.h"
#include "Client.h"

#include <vector>
#include <string>

using namespace std;

Tienda::Tienda(vector<Producto> productos, vector<Client> clientes) {
    this -> productos = productos,
    this -> clientes = clientes;
}

string Tienda::registrarCliente(Client cliente) {
    clientes.push_back(cliente);

    return "Se agrego satisfactoriamente el cliente: " + cliente.getNombre();
};

string Tienda::agregarProducto(Producto producto)
{
    productos.push_back(producto);

    return "Se agrego satisfactoriamente el producto: " + producto.getName();
}

vector<Producto> Tienda::getProductos()
{
    return productos;
}

string Tienda::registrarCompra(int idCliente, int idProducto, int cantidad)
{
    string message;
    Client* cliente = nullptr;
    Producto* producto = nullptr;

    for (int i = 0; i < clientes.size(); i = i + 1)
    {
        if (clientes[i].getId() == idCliente)
        {
            cliente = &clientes[i];
            break;
        }
    }

    for (int i = 0; i < productos.size(); i = i + 1)
    {
        if (productos[i].getId() == idProducto)
        {
            producto = &productos[i];
            break;
        }
    }

    if (!cliente)
    {
        message = "No se pudo encontrar el cliente";
        return message;
    }

    if (!producto)
    {
        message = "No se pudo encontrar el producto";
        return message;
    }

    if (producto->getStock() < cantidad)
    {
        message = "No hay suficientes unidades disponibles.";
        return message;
    }

    producto->decreaseStock(cantidad);
    Compra nuevaCompra("10/10/25", *producto, cantidad);


    compras.push_back(nuevaCompra);

    message = "Compra realizada con exito";

    return  message;
}

vector<Compra> Tienda::consultarCompras()
{
    return compras;
}

vector<Client> Tienda::consultarClientes()
{
    return clientes;
}