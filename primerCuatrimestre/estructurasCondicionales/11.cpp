// Realizar un algoritmo que determine  si un número es par o impar

#include <iostream>

using namespace std;

main()
{
    int a;

    cout << "Ingrese un numero: ";
    cin >> a;

    if (a % 2 == 0){
        cout << a << " es un numero par" << endl;
    }
    else
    {
        cout << a << " es un numero inpar" << endl;
    }
    
}