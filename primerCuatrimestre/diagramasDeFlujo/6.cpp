/*
Un  cliente realizo una compra y necesita saber el importe del IVA de la misma. 
Realizar un algoritmo que dado el importe de una factura calcular el valor correspondiente al IVA.
*/

#include <iostream>


using namespace std;

main () {
    float montoFactura, iva, montoSinIva, montoIva;

    cout << "Ingrese el monto de la factura: ";
    cin >> montoFactura;
    cout << "Ingrese la alicuota de IVA: ";
    cin >> iva;

    montoSinIva = montoFactura / ((iva / 100) + 1);
    montoIva = montoFactura - montoSinIva;
    cout << "El monto de IVA cobrado es: " << montoIva << endl;

}