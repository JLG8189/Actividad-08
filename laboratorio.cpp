#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c)
{
    if (cont < 5)
    {
        arreglo[cont] = c;
        cont++;
    }
    else
    {
        cout << "Arreglo lleno" << endl;
    }
}

void Laboratorio::mostrar()
{
    cout << endl;
    cout << left;
    cout << setw(10) << "Sistema";
    cout << setw(10) << "Nombre";
    cout << setw(17) << "Almacenamiento";
    cout << setw(6) << "Ram";
    cout << endl;
    for (size_t i = 0; i < cont; i++)
    {
        Computadora &c = arreglo[i];
        cout << c;
        /*
        cout << "Sistema Operativo: " << c.getSistema() << endl;
        cout << "Nombre del equipo: " << c.getNombre() << endl;
        cout << "Almacenamiento: " << c.getAlmac() << " GB" << endl;
        cout << "Memoria RAM: " << c.getRam() << endl << endl;
        */
    }
}