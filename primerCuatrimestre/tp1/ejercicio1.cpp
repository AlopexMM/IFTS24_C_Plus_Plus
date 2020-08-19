/*
Una empresa con locales comerciales de venta al público, solicita a usted realizar un programa para registrar sus ventas.
Para cada venta (ticket) se ingresa código del artículo, cantidad y precio.  Una venta puede contener varios artículos, 
 el fin del ticket se indica ingresando el código del artículo 0.
El programa debe validar que el código del artículo ingresado sea un número entre 100 y 200. Si el código fuera menor a 100 o mayor a 200 el programa deberá 
 mostrar un mensaje indicándolo. 
Una vez finalizado el ingreso del ticket el programa debe mostrar al usuario las opciones de pago existentes:
 1 - Efectivo, 
 2 – Crédito 
 3 – Debito
 al seleccionar una de ellas las condiciones de venta que se tendrán en cuenta son: 
 1 – Para los pagos en efectivo se realizará un descuento del 5% 
 2 – Para los pagos con crédito se aplicará un recargo del 10% sobre el importe total. 
Cuando se haya mostrado el importe total a pagar, el sistema debe consultar al usuario si desea continuar con la carga de otro ticket. 
Este último responderá ingresando un 1  para los casos que desea continuar y un 0  para aquellos casos donde ya se realizó todo el ingreso de tickets. 
Si  el usuario informa que va a continuar; el programa  comenzar con una nueva carga. 
Cuando el usuario informe que no desea ingresar más tickets, se deberá informar por pantalla:
1)Importe total de Ventas  
2)Cantidad de Tickets 
3)Cantidad de Artículos Vendidos
*/

#include <iostream>

using namespace std;

int main () 
{
    // Variables
    int articulo, cantidad, tipoPago, seguirFacturando;
    float precio, subtotal = 0, total = 0, cantidadTotalTickets = 0, cantidadTotalArticulos = 0, totalVendido = 0;
    bool banderaArticulos = true, banderaPago = true, banderaPrograma = true;

    cout << "Bienvenido al software de venta de 1752 Mario Mori" << endl;

    while(banderaPrograma)
    {
        // Ingreso de articulos, cantidades, precio de la unidad
        while (banderaArticulos)
        {
            cout << "Ingrese el código del articulo: ";
            cin >> articulo;
            
            if (articulo >= 100 && articulo <= 200)
            {
                cout << "Ingrese la cantidad del articulo: ";
                cin >> cantidad;
                cout << "Ingrese el precio del articulo: ";
                cin >> precio;

                // Con esta variable se lleva el subtotal del ticket en curso
                subtotal = subtotal + (precio * cantidad);

                // Con esta variable se lleva la cuenta del total de articulos pasados
                cantidadTotalArticulos += cantidad;

                
            }
            else if (articulo == 0)
            {
                banderaArticulos = false;

                // Comprobamos que el subtotal sea mayor a cero para evitar solicitar un pago
                // si el monto es menor o igual a 0
                if (subtotal > 0){
                    // Selección del metodo de pago
                    while (banderaPago)
                    {
                        cout << "Seleccione uno de los metodos permitidos." << endl;
                        cout << "1 - Efectivo" << endl;
                        cout << "2 - Credito" << endl;
                        cout << "3 - Debito" << endl;
                        cin >> tipoPago;

                        switch (tipoPago)
                        {
                        case 1:
                            // Realizamos el 5% de descuento.
                            total = subtotal / 1.05;

                            // Esta variable lleva el monto total vendido del día
                            totalVendido += total;

                            // bandera que cierra el programa
                            banderaPago = false;
                            break;
                        case 2:
                            // Realizamos el 10% de recargo
                            total = subtotal * 1.10;

                            // Esta variable lleva el monto total vendido del día
                            totalVendido += total;

                            // bandera que cierra el programa
                            banderaPago = false;
                            break;
                        case 3:
                            total = subtotal;

                            // Esta variable lleva el monto total vendido del día
                            totalVendido += total;

                            // bandera que cierra el programa
                            banderaPago = false;
                            break;
                        default:
                            cout << "No se ingreso ninguna opción de pago permitida";
                            break;
                        }

                        cout << "Total del ticket a pagar: " << total << endl;

                        // Variable que lleva la cantidad de tickets facturados
                        cantidadTotalTickets++;
                    }
                }
            }
            else
            {
                cout << "Ingrese un codigo de articulo valido entre 100 y 200" << endl;
            }
        }

        cout << "¿Desea seguir facturando?" << endl;
        cout << "Seleccione 1 para seguir 0 para cerrar." << endl;
        cin >> seguirFacturando;
        
        // Si la elección es 1 se ponen las banderas del programa en true nuevamente para continuar facturando
        switch (seguirFacturando)
        {
        case 0:
            cout << "Importe total de ventas: " << totalVendido << endl;
            cout << "Cantidad de tickets: " << cantidadTotalTickets << endl;
            cout << "Cantidad de articulos vendidos: " << cantidadTotalArticulos << endl;
            banderaPrograma = false;
            break;
        case 1:
            banderaArticulos = true;
            banderaPago = true;
        default:
            cout << "Recuerde que debe seleccionar o 1 o 0." << endl;
            break;
        }
        
    }    
    
    return 0;
}