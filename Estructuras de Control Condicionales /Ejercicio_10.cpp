//Ejercicio_10

/*
Haga un algoritmo que tome como entrada un número menor a 100 y determine si es primo (recuerde que un número N es primo sii sus únicos divisores son 1 y N).
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    int EsPrimo = 1;

    cout << "Ingrese un número menor a 100: ";
    cin >> N;

    if (N < 2) {
        EsPrimo = 0;
    } else if (N == 2 || N == 3 || N == 5 || N == 7) {
        EsPrimo = 1;
    } else {
        if (N % 2 == 0) {
            EsPrimo = 0;
        }
        if (N % 3 == 0) {
            EsPrimo = 0;
        }
        if (N % 5 == 0) {
            EsPrimo = 0;
        }
        if (N % 7 == 0) {
            EsPrimo = 0;
        }
        
    }
    cout << "El número " << N;
    if (EsPrimo == 1) {
        cout << " es PRIMO." << endl;
    } else {
        cout << " NO es primo." << endl;
    }

    return 0;
}