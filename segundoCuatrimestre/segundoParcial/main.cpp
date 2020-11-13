/*
Segundo parcial Programación 1

A- Escriba un programa que juegue “adivina el número” como sigue: el programa
selecciona el número a adivinar eligiendo al azar un entero entre 1 y 1000. Luego debe
presentar: “Tengo un número entero entre 1 y 1000.¿Puede adivinar mi número? Por
favor introduzca su primer intento.”
Después el jugador teclea algún número. El programa responde con uno de los siguientes mensajes:
1- Excelente! Adivinó el número! ¿Desea jugar otra vez (S o N)? / 2- Muy bajo. Intente de nuevo / 3- Muy
alto. Intente de nuevo.
Si el número que el jugador indicó es incorrecto, el programa deberá entrar en un ciclo hasta que su número
sea el correcto. Luego continuará indicándole al jugador Muy alto o Muy bajo para ayudarle a dar con el
número.

B- Realizar una función que simule arrojar un dado.
Utilizando dicha función realice el experimento de arrojar 1000 veces el dado almacenando las cantidades
de aparición de cada cara en un vector. Imprima la cantidad de veces que apareció cada cara y su
porcentaje sobre el total.

C- Realiza un simulador de máquina traga-monedas simplificada que cumpla los
siguientes requisitos:
a) El ordenador mostrará una tirada que consiste en mostrar 3 figuras. Hay 5
figuras posibles: corazón, diamante, herradura, campana y limón.
b) Si las tres figuras son diferentes se debe mostrar el mensaje “Lo siento,
ha perdido”.
c) Si hay dos figuras iguales y una diferente se debe mostrar el mensaje “Bien,
ha recuperado su moneda”.
d) Si las tres figuras son iguales se debe mostrar “Enhorabuena, ha ganado
10 monedas”.
*/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// Functions

bool menu();
void guessGame();
void rollDice();
int randomNumber(int maxNumber);
float percentageCalc(int number, int total);
void swallowCoins();

int main(){

    bool flag = true;

    cout << "Bienvenido a multijuegos Mario Mori 1752" << endl;

    while(flag) {
        flag = menu();
        cout << "-------------------------------" << endl;
    }

    cout << "Que tengas un buen día" << endl;
    return 0;
}

bool menu() {
    int selection;

    cout << "1) Adivina el un numero del 1 al 1000" << endl;
    cout << "2) Veamos que cara del dado sale mas veces" << endl;
    cout << "3) Traga monedas" << endl;
    cout << "4) Salir" << endl;
    cin >> selection;

    switch (selection)
    {
    case 1:
        guessGame();
        return true;
        break;
    case 2:
        rollDice();
        return true;
        break;
    case 3:
        swallowCoins();
        return true;
        break;
    case 4:
        return false;
        break;
    default:
        cout << "No selecciono ninguna opcion valida" << endl;
        return true;
        break;
    }

}

void guessGame() {
    int selection;
    
    char exitGame;

    bool flag1 = true, flag2 = true;

    cout << "Tengo un número entero entre 1 y 1000." << endl;
    cout << "¿Puede adivinar mi número?" << endl;
    
    while(flag1) {
        int numberToGuess = randomNumber(1000);
        
        while (flag2)
        {
            cout << "Por favor introduzca su numero." << endl;
            cin >> selection;
            
            if (selection < numberToGuess) {
            cout << "El numero que ingreso es menor intente nuevamente." << endl;
            } 
            else if ( selection > numberToGuess) {
                cout << "El numero que ingreso es mayor intente nuevamente." << endl;
            }
            else {
                cout << "Excelente! Adivinó el número!" << endl;
                cout << "¿Desea jugar otra vez (S o N)?" << endl;
                cin >> exitGame;
                if (toupper(exitGame) == 'N') {
                flag1 = false;
                flag2 = false;
                }
                else if (toupper(exitGame) == 'S') {
                    flag2 = false;
                }
            }
            cout << "¿Desea seguir jugando otra vez (S o N)?" << endl;
            cin >> exitGame;
            
            if (toupper(exitGame) == 'N') {
                flag1 = false;
                flag2 = false;
            }
            system("clear");
        }
        
    }
}

