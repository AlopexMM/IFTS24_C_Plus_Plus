#include <iostream>
#include <string>

using namespace std;

int main()
{
    int day, month, year;
    string tomorrow, strDay, strMonth, strYear;

    // solicitamos los datos al operador

    cout << "Ingrese el número del día de hoy: ";
    cin >> day;

    cout << "Ingrese el número del mes en curso: ";
    cin >> month;

    cout << "Ingrese el número del año, por ejemplo 2020: ";
    cin >> year;
    
    // meses con 31 días: 01, 03, 05, 07, 08, 10, 12
    // meses con 30 días: 04, 06, 09, 11
    // mes 02 tiene 28 días

    // Sumamos un día
    
    day ++;

    // Verificamos que esten bien los días segun el mes

    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day == 31)
        {
            day = 1;
            month++;
        }
    }
    else if (month == 2)    
    {
        if ( day >= 29)
        {
            day = 1;
            month++;
        }
    }
    else
    {
        if (day >= 32)
        {
            day = 1;
            month++;
        }
    }
    
    // Convertimos en texto los numeros ingresados y verificamos que esten bien con el formato solicitado

    strDay = to_string(day);
    if (strDay.length() < 2)
    {
        strDay = "0" + strDay; 
    }
    
    strMonth = to_string(month);
    if (strMonth.length() < 2)
    {
        strMonth = "0" + strMonth;
    }

    strYear = to_string(year);

    // Creamos la fecha con el formato solicitado

    tomorrow = strDay + "/" + strMonth + "/" + strYear;

    // Mostramos en pantalla
    
    cout << "Mañana es: " << tomorrow << endl;
    return 0;
}