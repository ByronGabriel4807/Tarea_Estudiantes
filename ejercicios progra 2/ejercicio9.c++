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
    cout << "Ingrese un numero adicional para eliminar del array: ";
    cin >> num;

    bool found = false;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == num) {
            found = true;
            for (int j = i; j < arraySize - 1; j++) {
                array[j] = array[j + 1];
            }
            array[arraySize - 1] = 0;
            break;
        }
    }

    if (!found) {
        cout << "El numero " << num << " no se encuentra en el array." << endl;
    } else {
        cout << "El numero " << num << " ha sido eliminado del array." << endl;
    }

    cout << "El array resultante es: ";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}