//Realizar un algoritmo que resuelva la suma de dos valores ingresados por teclado

#include <iostream>

using namespace std;

int main() {

    int valor1, valor2, suma = 0;

    cout << "Ingrese un numero: "; cin >> valor1;
    cout << "Ingrese un numero: "; cin >> valor2;

    suma = valor1 + valor2;

    cout << "La suma de los valores ingresados es: " << suma << endl;


    return 0;
}