#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {};

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
    }

    for (int i = 0; i < arraySize / 2; i++) {
        int temp = array[i];
        array[i] = array[arraySize - 1 - i];
        array[arraySize - 1 - i] = temp;
    }

    cout << "El array invertido es: ";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}