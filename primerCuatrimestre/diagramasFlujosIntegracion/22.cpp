// Diseñar un programa que permita al usuario ingresar  seis números enteros determinar, el menor de ellos

#include <iostream>

using namespace std;

main () {
    int ingreso, aux = 9999;

    for(int i = 0; i < 6; i++){
        cout << "Ingrese un nro: ";
        cin >> ingreso;
        if ( ingreso < aux) {
            aux = ingreso;
        }
    }

    cout << "El menor nro ingresado: " << aux << endl;
}