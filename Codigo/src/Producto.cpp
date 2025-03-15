//
// Created by Alejandro on 14/03/2025.
//

#include "Producto.h"

#include <iostream>
#include <string>

using namespace std;

Producto::Producto(int id, string name, double price, int stock)
{
    this -> id = id;
    this-> name = name;
    this -> price = price;
    this -> stock = stock;
}

int Producto::getStock()
{
    return stock;
}

int Producto::getId()
{
    return id;
}

string Producto::getName()
{
    return name;
}

double Producto::getPrice()
{
    return price;
}

string Producto::increaseStock(int amount)
{
    this -> stock += amount;

    return "Se agregaron " + to_string((amount)) + " al stock";
}

string Producto::decreaseStock(int amount)
{
    string msg;
    if (stock - amount > 0)
    {
        this -> stock -= amount;
        msg = "Se decremento " + to_string(amount) + " de manera exitosa";
    } else
    {
        this -> stock = 0;
        msg = "El stock es 0, no puedes decrementar mas.";
    }

    return msg;
}


