/*
Dada una cantidad en pesos, obtener la equivalencia en dólares,
 asumiendo que la unidad cambiaría es un dato desconocido.
*/

#include <iostream>

using namespace std;

int main () {

    int pesos, cotizacion, dolares;

    cout << "Ingrese cuantos pesos tiene: ";cin >> pesos;
    cout << "Ingrese la cotización para la venta de dolares: ";cin >> cotizacion;
    
    dolares = pesos / cotizacion;
    cout << "Usted podria comprar: " << dolares << " dolares\n";

    return 0;
}