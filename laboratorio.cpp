#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar()
{
    ofstream archivo("respaldo.txt");
    if (archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo << c.getSistema() << endl;
            archivo << c.getNombre() << endl;
            archivo << c.getAlmac() << endl;
            archivo << c.getRam() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("respaldo.txt");
    if(archivo.is_open())
    {
        string temp;
        int almac;
        int ram;
        Computadora c;

        while (true)
        {
            getline(archivo, temp); //Sistema
            if(archivo.eof())
            {
                break;
            }
            c.setSistema(temp);

            getline(archivo, temp); //Nombre
            c.setNombre(temp);

            getline(archivo, temp); //Almacenamiento
            almac = stoi(temp); //String-to-int
            c.setAlmac(almac);

            getline(archivo, temp); //Ram
            ram = stoi(temp);
            c.setRam(ram);

            agregarFinal(c);
        }
        
    }
    archivo.close();
}