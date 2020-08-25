// Diseñar un algoritmo que calcule la suma de los 20 primeros números impares

#include <iostream>

using namespace std;

int main()
{
    int i = 1, cantNumeros = 0, suma = 0;
    bool bandera = true;

    while(bandera){
        if(i % 2 != 0){
            suma += i;
            cantNumeros += 1;
            i += 1;
        }
        else {
            i += 1;
        }
        if(cantNumeros == 20){
            bandera = false;
        }
    }

    cout << "La suma de los primeros 20 números impares es: " << suma << endl;

    return 0;
}