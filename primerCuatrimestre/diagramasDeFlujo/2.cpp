/*
Una tienda ofrece un descuento del 15% sobre el total de cada  compra y
 un cliente desea saber cuánto deberá pagar finalmente por su compra.
*/

#include <iostream>

using namespace std;

int main () {
    int subtotal = 0, porcentajeDescuento = 15, descuentoAplicado, total, item, itemNumber = 0;
    int itemsTicket[10] = {};
    bool flag = true;

    cout << "Ingrese los articulos del ticket se permite un maximo de 10 por ticket" << endl;
    cout << "Si ingresa el monto 0 el sistema interpretara que no hay mas items" << endl;

    while(flag) {
        
        cout << "Ingrese el monto del item nro " << itemNumber + 1 << ": ";
        cin >> item;

        if (item > 0)
        {
            itemsTicket[itemNumber] = item;
        }
        else
        {
            flag = false;
        }

        itemNumber += 1;

        if (itemNumber == 10){
            flag = false;
        }

    }

    for (int i = 0; i < 10; i++ ){
        subtotal = subtotal + itemsTicket[i];
    }

    total = subtotal - (subtotal * porcentajeDescuento / 100);
    descuentoAplicado = subtotal * porcentajeDescuento / 100;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Porcentaje de descuento: " << porcentajeDescuento << "%" << endl;
    cout << "--------------------------" << endl;
    cout << "Descuento en pesos aplicado: " << descuentoAplicado << endl;
    cout << "Total a pagar: " << total << endl;
}