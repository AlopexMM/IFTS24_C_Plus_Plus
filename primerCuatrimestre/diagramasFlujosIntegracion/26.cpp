/*
Desarrollar un programa que permita cargar n números enteros y 
luego nos informe cuantos valores fueron pares y cuantos impares. 
Emplear el operador “%” en la condición de la estructura condicional. 
(Si valor%2 =0 , es par)
*/

#include <iostream>

using namespace std;

main ()  
{
    int numero, pares = 0, impares = 0;
    bool bandera = true;

    cout << "Para acabar con el programa ingrese el valor 0" << endl;

    while(bandera)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero == 0)
        {
            bandera = false;
        }
        else if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }

    cout << "Numeros ingresados pares: " << pares << endl;
    cout << "Numeros ingresados impares: " << impares << endl;

}