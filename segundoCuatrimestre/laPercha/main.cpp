/*Enunciado
Una empresa de perchas triangulares nos pide realizar un programa que permita al usuario ingresar los
lados a, b y c de una percha.
La computadora informa si la percha es o no válida (ver 1). En caso afirmativo, además informa si la
percha resultó ser equilátero, isósceles o escaleno.(ver 2)
(1) Según el teorema de desigualdad triangular, un triángulo es válido si se cumple que cada uno delos
lados no puede ser más largo que la suma de los otros dos.
(2) - Una Percha es equilátera cuando tiene sus tres lados iguales. - Una Percha es isósceles cuando tiene
dos de sus lados iguales. - Una Percha es escaleno cuando tiene sus tres lados desiguales
*/

#include<iostream>

using namespace std;

void menu(int triangulo[]);
bool esTriangulo(int triangulo[]);
bool imprimirTipoTriangulo(int triangulo[]);

int main(){
    bool bandera = true, verificador = false;
    int medidas[3];

    while(bandera) {
        menu(medidas);
         verificador = esTriangulo(medidas);
         if (verificador) {
             bandera = imprimirTipoTriangulo(medidas);
         }
    }

    return 0;
}

void menu(int triangulo[]) {
    cout << "Bienvenido" << endl;
    cout << "Por favor ingrese las medidas de cada lado" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Dato " << i + 1 << ": ";
        cin >> triangulo[i];
    }
}

bool esTriangulo(int triangulo[]){
    bool resultado = false;
    if(triangulo[0] <= (triangulo[1] + triangulo[2])) {
        if (triangulo[1] <= (triangulo[0] + triangulo[2])){
            if (triangulo[2] <= (triangulo[0] + triangulo[1])) {
                resultado = true;
            }
        }
    }
    
    return resultado;
}

bool imprimirTipoTriangulo(int triangulo[]) {
    int suma = 0; 
    for (int i = 0; i < 3; i++) suma += triangulo[i];
    if ((suma - (triangulo[0]*3)) == 0) {
        cout << "Es un triangulo equilatero" << endl;
    } else {
        if ( triangulo[0] == triangulo[1] || triangulo[1] == triangulo[2] || triangulo[2] == triangulo[0]) {
            cout << "Es un triangulo isoceles" << endl;
        } else {
            cout << "Es un triangulo escaleno" << endl;
        }
    }
    return false;
}
