/*
Diseñar y codificar en C un algoritmo que permita registrar de los empleados de una fábrica
 (no se sabe cuántos) su peso y saber cuántos pesan hasta 80 kg.
 inclusive y cuantos pesan más de 80 kg.
*/

#include <iostream>

using namespace std;

int main ()
{
    float peso;
    int cantMayor = 0, cantMenor = 0;
    bool bandera = true;

    cout << "Para terminar el programa ingrese 0." << endl;

    while (bandera)
    {
        cout << "Ingrese el peso del empleado: ";
        cin >> peso;

        if (peso == 0)
        {
            bandera = false;
        }
        else if (peso > 80.0)
        {
            cantMayor++;
        }
        else if (peso < 80.0)
        {
            cantMenor++;
        }

    }

    cout << "Se ingresaron " << cantMayor << " con un peso mayor a 80 Kg." << endl;
    cout << "Se ingresaron " << cantMenor << " con un peso menor a 80 Kg." << endl;


    return 0;
}
