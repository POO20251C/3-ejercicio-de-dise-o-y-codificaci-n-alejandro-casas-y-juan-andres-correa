//
// Created by Alejandro on 14/03/2025.
//

#include "Client.h"

#include <string>
#include <vector>

using namespace std;

Client::Client(string nombre, int id)
{
    this->nombre = nombre;
    this -> id = id;
}

string Client::getNombre()
{
    return nombre;
}

int Client::getId()
{
    return id;
}