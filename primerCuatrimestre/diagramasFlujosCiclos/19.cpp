// Hacer un programa para que el usuario ingrese 10 números y muestre su suma de los mismos.

#include <iostream>

using namespace std;

main()
{
    float numero, suma = 0;
    for(int i = 0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> numero;
        suma += numero;
        cout << "La sumatoria es: " << suma << endl;
        cout << "---------------------------" << endl;
    }

}