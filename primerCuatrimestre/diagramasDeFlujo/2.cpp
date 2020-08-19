/*
Una tienda ofrece un descuento del 15% sobre el total de cada  compra y
 un cliente desea saber cuánto deberá pagar finalmente por su compra.
*/

#include <iostream>

using namespace std;

int main () {
    int subtotal = 1000, porcentajeDescuento = 15, descuentoAplicado, total;

    total = subtotal * porcentajeDescuento / 100;
    descuentoAplicado = subtotal - total;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Porcentaje de descuento: " << porcentajeDescuento << "%" << endl;
    cout << "--------------------------" << endl;
    cout << "Descuento en pesos aplicado: " << descuentoAplicado << endl;
    cout << "Total a pagar: " << total << endl;
    

}