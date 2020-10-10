// Diseñar un programa que permita al usuario ingresar  seis números enteros determinar, el menor de ellos

#include <iostream>

using namespace std;

int list[6];

void requestNumbers();
void minNumber();

int main () {

    requestNumbers();
    minNumber();
    
    return 0;
}

void requestNumbers() {
    cout << "Por favor ingrese 6 numeros" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "Ingrese un nro: ";
        cin >> list[i];
    }
}

void minNumber() {

    int min = list[0];

    for (int i = 1; i < 6; i++) {
        if (list[i] < min) {
            min = list[i];
        }
    }

    cout << "El nro menor ingresado es: " << min << endl;
}