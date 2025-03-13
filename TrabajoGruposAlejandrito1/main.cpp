#include <iostream>
#include "src/Producto.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

// string id, string nombre, double precio, int stock, int cambioStock
    Producto zapas("1", "Zapas To Flama", 25.99, 30, 0);
    cout << "Pille el producto " << zapas.getNombre() << "Papi estan re letales" << "!\nse las dejo a " << zapas.getPrecio() << ".\nTengo un total de " << zapas.getStock() <<endl;
}