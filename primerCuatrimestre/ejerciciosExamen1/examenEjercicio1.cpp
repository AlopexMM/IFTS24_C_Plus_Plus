/*
1) Solicitar el ingreso hora minuto y segundo al usuario, el sistema deberá
automáticamente sumar 1 segundo y volver a mostrar el horario en el formato H:M:S
a. Si se ingresa 24:59:59, el sistema deberá informar 1:0:0
b. 22:45:59 -&gt; 22:46:0
*/

#include <iostream>

using namespace std;

int main ()
{
    int hora, minuto, segundo;

    cout << "Ingrese la hora: ";
    cin >> hora;
    cout << "Ingrese los minutos: ";
    cin >> minuto;
    cout << "Ingrese los segundos: ";
    cin >> segundo;

    segundo += 1;

    if (segundo == 60)
    {
        minuto += 1;
        segundo = 0;
        
        if (minuto == 60)
        {
            hora += 1;
            minuto = 0;

            if (hora == 25)
            {
                hora = 1;
            }
        }
    }

    cout << "Hora actual: " << hora << ":" << minuto << ":" << segundo << endl;
        
    return 0;
}