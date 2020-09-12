// Realiza un diagrama de flujo para obtener el menor de 2 números ingresados

#include<iostream>

using namespace std;

main () 
{
    int a, b;

    cout << "Ingrese un nro: ";
    cin >> a;
    cout << "Ingrese un nro: ";
    cin >> b;

    if (a < b) {
        cout << "El numero " << a << " es menor que " << b << endl;
    }
    else if (b < a)
    {
        cout << "El numero " << b << " es menor que " << a << endl;
    }
    else
    {
        cout << "El numero " << a << " y " << b << " son iguales" << endl;
    }
    
    
}