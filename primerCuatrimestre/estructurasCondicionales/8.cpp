/*
Realizar un algoritmo que calcule el importe total a abonar en una factura, 
teniendo en cuenta que si el importe total supera los 1000$  se aplica un descuento del 20%.
*/

#include <iostream>

using namespace std;

main(){
    float montoFactura, montoDescuento;
    int descuento = 20;

    cout << "Ingrese el monto total de la factura: ";
    cin >> montoFactura;

    if (montoFactura >= 1000){
        montoDescuento = montoFactura * descuento / 100;
        montoFactura = montoFactura - montoDescuento;

        cout << "Monto final con descuento aplicado: " << montoFactura << endl;
    } else
    {
        cout << "No cumple el requerimiento para aplicar un descuento\nEl monto de la factura es: " << montoFactura << endl;
    }
    
}