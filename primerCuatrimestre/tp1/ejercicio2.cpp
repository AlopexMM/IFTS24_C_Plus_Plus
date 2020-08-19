/*
Un estacionamiento público cobra una tarifa mínima de $70.00 por estacionarse hasta tres horas;
luego cobra $50 por cada hora o fracción a partir de las tres horas. 
La tarifa máxima por período de 24 horas es de $250.00. 
Suponga que ningún automóvil se estaciona por más de 24 horas a la vez. 
Escriba un programa que calcule e imprima las cuentas por estacionamiento de tres clientes que 
dejaron allí sus autos ayer. Usted introduce las horas de estacionamiento de cada cliente. 
Su programa imprimirá los resultados en forma tabular y con orden, y calculará e imprimirá el total de 
los recibos de ayer. También determinará el cargo por cliente. 
Sus salidas deberán aparecer en el siguiente formato:
Auto		Horas		Cargo
1		     1.5		  70.00
2		     4.0		  120.00
3		    24.0		  250.00
TOTAL	    29.5		            440.00
*/

#include <iostream>

using namespace std;

int main() {

    float horasCliente1, horasCliente2, horasCliente3, subtotalCliente1; 
    float subtotalCliente2, subtotalCliente3, total = 0, horasExtras = 0, totalHorasExtras = 0, totalHoras = 0;

    cout << "Ingrese las horas que estuvo el auto del cliente 1: ";
    cin >> horasCliente1;
    cout << "Ingrese las horas que estuvo el auto del cliente 2: ";
    cin >> horasCliente2;
    cout << "Ingrese las horas que estuvo el auto del cliente 3: ";
    cin >> horasCliente3;

    cout << "Auto\tHoras\tCargo" << endl;
    
    // Cliente 1
    if(horasCliente1 <= 3.0){
        subtotalCliente1 = 70.00;
        cout << "1\t" << horasCliente1 << "\t" << subtotalCliente1 << endl;
        total += subtotalCliente1;
    }
    else if (horasCliente1 < 24.0 && horasCliente1 > 3.0)
    {
        horasExtras = horasCliente1 - 3.0;
        totalHorasExtras = horasExtras * 50.0;
        subtotalCliente1 = 70.0 + totalHorasExtras;
        total += subtotalCliente1 + totalHorasExtras;
        cout << "1\t" << horasCliente1 << "\t" << subtotalCliente1 << endl;
    }
    else if (horasCliente1 == 24.0){
        subtotalCliente1 = 250.0;
        total += subtotalCliente1;
        cout << "1\t" << horasCliente1 << "\t" << subtotalCliente1 << endl;
    }
    
    // Cliente 2
    if (horasCliente2 <= 3.0)
    {
        subtotalCliente2 = 70.00;
        cout << "2\t" << horasCliente2 << "\t" << subtotalCliente2 << endl;
        total += subtotalCliente2;
    }
    else if (horasCliente2 < 24.0 && horasCliente2 > 3.0)
    {
        horasExtras = horasCliente2 - 3.0;
        totalHorasExtras = horasExtras * 50.0;
        subtotalCliente2 = 70.0 + totalHorasExtras;
        total += subtotalCliente2;
        cout << "2\t" << horasCliente2 << "\t" << subtotalCliente2 << endl;
    }
    else if (horasCliente2 == 24.0)
    {
        subtotalCliente2 = 250.0;
        total += subtotalCliente2;
        cout << "2\t" << horasCliente2 << "\t" << subtotalCliente2 << endl;
    }

    // Cliente 3
    if (horasCliente3 <= 3.0)
    {
        subtotalCliente3 = 70.00;
        cout << "3\t" << horasCliente3 << "\t" << subtotalCliente3 << endl;
        total += subtotalCliente3;
    }
    else if (horasCliente3 < 24.0 && horasCliente3 > 3.0)
    {
        horasExtras = horasCliente3 - 3.0;
        totalHorasExtras = horasExtras * 50.0;
        subtotalCliente3 = 70.0 + totalHorasExtras;
        total += subtotalCliente3;
        cout << "3\t" << horasCliente3 << "\t" << subtotalCliente3 << endl;
    }
    else if (horasCliente3 == 24.0)
    {
        subtotalCliente3 = 250.0;
        total += subtotalCliente3;
        cout << "3\t" << horasCliente3 << "\t" << subtotalCliente3 << endl;
    }

    // Total
    totalHoras = horasCliente1 + horasCliente2 + horasCliente3;
    cout << "TOTAL\t" << totalHoras << "\t" << total << endl;
    return 0;
}