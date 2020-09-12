#include <iostream>
#include <math.h>

using namespace std;


int main ()
{
    float peso, imc, estatura;
    int edad;

    // Solicitamos los datos

    cout << "Ingrese su estatura: ";
    cin >> estatura;

    cout << "Ingrese su peso en kilogramos: ";
    cin >> peso;

    cout << "Ingrese su edad: ";
    cin >> edad;

    // Calculamos el IMC

    imc = peso / sqrt(estatura);
    
    // Hacemos las verificaciones segun la tabla y mostramos en pantalla

    if(edad < 45 && imc < 22.0)
    {
        cout << "Su condicion de riesgo es baja" << endl;
    }
    else if (edad >= 45 && imc < 22.0)
    {
        cout << "Su condicion de riesgo es medio" << endl;
    }
    else if (edad < 45 && imc >= 22.0)
    {
        cout << "Su condicion de riesgo es medio" << endl;
    }
    else if (edad >= 45 && imc >= 22.0)
    {
        cout << "Su condicion de riesgo es alta" << endl;
    }
    
    return 0;
}