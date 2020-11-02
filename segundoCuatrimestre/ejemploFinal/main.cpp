/*
Un hotel que cuenta con 20 habitaciones solicita el desarrollo de un programa para administrar los alquileres
de las mismas.
Las habitaciones están numeradas del 1 al 20, las del primer piso (del nro 1 al 10) son dobles y las
habitaciones del segundo piso (del nro 11 al 20) son triples.
Se solicita desarrollar un programa que muestre al usuario 2 opciones
1) Alquilar habitación
2) Mostrar habitaciones Libres
Si el usuario ingresa la opción 1 el sistema le solicita que ingrese el número de habitación y registra el
alquiler de la misma, validando previamente que se encuentre libre. Si estuviera ocupada, mostrar un
mensaje indicándolo.
Si el usuario ingresa la opción 2 el sistema deberá mostrar la cantidad de habitaciones libres de cada tipo
(doble y triple)
Implementar un vector de 20 posiciones donde cada posición represente una habitación y almacene un
valor 1 si esta alquilada y 0 si esta libre.
Implementar la función int Habitaciones_Dobles_Libres(void) y la función int
Habitaciones_Triples_Libres(void) para mostrar los datos solicitados en la opción 2.
*/

#include <iostream>

using namespace std;

void free_double_rooms();
void free_triple_rooms();
int menu();
void rent_room();
bool check_room(int number_of_room);

int rooms[20];

int main(){
    
    bool flag = true;

    for (int i = 0; i < 20; i++) {
        rooms[i] = 0;
    }

    cout << "Bienvenido al programa de hoteleria AlopexMM" << endl;

    while(flag){
        switch (menu())
        {
        case 1:
            rent_room();
            break;
        case 2: {
            free_double_rooms();
            free_triple_rooms();
            break;
        }
        case 3:
            flag = false;
            break;
        default:
            cout << "Opción incorrecta" << endl;
            break;
        }
    }
    return 0;
}

int menu() {
    int choice;
    
    cout << "1) Alquilar habitación" << endl;
    cout << "2) Mostrar habitaciones Libres" << endl;
    cout << "3) Salir del programa" << endl;
    cin >> choice;

    return choice;

}

void rent_room() {
    bool flag = true;
    int choice;

    while(flag) {
        cout << "Ingrese el nro de habitación que desea alquilar: ";
        cin >> choice;
        if (choice > 0 && choice <= 20) {
            bool check = check_room(choice);
            if (check) {
                rooms[choice - 1] = 1;
                flag = false;
            }
            else {
                cout << "La habitacion no se encuentra disponible." << endl;
                cout << "Las habitaciones disponibles dobles son: " << endl;
                free_double_rooms();
                cout << "Las habitaciones disponibles triples son: " << endl;
                free_triple_rooms();
            }
        }
        else {
            cout << "No existe la habitación en nuestro hotel" << endl;
        }
    }

}

void free_double_rooms() {
    for (int i = 0; i < 10; i++) {
        if (rooms[i] == 0) {
            cout << "Habitación " << i + 1 << " disponible." << endl;
        }
    }
}
void free_triple_rooms() {
    for (int i = 10; i < 20; i++) {
        if (rooms[i] == 0) {
            cout << "Habitación " << i + 1 << " disponible." << endl;
        }
    }
}

bool check_room(int number_of_room) {
    if (rooms[number_of_room - 1] == 0) {
        return true;
    }
    else
    {
        return false;
    }
    
} 