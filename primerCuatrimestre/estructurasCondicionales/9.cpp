/*
Dibuja un diagrama de flujo para obtener las comisiones por ventas de un vendedor.
Los datos que se ingresan son monto vendido y código de vendedor 
Si el código de vendedor es menor a 100
 las comisiones son de un 30%, si el código esta entre 100 y 200 son del 20% y si es mayor a 200 10%.
Mostrar el código de vendedor, el monto vendido y el valor de las comisiones.
*/

#include <iostream>

using namespace std;

main () {
    float venta, comision;
    int idVendedor;

    cout << "Ingrese el codigo de vendedor: ";
    cin >> idVendedor;

    cout << "Ingrese el monto vendido: ";
    cin >> venta;

    if (idVendedor > 200){
        comision = venta * 10 / 100;
    } 
    else if (idVendedor > 100 && idVendedor < 200){
        comision = venta * 20 / 100;
    }
    else if (idVendedor < 100) {
        comision = venta * 30 / 100;
    }

    //cout.precision(3);
    cout << "----------------------" << endl;
    cout << "Vendedor: " << idVendedor << endl;
    cout << "Vendio: $" << venta << endl;
    cout << "Comision: $" << comision << endl;    
}