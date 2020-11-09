#include <iostream>

using namespace std;

int* func(int tamanio);

int main() {

    int * arr = func(10);

    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}

int* func(int tamanio) {
    int* arr = new int[tamanio];

    for (int i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }

    return arr;
}