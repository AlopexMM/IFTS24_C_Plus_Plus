/*
Se desea obtener el mayor de una serie de 20 números ingresados. 
Desarrollo un programa que solicite los números al usuario y al finalizar muestre por pantalla el mayor.
b) Modificar el ejercicio para que al finalizar muestre también el menor y la posición de ingreso. 
Ej : El mayor de los números ingresados es 120 y se ingresó en 3 lugar.
*/

#include <iostream>

using namespace std;

main () 
{
    int numero, mayor = -9999, menor = 9999, posicionMayor, posicionMenor;

    for (int i = 0; i < 20; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero > mayor)
        {
            mayor = numero;
            posicionMayor = i + 1;
        }
        
        // cumplir con la parte b del ejercicio
        
        if (numero < menor) 
        {
            menor = numero;
            posicionMenor = i + 1;
        }
    }

    cout << "El numero mayor ingresado es " << mayor << " en la posicion " << posicionMayor << endl;
    cout << "El numero menor ingresado es " << menor << " en la posicion " << posicionMenor << endl;
}