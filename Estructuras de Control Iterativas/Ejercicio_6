//Ejercicio_6

/*
Escriba un algoritmo que tome como entrada un número N e imprima la secuencia de Fibonacci hasta N. La secuencia de Fibonacci comienza con los números 0 y 1 y se calcula en cada paso sumando los últimos dos números de la secuencia. Por ejemplo, los primeros números de la secuencia de Fibonacci son 0, 1, 1, 2, 3, 5, 8, 13, . . .
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    long long a = 0; 
    long long b = 1;
    long long siguiente_termino;

    cout << "Ingrese un número N para la secuencia de Fibonacci: ";
    if (!(cin >> N) || N < 0) {
        cerr << "Entrada inválida. Debe ser un entero no negativo." << endl;
        return 1;
    }

    cout << "Secuencia de Fibonacci hasta N=" << N << ": ";

    if (N >= 0) {
        cout << a;
    }

    if (N >= 1) {
        cout << ", " << b;
    }

    siguiente_termino = a + b;
    while (siguiente_termino <= N) {
        cout << ", " << siguiente_termino;
        
        a = b;
        b = siguiente_termino;
        siguiente_termino = a + b;
    }
    
    cout << endl;
    return 0;
}