#include <iostream>

using namespace std;

int main() {
    const int arraySize = 10;
    int array[arraySize] = {};

    int num_mayor;
    int num_menor;
    for (int i = 0; i < arraySize; i++) {
        cout << "Ingrese un numero: ";
        cin >> array[i];
        if (array[i] > array[i-1])
        {
            num_mayor = array[i];
        }
        else
        {
            num_menor = array[i];
        }
    }
    cout << "El numero mayor es: " << num_mayor << endl;
    cout << "El numero menor es: " << num_menor << endl;
}