#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio lab;
    lab.recuperar();
    lab.mostrar();
    /*Computadora pc01 = Computadora("Windows", "PC 1", 500, 8);

    Computadora pc02;
    pc02.setSistema("Linux");
    pc02.setNombre("PC 2");
    pc02.setAlmac(1000);
    pc02.setRam(12);

    Laboratorio lab;
    //lab.agregarFinal(pc01);
    //lab.agregarFinal(pc02);
    lab << pc01 << pc02;
    
    Computadora pc03;
    cin >> pc03;
    lab << pc03;

    lab.mostrar();
    lab.respaldar();*/

    return 0;
}