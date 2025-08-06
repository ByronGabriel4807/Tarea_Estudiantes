#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    int n2;
    int opcion;

    cout << "MENU" << endl;
    cout << "1.suma" << endl;
    cout << "2.resta" << endl;
    cout << "3.multiplicacion" << endl;
    cout << "4.division" << endl;
    cout << "5.potencia" << endl;

    cout << "que operacion desea realizar: ";
    cin >> opcion;

    cout << "ingrese un numero entero positivo: ";
    cin >> n;

    cout << "ingrese otro numero entero positivo: ";
    cin >> n2;

    switch(opcion){
        case 1:
            cout << "la suma de los numeros es: " << n + n2 << endl;
            break;
        case 2:
            cout << "la resta de los numeros es: " << n - n2 << endl;
            break;
        case 3:
            cout << "la multiplicacion de los numeros es: " << n * n2 << endl;
            break;
        case 4:
            cout << "la division de los numeros es: " << n / n2 << endl; //el primero numero es el dividendo y el segundo el divisor
            break;
        case 5:
            cout << "la potencia de los numeros es: " << pow(n, n2) << endl; //el primer numero es la base y el segundo el exponente xdd
            break;
        default:
            cout << "opcion invalida" << endl;
    }
}