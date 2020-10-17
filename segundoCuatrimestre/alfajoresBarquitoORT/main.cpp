/*
La empresa fabricante de alfajores “Barkito” necesita un sistema que le permita mejorar la calidad de lo
que produce.
La medida estándar del radio (puede ser con decimales) de un alfajor no pasa de los de 5 cm, y no es
menor a los 3 cm. Todo alfajor que no esté dentro de ese rango será desechado.
Además, los alfajores se producen de 3 formas diferentes. El tipo de alfajor es un valor determinante a la
hora de calcular su precio de venta. Esta información se pide únicamente, si el alfajor es aceptado, de
ser ingresado de manera incorrecta se anula el proceso.
Los valores según el tipo de alfajor, son los siguientes:

Tipo de alfajor Valor Fijo
SIMPLE 10
DOBLE 15
TRIPLE 20

Para obtener el precio de venta, el cálculo es:

precio_venta = valor_fijo + (diámetro * 5)

Se requiere que el valor a multiplicar por el diámetro (en este momento es 5) se almacene en una
constante, para poder modificar fácilmente su valor en el futuro.
Se pide:
● Desarrollar un programa que:
    ○ Informe por pantalla, a partir de los ingresos, si el alfajor es aceptado o desechado, y en
    caso de ser válido, mostrar el valor de precio de venta.
    ○ Aplique correctamente la utilización de variables, constantes y estructura condicional
    ○ Reutilizar la función pedirFloat (float) y estaEnRango (bool) de tps anteriores.

Probar el programa con el siguiente lote de datos:

radio tipo_alfajor SALIDA FINAL
3     SIMPLE       PRECIO DE VENTA : $40
8     -            ALFAJOR DESECHADO
1     -            ALFAJOR DESECHADO
5     DOBLE        PRECIO DE VENTA : $65
4,35  TRIPLE       PRECIO DE VENTA : $63,5
3,14  ASDFGHRLGF   ERROR DE TIPO DE ALFAJOR
*/

#include <iostream>

using namespace std;
const int multiplicadorDiametro = 5;

void menu1();
void menu2(float r);
float pedirFloat();
bool estaEnRango(float r);
float calcPrecioVenta(float r, int tipoAlfajor);

int main() {

    cout << "Bienvenido a AlopexMM software" << endl;
    menu1();

    return 0;
}

void menu1() {
    bool bandera = true;
    float radio;
    int opt;

    while(bandera) {
        
        cout << "1 - Ingresar radio." << endl;
        cout << "2 - Salir del programa." << endl;
        cout << "Seleccione una opción: "; 
        cin >> opt;

        switch (opt)
        {
        case 1: {
            radio = pedirFloat();
            if (estaEnRango(radio)) {
                menu2(radio);
            }
            else {
                cout << "No se encuentra en el rango correcto el radio, debe estar entre 3cm y 5cm" << endl;
            }
            break;
        }
        case 2: {
            bandera = false;
            break;
        }
        
        default:
            cout << "La opción seleccionada no es correcta." << endl;
            break;
        }
    }
}

void menu2(float r) {
    string opt;
    bool bandera = true;
    float precioVenta;

    while(bandera){
        cout << "Ingrese si el alfajor es simple, doble o triple" << endl;
        cin >> opt;

        for (int i = 0; i < (int)sizeof(opt); i++) {
           opt[i] = toupper(opt[i]);
        }
        
        if( opt == "SIMPLE") {
            precioVenta = calcPrecioVenta(r, 1);
            cout << "Precio de venta: " << precioVenta << endl;
            bandera = false;
        }
        else if (opt == "DOBLE") {
            precioVenta = calcPrecioVenta(r, 2);
            cout << "Precio de venta: " << precioVenta << endl;
            bandera = false;
        }
        else if (opt == "TRIPLE") {
            precioVenta = calcPrecioVenta(r,3);
            cout << "Precio de venta: " << precioVenta << endl;
            bandera = false;
        }
        else {
            cout << "Ingreso mal el tipo de alfajor." << endl;
            cout << "Tipo de alfajor ingresado: " << opt << endl;
        }
    }
    
}

float pedirFloat() {
    float valor;
    cout << "El radio del alfajor es: ";
    cin >> valor;

    return valor;
}

bool estaEnRango(float r) {
    if ( r >= 3 && r <= 5) {
        return true;
    }
    else {
        return false;
    }
}

float calcPrecioVenta(float r, int tipoAlfajor) {
    int valor_fijo[3] = {10, 15, 20};
    float resultado = valor_fijo[tipoAlfajor - 1] + (2 * r * multiplicadorDiametro);
    return resultado;
}