void rollDice() {
    int dices[1000];
    int dice;
    int side1 = 0, side2 = 0, side3 = 0, side4 = 0, side5 = 0, side6 = 0;
    int side;

    for (int i = 0; i < 1000; i++) {
        dice = randomNumber(6);
        dices[i] = dice;    
    }

    for (int i = 0; i < 1000; i++) {
        side = dices[i];
        switch (side)
        {
        case 1:
            side1 += 1;
            break;
        case 2:
            side2 += 1;
            break;
        case 3:
            side3 += 1;
            break;
        case 4:
            side4 += 1;
            break;
        case 5:
            side5 += 1;
            break;
        case 6:
            side6 += 1;
            break;
        default:
            break;
        }
    }
    cout << "Cara 1 salio: " << side1 << " con un porcentaje sobre el total de: " << percentageCalc(side1, 1000) << "%" << endl;
    cout << "Cara 2 salio: " << side2 << " con un porcentaje sobre el total de: " << percentageCalc(side2, 1000) << "%" << endl;
    cout << "Cara 3 salio: " << side3 << " con un porcentaje sobre el total de: " << percentageCalc(side3, 1000) << "%" << endl;
    cout << "Cara 4 salio: " << side4 << " con un porcentaje sobre el total de: " << percentageCalc(side4, 1000) << "%" << endl;
    cout << "Cara 5 salio: " << side5 << " con un porcentaje sobre el total de: " << percentageCalc(side5, 1000) << "%" << endl;
    cout << "Cara 6 salio: " << side6 << " con un porcentaje sobre el total de: " << percentageCalc(side6, 1000) << "%" << endl;
}

int randomNumber(int maxNumber) {
    return rand() % maxNumber + 1;
}

float percentageCalc(int number, int total) {
    float result = number * 100 / total;
    return result;
}

void swallowCoins() {
   

    bool flag = true;
    int coins = 1;
    string figureNames[5] = {"Diamante", "Corazon", "Herradura", "Campana", "Limon"};
    int figureChoice[3];
    char selection;

    cout << "Usted comienza con una moneda." << endl;
    cout << "Veamos como que sale." << endl;
    
    while(flag) {
        while(coins > 0) {
            coins -= 1;

            for (int i = 0; i < 3; i++) {
                figureChoice[i] = randomNumber(5) - 1;
            }
            
            cout << "-----------------------------------------" << endl;
            cout << figureNames[figureChoice[0]] << " " << figureNames[figureChoice[1]] << " " << figureNames[figureChoice[2]] << endl;
            cout << "-----------------------------------------" << endl;

            if (figureNames[figureChoice[0]] == figureNames[figureChoice[1]] && figureNames[figureChoice[0]] == figureNames[figureChoice[2]]){
                cout << "Enhorabuena, ha ganado 10 monedas" << endl;
                coins += 10;
            }
            else if (figureNames[figureChoice[0]] == figureNames[figureChoice[1]]) {
                cout << "Bien, ha recuperado su moneda" << endl;
                coins += 1;
            }
            else if (figureNames[figureChoice[1]] == figureNames[figureChoice[2]]) {
                cout << "Bien, ha recuperado su moneda" << endl;
                coins += 1;
            }
            else if (figureNames[figureChoice[0]] == figureNames[figureChoice[2]]) {
                cout << "Bien, ha recuperado su moneda" << endl;
                coins += 1;
            }
            else {
                cout << "Lo siento,ha perdido" << endl;
            }
        }

        cout << "Desea volver a jugar? S o N" << endl;
        cin >> selection;

        if (toupper(selection) == 'N'){
            flag = false;
        }
        else {
            coins = 1;
        }
    }
   
}



