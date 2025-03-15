//
// Created by Alejandro on 14/03/2025.
//

#ifndef CLIENT_H
#define CLIENT_H

#include "Compra.h"

#include <string>
#include <vector>

using namespace std;

class Client {
    public:
    Client(string nombre, int id);
    Client() = default;

    string getNombre();
    int getId();
private:
    string nombre;
    int id;

};

#endif //CLIENT_H
