#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {};

    int sum = 0;

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
        sum += array[i];
    }

    cout << "El resultado de la suma de los elementos del arreglo es: " << sum << endl;

    return 0;
}