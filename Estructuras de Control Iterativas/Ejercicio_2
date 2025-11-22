//Ejercicio_2

/*
Haga un algoritmo que determine si un número es capicúa (palíndrome).
Un número es capicúa si se lee igual al derecho y a revés.
*/

#include <iostream>

using namespace std;

int main() {
    long long N_original;
    long long N_copia, N_invertido = 0;
    int digito;

    cout << "Ingrese un número entero N: ";
    if (!(cin >> N_original)) {
        cerr << "Entrada inválida." << endl;
        return 1;
    }

    N_copia = N_original;
    
    while (N_copia != 0) {
        digito = N_copia % 10;
        N_invertido = (N_invertido * 10) + digito;
        N_copia = N_copia / 10;
    }

    cout << "El número invertido es: " << N_invertido << endl;

    if (N_original == N_invertido) {
        cout << "El número " << N_original << " ES capicúa (palíndrome)." << endl;
    } else {
        cout << "El número " << N_original << " NO es capicúa (palíndrome)." << endl;
    }

    return 0;
}