// Hacer un programa para que el usuario ingrese 10 números y muestre su suma de los mismos.

#include <iostream>

using namespace std;

int main()
{
    float suma = 0;
    float numeros[10] = {};

    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    for(int i = 0; i < 10; i++){
        suma += numeros[i];
    }

    cout << "La sumatoria es: " << suma << endl;

    return 0;
}