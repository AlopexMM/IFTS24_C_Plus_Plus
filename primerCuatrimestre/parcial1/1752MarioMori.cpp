#include <iostream>

using namespace std;

int main(){

    int horasTrabajadas, codigoEmpleado;
    float sueldoPorHora, horasExtras = 0, sueldoHorasExtras = 0, totalHorasTrabajadas = 0, totalHorasExtrasTrabajadas = 0;
    bool banderaPrograma = true;

    while(banderaPrograma){
        cout << "Horas trabajadas: ";
        cin >> horasTrabajadas;

        cout << "Codigo de empleado: ";
        cin >> codigoEmpleado;

        switch (codigoEmpleado)
        {
        case 1:
            sueldoPorHora = 20000.0 / 198;
            totalHorasTrabajadas = sueldoPorHora * horasTrabajadas;
            
            cout << "Pago por horas trabajadas: " << totalHorasTrabajadas << endl;
            
            banderaPrograma = false;
            break;
        case 2:
            sueldoPorHora = 25000.0 / 198;
            if(horasTrabajadas > 198){
                // Calculamos el sueldo y las horas extras trabajadas
                horasExtras = horasTrabajadas - 198;
                sueldoHorasExtras = sueldoPorHora * 2;
                totalHorasExtrasTrabajadas = horasExtras * sueldoHorasExtras;
                totalHorasTrabajadas = sueldoPorHora * (horasTrabajadas - horasExtras);
            } else {
                
                // Calculamos el sueldo segun las horas trabajadas
                totalHorasTrabajadas = sueldoPorHora * horasTrabajadas;
            }
            
            cout << "Sueldo por las horas trabajadas: " << totalHorasTrabajadas << endl;
            cout << "Pago por horas extras: " << totalHorasExtrasTrabajadas << endl;

            banderaPrograma = false;
            break;
        case 3:
            sueldoPorHora = 30000.0 / 198;

            if(horasTrabajadas > 250){
                horasExtras = horasTrabajadas - 250;
                totalHorasExtrasTrabajadas = horasExtras * sueldoPorHora * 1.10;
                totalHorasTrabajadas = (horasTrabajadas - horasExtras) * sueldoPorHora;
            } else {
                totalHorasTrabajadas = sueldoPorHora * horasTrabajadas;
            }

            cout << "Pago por horas trabajadas: " << totalHorasTrabajadas << endl;
            cout << "Pago por horas extras: " << totalHorasExtrasTrabajadas << endl;

            banderaPrograma = false;
            break;
        case 4:
            sueldoPorHora = 200.0;
            totalHorasTrabajadas = sueldoPorHora * horasTrabajadas;
            
            cout << "Pago por horas trabajadas: " << totalHorasTrabajadas << endl;
            
            banderaPrograma = false;
            break;       
        default:
            cout << "No ingreso un codigo valido de empleado, los codigos van de 1 a 4." << endl;
            break;
        }
    }



    return 0;
}