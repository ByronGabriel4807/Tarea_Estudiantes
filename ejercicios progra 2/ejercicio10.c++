#include <iostream>

using namespace std;

int main() {
    const int arraySize = 5;
    int array1[arraySize] = {};
    int array2[arraySize] = {};
    int array3[arraySize * 2] = {};

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero para el primer array: ";
        cin >> array1[i];
    }

    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero para el segundo array: ";
        cin >> array2[i];
    }

    for (int i = 0; i < arraySize; i++) {
        array3[i] = array1[i];
        array3[i + arraySize] = array2[i];
    }

    for (int i = 0; i < arraySize * 2; i++) {
        for (int j = i + 1; j < arraySize * 2; j++) {
            if (array3[i] > array3[j]) {
                int temp = array3[i];
                array3[i] = array3[j];
                array3[j] = temp;
            }
        }
    }

    cout << "El array resultante es: ";
    for (int i = 0; i < arraySize * 2; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;

    return 0;
}