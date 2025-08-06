#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {};

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    int num;
    cout << "Ingrese un numero adicional para buscar en el array: ";
    cin >> num;

    bool found = false;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == num) {
            cout << "El numero " << num << " se encuentra en la posicion " << i << " del array." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "El numero " << num << " no se encuentra en el array." << endl;
    }

    return 0;
}