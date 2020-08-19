#include <iostream>

using namespace std;

/*
Realizar un algoritmo que resuelva los siguientes pasos
Paso 1 Entrada de base y altura desde periférico de entrada por ejemplo teclado 
Paso 2 Cálculo de la superficie, multiplicando la base por la altura 
Pase 3 Salida por pantallas de base, altura y superficie.
*/

int main(){

    int base, altura, superficie;

    cout << "Ingrese la base: "; cin >> base;
    cout << "Ingrese la altura: ";cin >> altura;
    superficie = base * altura;
    
    cout << "Base: " << base << endl;
    cout << "Altura: " << altura << endl;
    cout << "Superficie: " << superficie << endl;


    return 0;
}