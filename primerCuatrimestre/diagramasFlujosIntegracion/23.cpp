// Escribir un programa que solicite ingresar 10 notas de alumnos y 
// nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores

#include <iostream>

using namespace std;

main () {

    int nota, mayor = 0, menor = 0;

    for (int i = 0; i < 10; i++){
        cout << "Ingrese la nota del alumno: ";
        cin >> nota;
        if(nota >= 7){
            mayor++;
        }
        else
        {
            menor++;
        }
    }

    cout << "Alumnos ingresados con la nota mayor o igual a 7 hay: " << mayor << endl;
    cout << "Alumnos ingresados con la nota menor a 7 hay: " << menor << endl;
}

