/*
Leer 3  números enteros, calcular e imprimir producto, suma y el promedio. Mostrar los resultados.
*/

#include <iostream>

using namespace std;

int main() {
    int nrosEnteros[3] = {}, suma = 0, producto = 1, promedio;

    cout << "Ingrese un numero: "; 
    cin >> nrosEnteros[0];
    cout << "Ingrese un numero: ";
    cin >> nrosEnteros[1];
    cout << "Ingrese un numero: ";
    cin >> nrosEnteros[2];

    for (int i = 0; i < 3; i++){
        suma += nrosEnteros[i];
        producto *= nrosEnteros[i];
    }
    promedio = suma / 3;

    cout << "Suma: " << suma << endl;
    cout << "Producto: " << producto << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}