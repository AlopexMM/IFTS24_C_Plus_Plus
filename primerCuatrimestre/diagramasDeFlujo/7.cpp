/*
Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. 
Dicha calificación se compone de los siguientes porcentajes: 
55% del promedio de sus tres calificaciones parciales. 
30% de la calificación del examen final. 
15% de la calificación de un trabajo final.
*/

#include <iostream>

using namespace std;

main () {

    float promedioCalificaciones = 55;
    float calExamenFinal = 30;
    float calTrabajoFinal = 15;

    float notaFinal = ((promedioCalificaciones + calExamenFinal + calTrabajoFinal) / 3) * 10 / 100;

    cout << "La calificación final sera: " << notaFinal << endl;

}