/* 
Mostrar los múltiplos de 8 hasta el valor 500. Debe aparecer en 
pantalla 8 - 16 - 524 - etc(No se ingresan valores por teclado)
*/

#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 500; i++){
        if(i % 8 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}