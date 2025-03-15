#include <iostream>
#include <string>

#include "src/Tienda.h"
#include "src/Client.h"
#include "src/Compra.h"
#include "src/Producto.h"

using namespace std;

void showProducts(Tienda tienda)
{
    cout << "===PRODUCTOS===" << endl;


    for (int i = 0; i < tienda.getProductos().size(); i = i + 1)
    {
        Producto p = tienda.getProductos()[i];
        cout << "Nombre: " << p.getName() << " Id: " << p.getId() << " Stock: " << p.getStock() << endl;
    };
}

void consultarCOmpras(Tienda tienda)
{
    cout << "===COMPRAS===" << endl;

    for (int i = 0; i < tienda.consultarCompras().size(); i = i + 1)
    {
        Compra c = tienda.consultarCompras()[i];
        cout << "Nombre: " << c.getProducto().getName() << " Fecha: " << c.getFecha()<< " Cantidad: " << c.getCantidad() << endl;
    }
}

int main() {
    vector<Producto> productos;
    vector<Client> clientes;
    Tienda tienda(productos, clientes);


    cout << tienda.agregarProducto(Producto(1, "Balon de futbol", 1000, 50))<< endl;
    cout << tienda.agregarProducto(Producto(2, "Balon de baloncesto", 5000, 25)) << endl;
    cout << tienda.agregarProducto(Producto(3, "Bonus", 1000, 50)) << endl;


    Client alejandro("Alejandro", 1);
    cout << tienda.registrarCliente(alejandro) << endl;

    showProducts(tienda);

    cout << tienda.registrarCompra(1, 1, 50) << endl;
    consultarCOmpras(tienda);



    return 0;
}