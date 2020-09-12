/*
Se desea conocer el promedio de los números mayores que cero, en una serie de números ingresados por el usuario. 
De los cuales no se sabe la cantidad, haciendo uso de una bandera,
 diseñe un programa en el cual el usuario ingrese los números que desee.
*/

#include <iostream>

using namespace std;

main ()
{
    int suma = 0, promedio, cantNumeros = 0, numero;
    bool bandera = true;

    cout << "Para terminar el programa ingrese el nro 0" << endl;

    while (bandera)
    {
        cout << "Ingrese un nro: ";
        cin >> numero;

        if (numero > 0)
        {
            suma += numero;
            cantNumeros++;
        }
        else if (numero == 0)
        {
            bandera = false;
        }
        
    }

    promedio = suma / cantNumeros;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

}
