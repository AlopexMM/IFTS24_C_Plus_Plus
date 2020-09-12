#include <iostream>

using namespace std;

/*
Realizar un algoritmo que resuelva los siguientes pasos
Paso 1 Entrada de base y altura desde periférico de entrada por ejemplo teclado 
Paso 2 Cálculo de la superficie, multiplicando la base por la altura 
Pase 3 Salida por pantallas de base, altura y superficie.
*/

int main(){

    int datos[3];

    cout << "Ingrese la base: "; cin >> datos[0];
    cout << "Ingrese la altura: ";cin >> datos[1];
    datos[2] = datos[0] * datos[1];
    
    cout << "Base: " << datos[0] << endl;
    cout << "Altura: " << datos[1] << endl;
    cout << "Superficie: " << datos[2] << endl;


    return 0;
}