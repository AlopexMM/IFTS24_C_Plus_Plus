/*
2) Realizar un sistema al ingresar una edad por teclado, el sistema informe si la persona a
la que corresponde esa edad es:
a. Menor de edad
b. Adolescente
c. Adulto
d. Mayor de edad
Las condiciones para que se cumplan los puntos son: menor de edad
menor de edad -&gt; menor a 18 años
adolescente -&gt; entre 18 y 28
adulto -&gt; entre 29 y 65
mayor -&gt; más de 65
*/

#include <iostream>

using namespace std;

int main ()
{
    int edad;

    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    if (edad > 0 && edad < 18)
    {
        cout << "La persona es menor de edad." << endl;
    }
    else if (edad >= 18 && edad <= 28)
    {
        cout << "La persona es adolescente." << endl;
    }
    else if (edad > 28 && edad <= 65)
    {
        cout << "La persona es adulta." << endl;
    }
    else if (edad > 65 && edad < 100)
    {
        cout << "La persona es mayor." << endl;
    }
    
    

    return 0;
}