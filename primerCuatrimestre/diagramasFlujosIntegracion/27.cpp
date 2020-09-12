/*
Escribir un programa que calcule y visualice el más grande, 
el más pequeño y el promedio de una serie de n números. 
El valor de N se solicitara a principio del programa y los números serán introducidos por el usuario
*/

#include <iostream>

using namespace std;

main ()
{
    int n, mayor = -9999, menor = 9999, promedio, numero, suma = 0;

    cout << "Ingrese cuantos nros se van a ingresar: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero < menor)
        {
            menor = numero;
        }
        else if (numero > mayor)
        {
            mayor = numero;
        }
        
        suma += numero;
    }

    promedio = suma / n;
    
    cout << "El numero menor ingresado es: " << menor << endl;
    cout << "El numero mayor ingresado es: " << mayor << endl;
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;
}