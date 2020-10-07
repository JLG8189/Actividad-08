#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
    string sistema;
    string nombre;
    int almac;
    int ram;

public:
    Computadora();
    Computadora(const string &sistema, const string &nombre, int almac, int ram);
    void setSistema(const string &v);
    string getSistema();
    void setNombre(const string &v);
    string getNombre();
    void setAlmac(int v);
    float getAlmac();
    void setRam(int v);
    int getRam();
};

#endif