// Se ingresan un conjunto de n alturas de personas por teclado.Mostrar la altura promedio de las personas.

#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    float altura, promedio = 0;
    vector<float> alturas;
    bool bandera = true;
    
    cout << "Vamos a ingresar la altura de todas las personas.\nSi deseas terminar la carga deseas terminar la carga de datos ingresa 0" << endl;

    while (bandera) {
        cout << "Ingrese la altura: ";
        cin >> altura;
        if (altura == 0){
            bandera = false;
        }
        else {
            alturas.push_back(altura);
        }
    }

    for(int i = 0; i < (int)alturas.size(); i++){
        promedio += alturas[i];
    }
    promedio = promedio / (int)alturas.size();

    cout << "------------------------" << endl;
    cout << "El promedio de altura entre las personas es: " << promedio << endl;

    return 0;
}