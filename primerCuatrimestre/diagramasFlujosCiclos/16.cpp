// Escribir un algoritmo que escriba todos los números enteros impares entre 1 y 100

#include <iostream>

using namespace std;

main()
{
    for (int i = 1; i <= 100; i++){
        if(i % 2 != 0){
            cout << i << endl;
        }
    }
}