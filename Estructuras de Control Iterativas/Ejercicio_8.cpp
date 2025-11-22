//Ejercicio_8

/*
Escriba un algoritmo lea una secuencia de dígitos entre 0 y 9 terminada en −1 que representan un número decimal e imprima el número decimal. Por ejemplo, si la secuencia de entrada es 5 0 3 8 -1 debe imprimir 5038.
*/

#include <iostream>

using namespace std;

int main() {
    int digito;
    long long numero_decimal = 0;
    
    cout << "Ingrese una secuencia de dígitos (0 a 9), termine con -1:" << endl;

    while (true) {
        cout << "Dígito (-1 para terminar): ";
        if (!(cin >> digito)) {
            cerr << "Entrada inválida. Reinicie el programa." << endl;
            return 1;
        }
        if (digito == -1) {
            break;
        }
        if (digito < 0 || digito > 9) {
            cerr << "ERROR: Solo se aceptan dígitos entre 0 y 9." << endl;
            continue; 
        }

        numero_decimal = (numero_decimal * 10) + digito;
    }

    cout << "\nEl número decimal formado por la secuencia es: " << numero_decimal << endl;

    return 0;
}