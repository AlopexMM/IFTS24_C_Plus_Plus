/*
En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500 ,
 realizar un programa que lea los sueldos que cobra cada empleado e informe cuantos empleados cobran entre 
 $100 y $200 y cuantos cobran más de $300 . 
 Además el programa deberá informar el importe que gasta la empresa en sueldos del personal.
*/

#include <iostream>
#include <array>

using namespace std;

main () {
    array<int, 7> sueldos {300, 500, 200, 100, 350, 465, 115};
    int menor = 0, mayor = 0, suma = 0;

    for (int i = 0; i < sueldos.size(); i++){
        if(sueldos[i] <= 200 && sueldos[i] >= 100){
            menor ++;
        }
        else if (sueldos[i] > 300)
        {
            mayor ++;
        }

        suma += sueldos[i];
    }

    cout << "Empleados que cobran entre 100 y 200 pesos hay: " << menor << endl;
    cout << "Empleados que cobran mas de 300 pesos hay: " << mayor << endl;
    cout << "La empresa gasta " << suma << " pesos en sueldos." << endl;
}