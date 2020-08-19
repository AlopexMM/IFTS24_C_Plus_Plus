/*
Un negocio de venta de medialunas tiene una promoción mediante la cual si se compra más de una docena se 
efectúa un descuento del 10% sobre el total y si se compra más de dos docenas se efectúa un descuento 
del 20% sobre el total. 
El precio de la docena es de $ 84 y el de cada medialuna suelta $ 7. 
Hacer un programa para ingresar la cantidad de medialunas compradas y 
emitir el total a pagar por el cliente.
*/

#include <iostream>

using namespace std;

int main() {

    float docena = 84, medialuna = 7, cantidadMedialunas, total, medialunasFaltantes;

    cout << "Ingrese cuantas medialunas lleva: ";
    cin >> cantidadMedialunas;

    if (cantidadMedialunas == 12)
    {
        total = docena / 1.10;
    }
    else if (cantidadMedialunas > 12 && cantidadMedialunas < 24)
    {
        medialunasFaltantes = cantidadMedialunas - 12;
        total = (docena / 1.10) + (medialunasFaltantes * 7);
    }
    else if (cantidadMedialunas == 24)
    {
        total = docena * 2 / 1.20;
    } 
    else if (cantidadMedialunas > 24)
    {
        medialunasFaltantes = cantidadMedialunas - 24;
        total = (docena * 2 / 1.20) + (medialunasFaltantes * 7);
    }
    else if (cantidadMedialunas < 12)
    {
        total = cantidadMedialunas * 7;
    }

    cout << "Total a pagar es: " << total << endl;

    return 0;
}