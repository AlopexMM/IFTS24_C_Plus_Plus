/*
Hacer un algoritmo para un programa que calcule el pago que hacen un grupo de personas para ver una película 
teniendo en cuenta que si el grupo es menor de 8 personas el pago es de 1.5 pesos por persona y 
para grupos de 8 personas o más el pago es 0.5 pesos por persona.
*/

#include <iostream>

using namespace std;

main () {
    int nroPersonas;
    float total;

    cout << "Ingrese cuantas personas van a ingresar a ver la película: ";
    cin >> nroPersonas;

    if ( nroPersonas >= 8) {
        total = nroPersonas * 1.5;
    } else
    {
        total = nroPersonas * 0.5;
    }

    cout << "Deben pagar $" << total << endl;
    
}