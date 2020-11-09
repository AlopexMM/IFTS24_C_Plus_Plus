# Pointers array

Para manejar de forma dinamica arrays hay que utilizar punteros

Como creamos un puntero?

```cpp
int* arr;
```
Los punteros son direcciones a un punto de memoria.
A los punteros podemos asignarle un valor dentro o podemos asignarle una dirección de memoria.

Por ejemplo:
```cpp
int var = 5;
int* pointer;

/* asignamos la direccion en memoria de var a la direccion de pointer
 es decir que ahora ambos estan apuntando al mismo lugar en memoria
*/
pointer = &var; 

/*
cambiamos el contenido de la variable pointer por ende tambien cambio la variable var
*/
*pointer = 1;

/* 
Si estos los imprimimos en consola van a tener el mismo valor
*/

cout << var << endl;
cout << *pointer << endl;
```

Ahora vemos como lo podemos aplicar a arrays.
Si queremos manejar un array de forma dinamica ya que no sabemos el tamaño que este va a tener debemos hacer lo siguiente.

```cpp

#include <iostream>
#include <stdlib.h>

using namespace std;

int* func(int tamanioLista); // Declaramos una función que puede devolver punteros

int main() {
    int* listaN; //Declaramos el puntero que va a contener la lista.

    listaN = func(10); // A la direccion en memoria le asignamos la direccion de la lista.

    // Imprimimos algunos valores de la lista
    cout << listaN[0] << endl;
    cout << listaN[1] << endl;
    cout << listaN[2] << endl;

    return 0;
}

int* func(int tamanioLista) {
    int* arr = new int[tamanioLista];
    int var;
    for (int i = 0; i < tamanioLista; i++) {
        var = rand() % 10;
        arr[i] = var;
    }

    return arr;
}
```
Analicemos un poco que hace en el codigo de arriba func.

```cpp
int* func(int tamanioLista) {
    int* arr = new int[tamanioLista]; // Creamos un puntero y le asignamos un array de integers

    int var;
    
    // Llenamos de valores al azar el array
    for (int i = 0; i < tamanioLista; i++) {
        var = rand() % 10;
        arr[i] = var;
    }

    return arr; // Devolvemos el array
}
```
El array que se crea dentro de la función **func** al terminar de correr la función se va a borrar de memoria ya que pertenece al alcance de la misma pero al retornar **arr** lo que estamos haciendo es crear una copia de los valores de este a el puntero **listaN**.

Siempre que este funcionando **main** el array va a seguir existiendo.

#### Fuentes:

[Programiz C++](https://www.programiz.com/cpp-programming/pointers)