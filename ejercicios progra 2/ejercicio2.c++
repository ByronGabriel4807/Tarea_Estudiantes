#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {};

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    for (int x = 0; x < arraySize; x++) {
        if (array[x] % 2 == 0) {
            cout << "El numero " << array[x] << " es par" << endl;
        } else {
            cout << "El numero " << array[x] << " es impar" << endl;
        }
    }
}