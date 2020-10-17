/*
Realizar un programa que permita cargar dos listas de 15 valores cada una. 
Informar con un mensaje cuál de las dos listas tiene un valor acumulado mayor 
(Mensajes “Lista 1 mayor “, “Lista 2 mayor”, “Listas iguales”)
*/

#include <iostream>

using namespace std;

void llenarArray(int lista[], int tamanoLista);
string compararArrays(int lista1[], int lista2[], int tamanoListas);

int main () {
    int lista1[15];
    int lista2[15];
    
    cout << "Primera lista." << endl;
    llenarArray(lista1, 15);
    cout << "Segunda lista." << endl;
    llenarArray(lista2, 15);

    cout << compararArrays(lista1, lista2, 15) << endl;
    
    return 0;
}

void llenarArray(int lista[], int tamanoLista) {
    
    for (int i = 0; i < tamanoLista; i++) {
        cout << "Ingrese el valor " << i + 1 << ":";
        cin >> lista[i];
    }
}

string compararArrays(int lista1[], int lista2[], int tamanoListas) {
    cout << "------------------" << endl;
    bool sonIguales = true;
    for (int i = 0; i < tamanoListas; i++) {
        if (lista1[i] != lista2[i]) {
            sonIguales = false;
            break;
        }
    }

    if (sonIguales) {
        return "Son iguales.";
    } else {
        return "Son distintas.";
    }
}