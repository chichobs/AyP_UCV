//Ejercicio_3

/*
Escriba un algoritmo utilizando un ciclo para que calcule el valor aproximado de π usando la serie: π = 4 − 4/3 + 4/5 − 4/7 + 4/9 . . . ± 4/n
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int terminos;
    double pi_aprox = 0.0;
    double signo = 1.0;
    int denominador = 1;

    cout << "Ingrese el número de términos a usar para la aproximación de Pi: ";
    if (!(cin >> terminos) || terminos <= 0) {
        cerr << "Entrada inválida. Debe ser un entero positivo." << endl;
        return 1;
    }

    for (int i = 0; i < terminos; ++i) {
        double termino = 4.0 / denominador;
        
        if (signo > 0) {
            pi_aprox = pi_aprox + termino;
        } else {
            pi_aprox = pi_aprox - termino;
        }
        
        signo = -signo;
        
        denominador = denominador + 2;
    }

    cout.precision(10);
    cout << "Aproximación de Pi con " << terminos << " términos: " << pi_aprox << endl;
    
    return 0;
}