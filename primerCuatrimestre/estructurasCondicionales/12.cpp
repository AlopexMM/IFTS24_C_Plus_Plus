/*
Se desea escribir los nombres de los días de la semana en función de la variable d (día) introducida por 
teclado.
1(Lunes) – 2(martes) – 3(Miércoles)……..6(Sábado) – 7(Domingo)
*/

#include <iostream>

using namespace std;

main()
{
    int d;

    cout << "Ingrese un numero del 1 al 7: ";
    cin >> d;

    switch (d)
    {
    case 1:
        cout << "Lunes" << endl;
        break;
    case 2:
        cout << "Martes" << endl;
        break;
    case 3:
        cout << "Mirecoles" << endl;
        break;
    case 4:
        cout << "Jueves" << endl;
        break;
    case 5:
        cout << "Viernes" << endl;
        break;
    case 6:
        cout << "Sabado" << endl;
        break;
    case 7:
        cout << "Domingo" << endl;
        break;
    default:
        cout << "El numero ingresado no se encuentra entre 1 y 7" << endl;
        break;
    }
}