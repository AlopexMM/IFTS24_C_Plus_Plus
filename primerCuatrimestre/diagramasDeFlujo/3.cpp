//Realizar un algoritmo que resuelva la suma de dos valores ingresados por teclado

#include <iostream>

using namespace std;

int main() {

    int valores[2] = {}, suma = 0;

    cout << "Ingrese un numero: "; cin >> valores[0];
    cout << "Ingrese un numero: "; cin >> valores[1];

    suma = valores[0] + valores[1];

    cout << "La suma de los valores ingresados es: " << suma << endl;


    return 0;
}