// Se ingresan un conjunto de n alturas de personas por teclado.Mostrar la altura promedio de las personas.

#include <iostream>

using namespace std;

main()
{   
    float alturas, altura, promedio;
    int cantAlturas = 0;
    bool bandera = true;
    
    cout << "Vamos a ingresar la altura de todas las personas.\nSi deseas terminar la carga deseas terminar la carga de datos ingresa 0" << endl;

    while (bandera) {
        cout << "Ingrese la altura: ";
        cin >> altura;
        if (altura == 0){
            bandera = false;
        }
        else {
            alturas += altura;
            cantAlturas += 1;
        }
    }

    promedio = alturas / cantAlturas;

    cout << "------------------------" << endl;
    cout << "El promedio de altura entre las personas es: " << promedio << endl;


}