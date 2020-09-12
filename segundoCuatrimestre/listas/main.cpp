/*
Ejercicio sobre listas
a-Hacer una función main con las librerías que usamos
b-Hacer un menú de 10 opciones y una opción por defecto para que diga “Opción
invalida”.
C-Hacer un ciclo de bandera que pregunte “Desea volver al menú principal”
Opción 1: Cargar lista de 28 datos.
Opción 2: Cargar lista de n datos.
Opción 3: Cargar o modificar un solo dato de la lista (setter).
Opción 4: Mostrar un dato de la lista (getter).
Opción 5: Mostrar el valor máximo de la lista.
Opción 6: Mostrar el valor mínimo de la lista.
Opción 7: Mostrar el valor promedio de la lista.
Opción 8: Mostrar los valores impares de la lista.
Opción 9: Mostrar todos los datos de la lista en orden ingresado (cola).
Opción 10: Mostrar todos los datos de la lista en orden inverso (pila).
Opción 11: Ordenar de menor a mayor los datos.
Opción 12: Salir del programa.
*/

#include <iostream>

using namespace std;

int main () {

    int select, len = 28;
    int flag = true;
    int* listN;

    cout << "**** Bienvenido a sistemas AlopexMM ****" << endl;
    while(flag){
        cout << "Por favor seleccione la operacion que desea realizar" << endl;
        cout << "Opción 1: Cargar lista de 28 datos." << endl;
        cout << "Opción 2: Cargar lista de n datos." << endl;
        cout << "Opción 3: Cargar o modificar un solo dato de la lista (setter)." << endl;
        cout << "Opción 4: Mostrar un dato de la lista (getter)." << endl;
        cout << "Opción 5: Mostrar el valor máximo de la lista." << endl;
        cout << "Opción 6: Mostrar el valor mínimo de la lista." << endl;
        cout << "Opción 7: Mostrar el valor promedio de la lista." << endl;
        cout << "Opción 8: Mostrar los valores impares de la lista." << endl;
        cout << "Opción 9: Mostrar todos los datos de la lista en orden ingresado (cola)." << endl;
        cout << "Opción 10: Mostrar todos los datos de la lista en orden inverso (pila)." << endl;
        cout << "Opción 11: Ordenar de menor a mayor los datos." << endl;
        cout << "Opción 12: Salir del programa." << endl;
        cout << "Seleccion: ";
        cin >> select;
        
        switch (select)
        {
        case 1:
            {
                listN[len];
                for (int i = 0; i < 28; i++) {
                    cout << "Dato " << i+1 << ": ";
                    cin >> listN[i];
                }
                break;
            }
        case 2: {
            cout << "De que tamaño es la lista?" << endl;
            cout << "Tamaño: ";
            cin >> len;
            listN[len];
            for (int i = 0; i < len; i++){
                cout << "Dato " << i+1 << ": ";
                cin >> listN[i];
            }
            break;
        }   
        case 3: {
            // Setter
            int position;
            cout << "Que posicion de la lista desea modificar: ";
            cin >> position;
            if (position < len) {
                cout << "Dato " << position << ": ";
                cin >> listN[position - 1];
            } else {
                cout << "Posicion seleccionada no existe en la lista." << endl;
            }
            
            break;
        }
        case 4: {
            // Getter
            int position;
            cout << "Que posicion desea ver: ";
            cin >> position;
            if (position < len ) {
                cout << "Dato " << position << ": " << listN[position - 1] << endl;
            } else {
                cout << "Posicion seleccionada no existe en la lista." << endl;
            }
            
            break;
        }
        case 5: {
            
            int maxData = -10000;
            for (int i = 0; i < len; i++ ) {
                if (listN[i] > maxData) {
                    maxData = listN[i];
                }
            }
            cout << "El Dato mas elevado es: " << maxData << endl;
            break;
        }
                
        case 6: {
            int minData = 10000;
            for (int i = 0; i < len; i++ ) {
                if (listN[i] < minData) {
                    minData = listN[i];
                }
            }
            cout << "El Dato menos elevado es: " << minData << endl;
            break;
        }
        case 7: {
            int average, sum = 0;
            for (int i = 0; i < len; i++) {
                sum += listN[i];
            }

            average = sum / len;
            cout << "El promedio es: " << average << endl;
            break;
        }
                
        case 8: {
            for (int i = 0; i < len; i++) {
                if ((listN[i]%2) != 0) {
                    cout << listN[i] << endl;
                }
            }
            break; 
        }
               
        case 9: {
            for (int i = 0; i < len; i++){
                cout << listN[i] << endl;
            }
            break;
        }
                
        case 10: {
            for (int i = len - 1; i >= 0; i--) {
                cout << listN[i] << endl;
            }
            break; 
        }
               
        case 11: {
            int aux;
            for (int i = 1; i < len; i++){
                for (int j = 0; j < len - i; j++) {
                    if (listN[j] > listN[j + 1]){
                        aux = listN[j];
                        listN[j] = listN[j+1];
                        listN[j+1] = aux;
                    }
                }
            }
            for (int i = 0; i < len; i++){
                cout << listN[i] << endl;
            }
            break;
        }
                
        case 12: {
            flag = false;
            break;
        }
                
        default:
            cout << "Opción invalida" << endl;
            break;
        }
    }
    

    return 0;
}