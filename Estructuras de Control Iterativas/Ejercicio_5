//Ejercicio_5

/*
Escriba un algoritmo que tome como entrada una secuencia de números 0 y 1 terminada en −1 que representan un número binario y calcule el número decimal representado. Por ejemplo, si la secuencia es 1 0 0 1 0 1 1, su algoritmo debe imprimir 37.
*/

#include <iostream>

using namespace std;

int main() {
    int digito_binario;
    long long decimal = 0;
    
    cout << "Ingrese una secuencia de 0s y 1s (termine con -1):" << endl;

    while (true) {
        cout << "Dígito (0, 1 o -1 para terminar): ";
        if (!(cin >> digito_binario)) {
            cerr << "Entrada inválida. Reinicie el programa." << endl;
            return 1;
        }

        if (digito_binario == -1) {
            break; // Salir del bucle
        }
        if (digito_binario != 0 && digito_binario != 1) {
            cerr << "ERROR: Solo se aceptan 0 y 1 como dígitos binarios." << endl;
            continue; 
        }
        decimal = (decimal * 2) + digito_binario;
    }

    cout << "\nEl número decimal representado es: " << decimal << endl;

    return 0;
}