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

    int count = 0;
    for (int i = 0; i < arraySize; i++) {
        if (array[i] == num) {
            count++;
        }
    }

    cout << "El numero " << num << " aparece " << count << " veces en el array." << endl;

    return 0;
}