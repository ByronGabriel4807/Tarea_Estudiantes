#include <iostream>
#include <iomanip>

using namespace std;

double matriz[5][5];


void llenarMatriz(){
    for (int i= 0; i < 1; i++){
        for (int j = 0; j < 5; j++){
            cout << "ingresa el elemento [" << i << "][" << j << "]" << endl;
            cin >> matriz[i][j];
        }
    }
}
void llenarMatriz2(){
    for (int i = 1; i < 5; i++){
        for (int j = 0; j < 1; j++){
            cout << "ingresa el elemento [" << i << "][" << j << "]" << endl;
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(){
{
    for (int i = 1; i < 5; i++){
        for (int j = 1; j < 5; j++){
            matriz[i][j] = matriz[i - 1][j] + matriz[i][j - 1];
        }
    }
}
    cout << "La matriz es: " << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    cout << "Bienvenido al programa de matrices" << endl;
    llenarMatriz();
    llenarMatriz2();
    mostrarMatriz();
    cout << "Fin del programa" << endl;
    return 0;
}