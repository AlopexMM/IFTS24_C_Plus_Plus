/*
Ingresar diez (10) números enteros. 
Informar cuántos de ellos son negativos. 
De esos números negativos debe informarse cuantos son pares. 
Además debe mostrar cual es la suma de los números positivos y cuál es la suma de los números negativos.
*/

#include <iostream>

using namespace std;

main ()
{
    int numero, cantNroNegativos = 0, cantParesNegativos = 0, sumaPositivos = 0, sumaNegativos = 0;

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese un nro negativo o positivo: ";
        cin >> numero;

        if (numero > 0)
        {
            sumaPositivos += numero;
        }
        else if (numero < 0)
        {
            cantNroNegativos++;

            if (numero % 2 == 0)
            {
                cantParesNegativos++;
            }

            sumaNegativos += numero;
        }
        
    }

    cout << "Se ingresaron " << cantNroNegativos << " numeros negativos." << endl;
    cout << "Se ingresaron " << cantParesNegativos << " numeros negativos pares." << endl;
    cout << "La suma de numeros positivos es: " << sumaPositivos << endl;
    cout << "La suma de numeros negativos es: " << sumaNegativos << endl;
}