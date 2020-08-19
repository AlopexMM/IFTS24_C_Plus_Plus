/*
Realizar un programa que permita cargar dos listas de 15 valores cada una. 
Informar con un mensaje cuál de las dos listas tiene un valor acumulado mayor 
(Mensajes “Lista 1 mayor “, “Lista 2 mayor”, “Listas iguales”)
*/

#include <iostream>

using namespace std;

#include <array>



main () {
    int lista1 = 0, lista2 = 0, numero;
    
    for (int i = 0; i < 15; i++){
        cout << "Ingrese el valor a agregar para la lista 1: ";
        cin >> numero;
        lista1 += numero;
    }

    for (int i = 0; i < 15; i++)
    {
        cout << "Ingrese el valor a agregar para la lista 2: ";
        cin >> numero;
        lista2 += numero;
    }

    if(lista1 == lista2) 
    {
        cout << "Las listas son iguales" << endl;
    }
    else if (lista1 > lista2)
    {
        cout << "Lista 1 mayor que lista 2" << endl;
    }
    else
    {
        cout << "Lista 2 mayor que lista 1" << endl;
    }
    
    
}