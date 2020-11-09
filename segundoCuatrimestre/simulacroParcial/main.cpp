/*
Examen 2 parcial programación 1
1- Realice una función main
2-Realice una función que cargue una lista de n valores por el usuario
3-Realice una función que cargue una lista de 10 valores al azar, del 1 al 100.
4-Realice una función que ordene la lista de menor a mayor
5-Realice una función que obtenga el mayor valor de la lista
6-Realice una función que obtenga la cantidad de valores menores a 7 de la lista
7-Realice una función donde se elija un numero aleatorio, del 1 al 100, sin decirlo y el usuario intente
adivinarlo una vez. Se le debe informar si gano o perdió.
8-Realice una función que muestre por pantalla un menú con las siguientes opciones
MENÚ
1-Cargar lista
2-Ordenar lista
3-Mostrar lista
4-Mostrar mayor valor
5-Mostrar cantidad de menores a 7
6-Probar
7-Jugar
8-Salir
9-Ejecute la función menú desde el main dentro de un ciclo con bandera con la tecla “8”
10-Ejecute una prueba de las opciones del menú del 1 al 5, con la lista de 10 valores
aleatorios
11-El menú debe mostrar un mensaje de error si no se elige una opción del 1 al 7
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void menu();
int* cargarValores(int tamanioLista = 10, bool azar = true); // Carga valores al azar o con ingreso por el usuario
void ordenarLista(int tamanioLista = 10); // Ordena de menor a mayor la lista con el metodo burbuja
int mayor(int tamanioLista = 10); // Obtiene el mayor valor de la lista
int cuentaValoresMenores(int tamanioLista = 10); // Cuenta cuantos valores de la lista son menores de 7
int generarValorAleatorio(); // Genera un numero al azar del 1 al 100
void imprimirLista(int tamanioLista = 10);
void jugar();

int * listaN; // Se crea un stack de memoria utilizando punteros para poder crear arrays dinamicos en el programa.

int main() {

    cout << "Bienvenido al sistema Mario Mori 1752" << endl;

    menu();

    delete[] listaN; // Se elimina el array listaN de la memoria
    return 0;
}

void menu() {
    
    int seleccion, tamanio;
    bool bandera = true;

    while(bandera) {
        cout << "MENÚ" << endl;
        cout << "1-Cargar lista" << endl;
        cout << "2-Ordenar lista" << endl;
        cout << "3-Mostrar lista" << endl;
        cout << "4-Mostrar mayor valor" << endl;
        cout << "5-Mostrar cantidad de menores a 7" << endl;
        cout << "6-Probar" << endl;
        cout << "7-Jugar" << endl;
        cout << "8-Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> seleccion;

        switch (seleccion)
        {
        case 1:
            cout << "Cual es el tamaño de la lista?" << endl;
            cin >> tamanio;
            listaN = cargarValores(tamanio, false);
            break;
        case 2:
            ordenarLista(tamanio);
            break;
        case 3:
            system("clear");
            imprimirLista(tamanio);
            break;
        case 4:
            system("clear");
            cout << "El valor mayor es: " << mayor(tamanio) << endl;
            break;
        case 5:
            system("clear");
            cout << "Hay " << cuentaValoresMenores(tamanio) << " valores menores a 7." << endl;
            break;
        case 6:
            listaN = cargarValores();
            ordenarLista();
            imprimirLista();
            cout << "El valor mayor es: " << mayor() << endl;
            cout << "Hay " << cuentaValoresMenores() << " valores menores a 7." << endl;
            break;
        case 7:
            system("clear");
            jugar();
            break;
        case 8:
            bandera = false;
            break;
        
        default:
            cout << "No selecciono ninguna opción valida." << endl;
            break;
        }
    }
    
    
}

int* cargarValores(int tamanioLista, bool azar) {
    int* arr = new int[tamanioLista];
    int numero;

    if(azar) {
        for (int i = 0; i < tamanioLista; i++) {
            arr[i] = generarValorAleatorio();
        }
    }
    else {
        for (int i = 0; i < tamanioLista; i++) {
            cout << "Numero entre 1 y 100, si no se respeta esto se pondra un valor aleatorio" << endl;
            cin >> numero;
            if (numero >= 1 && numero <= 100) {
                arr[i] = numero;
            }
            else {
                cout << "No cumple con el rango se cargara un numero al azar" << endl;
                arr[i] = generarValorAleatorio();
            }
        }
    }

    return arr;
}

int generarValorAleatorio() {
    int numero = rand() % 100 + 1;
    return numero;
}

void imprimirLista(int tamanioLista) {
    for (int i = 0; i < tamanioLista; i++) {
        cout << listaN[i] << endl;
    }
}

void ordenarLista(int tamanioLista) {
    int aux;
    for (int i = 1; i < tamanioLista; i++) {
        for (int j = 0; j < tamanioLista - 1; j++) {
            if (listaN[j] > listaN[j + 1]) {
                aux = listaN[j];
                listaN[j] = listaN[j + 1];
                listaN[j + 1] = aux;
            }
        }
    }
}

int mayor(int tamanioLista) {
    int resultado = listaN[0];
    for (int i = 1; i < tamanioLista; i++) {
        if(listaN[i] > resultado) {
            resultado = listaN[i];
        }
    }

    return resultado;
}

int cuentaValoresMenores(int tamanioLista) {
    int resultado = 0;
    for (int i = 0; i < tamanioLista; i++) {
        if ( listaN[i] < 7) {
            resultado += 1;
        }
    }

    return resultado;
}

void jugar() {
    int numero = generarValorAleatorio();
    int numeroUsuario;
    cout << "Vamos a jugar si podes adivinar el numero que estoy pensando del 1 al 100." << endl;
    cin >> numeroUsuario;

    if ( numero == numeroUsuario) {
        cout << "Felicidades adivinaste." << endl;
    }
    else {
        cout << "Lastima estaba pensando en el numero " << numero << endl;
    }
}