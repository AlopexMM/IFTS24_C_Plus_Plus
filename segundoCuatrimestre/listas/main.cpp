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

/*
Voy a dividir el programa en dos switch uno va a consultar el tamaño de la lista y 
el otro va a tener las opciones que trabajan con la lista.

Quedarian de la siguiente forma las opciones de cada switch

switch 1
Opción 1: Cargar lista de 28 datos.
Opción 2: Cargar lista de n datos.
Opción 3: Salir del programa.

switch 2
Opción 1: Cargar o modificar un solo dato de la lista (setter).
Opción 2: Mostrar un dato de la lista (getter).
Opción 3: Mostrar el valor máximo de la lista.
Opción 4: Mostrar el valor mínimo de la lista.
Opción 5: Mostrar el valor promedio de la lista.
Opción 6: Mostrar los valores impares de la lista.
Opción 7: Mostrar todos los datos de la lista en orden ingresado (cola).
Opción 8: Mostrar todos los datos de la lista en orden inverso (pila).
Opción 9: Ordenar de menor a mayor los datos.
Opción 10: Salir del programa.
*/

#include <iostream>

using namespace std;

int menu1(); // switch 1
int menu2(); // switch 2
bool switch1();
bool switch2(int list[], int sizeOfList); // Investigando encontre esta solución para pasar vectores a una función
int requestData(int i); 
void setter(int list[], int sizeOfList);
void getter(int list[], int sizeOfList);
void printMaxValue(int list[], int sizeOfList); 
void printMinValue(int list[], int sizeOfList);
void printAverage(int list[], int sizeOfList);
void printOddNumbers(int list[], int sizeOfList);
void printNumbersTailOrder(int list[], int sizeOfList);
void printNumbersReverseOrder(int list[], int sizeOfList);
void orderMinMax(int list[], int sizeOfList);
void wrongPosition();

int main () {
    
    int flag = true;

    cout << "**** Bienvenido a sistemas AlopexMM ****" << endl;
    while(flag){
        flag = switch1();        
    }
    

    return 0;
}

int menu1() {
    int select;
    cout << "Por favor seleccione la operacion que desea realizar" << endl;
    cout << "Opción 1: Cargar lista de 28 datos." << endl;
    cout << "Opción 2: Cargar lista de n datos." << endl;
    cout << "Opción 3: Salir del programa." << endl;
    cout << "Seleccion: ";
    cin >> select;
    cout << "-----------------------------------" << endl;

    return select;
}

int menu2() {
    int select;
    cout << "Opción 1: Cargar o modificar un solo dato de la lista." << endl;
    cout << "Opción 2: Mostrar un dato de la lista." << endl;
    cout << "Opción 3: Mostrar el valor máximo de la lista." << endl;
    cout << "Opción 4: Mostrar el valor mínimo de la lista." << endl;
    cout << "Opción 5: Mostrar el valor promedio de la lista." << endl;
    cout << "Opción 6: Mostrar los valores impares de la lista." << endl;
    cout << "Opción 7: Mostrar todos los datos de la lista en orden ingresado (cola)." << endl;
    cout << "Opción 8: Mostrar todos los datos de la lista en orden inverso (pila)." << endl;
    cout << "Opción 9: Ordenar de menor a mayor los datos." << endl;
    cout << "Opción 10: Salir del programa." << endl;
    cin >> select;
    cout << "-----------------------------------" << endl;

    return select;
}

bool switch1() {
    /* Este switch administra la carga de datos en la lista
       Decidi dividirlo en dos partes ya que en las funciones voy a agregar una funcion mas 
       que permite calcular el tamaño de la lista ya que este varia dependiendo de si selecciono la 
       opcion 1 o la opcion 2
    */
    bool flagSwitch = true;
    while (flagSwitch)
    {
        switch(menu1()) {
            case 1: {
                // Le asignamos el tamaño a la lista creada fuera de main
                int listD[28];
                for (int i = 0; i < 28; i++) {
                    listD[i] = requestData(i); // Esta función la modifique para llamarla que solo nos pida el dato y lo devuelva
                }
                flagSwitch = switch2(listD, 28);
                break;
            }
            case 2: {
                // Solicitamos cual va a ser el tamaño de la lista y se lo asignamos
                int len;
                cout << "Cual es el tamaño de la lista: ";
                cin >> len;

                int listN[len];
                for (int i = 0; i < len; i++) {
                    listN[i] = requestData(i);
                }
                flagSwitch = switch2(listN, len);
                break;
            }
            case 3: {
                flagSwitch = false;
            }
            default: {
                wrongPosition();
                break;
            }
        }
    }
    return false;
    
}

