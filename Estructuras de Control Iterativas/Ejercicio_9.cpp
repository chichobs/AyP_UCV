//Ejercicio_9

/*
Escriba un algoritmo que imprima por pantalla en borde de un cuadrado de lados de tamaño N. Por ejemplo, si N = 5, el algoritmo debería imprimir:

XXXXX

X   X

X   X

X   X

XXXXX
*/

#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Ingrese el tamaño del lado del cuadrado (N >= 1): ";
    if (!(cin >> N) || N < 1) {
        cerr << "Entrada inválida. N debe ser mayor o igual a 1." << endl;
        return 1;
    }

    cout << "\nCuadrado de borde N=" << N << ":" << endl;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N; ++j) {
            if (i == 1 || i == N || j == 1 || j == N) {
                cout << "X";
            } else {
                cout << " "; 
            }
        }
        
        cout << endl;
    }

    return 0;
}