/* 
Realizar un diagrama que muestre en pantalla los números desde un valor inicial, hasta un valor final,
 ingresados por el usuario en forma descendente
*/

#include <iostream>

using namespace std;

bool printNumerosFormaDescendente(int n1, int n2);

int main()
{
    int nroInicial, nroFinal;
    bool flag = true;

    while(flag) {
        cout << "Ingrese el nro menor: ";
        cin >> nroInicial;
        cout << "Ingrese el nro mayor: ";
        cin >> nroFinal;

        flag = printNumerosFormaDescendente(nroInicial, nroFinal);
    }
    

    return 0;
}

bool  printNumerosFormaDescendente(int n1, int n2) {
    if (n2 > n1) {
        for (n2; n2 >= n1; n2--) {
            cout << n2 << endl;
            
        }
        return false;
    } else {
            cout << "Recuerde que el primer nro ingresado debe ser menor que el segundo." << endl;
            return true;
        }
}