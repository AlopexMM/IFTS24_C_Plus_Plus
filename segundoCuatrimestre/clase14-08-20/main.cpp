#include <iostream>
#include <cmath>

const float PI = 3.1416;

using namespace std;

int main() {

    float area, radio;
    bool bandera = true;

    cout << "Para terminar el programa ingrese 0" << endl;

    while (bandera)
    {
        cout << "Ingrese el area del alfajor: ";
        cin >> area;

        if (area == 0)
        {
            bandera = false;
        } else
        {
            radio = sqrt(area / PI);

            if (radio <= 5 && radio >= 3)
            {
                cout << "El alfajor es aceptable para la producción." << endl;
                cout << "El radio es del ingresado es: " << radio << endl;
            }
            else
            {
                cout << "No es aceptable por favor descartar." << endl;
            }
        }
    }
    return 0;
}