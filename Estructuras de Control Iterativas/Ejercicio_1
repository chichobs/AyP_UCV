//Ejercicio_1

/*
Escriba un algoritmo que lea un número N y calcule e imprima el número de dígitos de N.
*/

#include <iostream>

using namespace std;

int main() {
    long long N;
    int contador_digitos = 0;

    cout << "Ingrese un número entero N: ";
    if (!(cin >> N)) {
        cerr << "Entrada inválida." << endl;
        return 1;
    }
    if (N == 0) {
        contador_digitos = 1;
    } else {
        long long temp_N = N;
        if (temp_N < 0) {
            temp_N = -temp_N;
        }
        
        while (temp_N > 0) {
            temp_N = temp_N / 10;
            contador_digitos++;
        }
    }

    cout << "El número " << N << " tiene " << contador_digitos << " dígito(s)." << endl;
    return 0;
}