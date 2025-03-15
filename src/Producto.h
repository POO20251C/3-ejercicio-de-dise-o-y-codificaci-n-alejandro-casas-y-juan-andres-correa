//
// Created by Alejandro on 14/03/2025.
//

#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>

using namespace std;

class Producto {
private:
    int id;
    string name;
    double price;
    int stock;
public:
    Producto() = default;
    Producto(int id, string name, double price, int stock);

    string increaseStock(int amount);
    string decreaseStock(int amount);

    // getters
    int getStock();
    int getId();
    string getName();
    double getPrice();
};

#endif//PRODUCTO_H
