/*
Leer 3  números enteros, calcular e imprimir producto, suma y el promedio. Mostrar los resultados.
*/

#include <iostream>

using namespace std;

main() {
    int a, b, c, suma, producto, promedio;

    cout << "Ingrese un numero: "; 
    cin >> a;
    cout << "Ingrese un numero: ";
    cin >> b;
    cout << "Ingrese un numero: ";
    cin >> c;

    suma = a + b + c;
    producto = a * b * c;
    promedio = suma / 3;

    cout << "Suma: " << suma << endl;
    cout << "Producto: " << producto << endl;
    cout << "Promedio: " << promedio << endl;

}