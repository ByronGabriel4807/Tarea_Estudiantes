#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {};

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    for (int i = 0; i < arraySize; i++) {
        for (int j = i + 1; j < arraySize; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "El array ordenado es: ";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}