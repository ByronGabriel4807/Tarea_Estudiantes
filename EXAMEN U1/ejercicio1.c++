#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "ingrese un numero entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            cout << "el numero "<< i << " es par" << endl;
        }
    }
    int suma = 0;
    for (int i = 1; i <= n; i++){
        if (i % 2 != 0){
            suma += i;
        }
    }
    cout <<"la suma de los impares es: " << suma << endl;
}