bool switch2(int list[], int sizeOfList) {
    /* Este switch administra las opciones que trabajan con la lista con datos cargados
       Como al switch le pasamos la lista que creamos en la anterior y a cada función le pasamos la lista
       todas las funciones vana a alterar la lista que se encuentra en memoria
       con esto evitamos crear copias de listas y por ende consumimos menos memorio ;)
    */

    bool flagSwitch = true;
    while (flagSwitch)
    {
        switch (menu2())
        {
        case 1: {
            setter(list, sizeOfList);
            break;
        }

        case 2: {
            getter(list, sizeOfList);
            break;
        }

        case 3: {
            printMaxValue(list, sizeOfList);
            break;
        }

        case 4: {
            printMinValue(list, sizeOfList);
            break;
        }
        case 5: {
            printAverage(list, sizeOfList);
            break;
        }
        case 6: {
            printOddNumbers(list, sizeOfList);
            break;
        }

        case 7: {
            printNumbersTailOrder(list, sizeOfList);
            break;
        }

        case 8: {
            printNumbersReverseOrder(list, sizeOfList);
            break;
        }

        case 9: {
            orderMinMax(list, sizeOfList);
            break;
        }

        case 10: {
            flagSwitch = false;
        }
        
        default: {
            wrongPosition();
            break;
        }
            
        }
    }
    
    return false;
    
}


int requestData(int i) {
    // Solicita i para mostrar en pantalla la posicion que estamos cargando
    int data;
    cout << "Dato " << i + 1 << ":";
    cin >> data;
    return data;
}

void setter(int list[], int sizeOfList) {
    int position;
    cout << "Que posicion de la lista desea modificar: ";
    cin >> position;
    if (position < sizeOfList) {
        cout << "Dato " << position << ": ";
        cin >> list[position - 1];
    } else {
        wrongPosition();
    }

}

void getter(int list[], int sizeOfList) {
    int position;
    cout << "Que posicion desea ver: ";
    cin >> position;
    if (position < sizeOfList) {
        cout << "Dato " << position << ": " << list[position - 1] << endl;
    } else {
        wrongPosition();
    }
}

void printMaxValue(int list[], int sizeOfList) {
    int maxData = list[0];
    for (int i = 1; i < sizeOfList; i++ ) {
        if (list[i] > maxData) {
            maxData = list[i];
        }
    }
    cout << "El dato mas elevado es: " << maxData << endl; 
}

void printMinValue(int list[], int sizeOfList) {
    int minData = list[0];
    for (int i = 1; i < sizeOfList; i++ ) {
        if (list[i] < minData) {
            minData = list[i];
        }
    }
    cout << "El dato menos elevado es: " << minData << endl;
}

void printAverage(int list[], int sizeOfList) {
    int average, sum = 0;
    for (int i = 0; i < sizeOfList; i++) {
        sum += list[i];
    }

    average = sum / sizeOfList;
    cout << "El promedio es: " << average << endl;
}

void printOddNumbers(int list[], int sizeOfList){
    for (int i = 0; i < sizeOfList; i++) {
        if ((list[i]%2) != 0) {
            cout << list[i] << endl;
        }
    }
}

void printNumbersTailOrder(int list[], int sizeOfList) {
    for (int i = 0; i < sizeOfList; i++) {
        cout << list[i] << endl;
    }
}

void printNumbersReverseOrder(int list[], int sizeOfList) {
    for (int i = sizeOfList - 1; i >= 0; i--) {
        cout << list[i] << endl;
    }
}

void orderMinMax(int list[], int sizeOfList) {
    int aux;
    for (int i = 1; i < sizeOfList; i++) {
        for (int j = 0; j < sizeOfList - i; j++) {
            if (list[j] > list[j + 1]) {
                aux = list[j];
                list[j] = list[j+1];
                list[j+1] = aux;
            }
        }
    }
    printNumbersTailOrder(list, sizeOfList);
}

void wrongPosition() {
    cout << "Posicion seleccionada no existe en la lista." << endl;
}

