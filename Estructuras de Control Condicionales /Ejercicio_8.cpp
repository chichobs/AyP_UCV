//Ejercicio_8

/*
Un número de 4 cifras es felíz si los dos primeros dígitos son mayores que los dos últimos dígitos. Por ejemplo 5612 es felíz porque 56 es mayor que 12. Un número de 4 cifras es creciente si cada dígito es mayor al anterior. Por ejemplo 1569 es creciente porque 9 > 6 > 5 > 1. Todo número que es felíz y creciente se dice que es un número muy felíz. Todo número que no es felíz ni creciente se dice que es infelíz. Haga un algoritmo que tome como entrada un número de 4 dígitos e imprima el tipo de número encontrado, según la clasficicación descrita.
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    int C1, C2, C3, C4;
    int P12, U2;
    int EsFeliz = 0;
    int EsCreciente = 0;

    cout << "Ingrese un número de 4 dígitos (1000 a 9999): ";
    cin >> N;

    C1 = N / 1000;
    C2 = (N / 100) % 10;
    C3 = (N / 10) % 10;
    C4 = N % 10;
    
    P12 = (C1 * 10) + C2;
    U2 = (C3 * 10) + C4;

    if (P12 > U2) {
        EsFeliz = 1;
    }

    if (C4 > C3 && C3 > C2 && C2 > C1) {
        EsCreciente = 1;
    }
    
    cout << "El número " << N << " es: ";
    
    if (EsFeliz == 1 && EsCreciente == 1) {
        cout << "Muy Felíz" << endl;
    } else if (EsFeliz == 0 && EsCreciente == 0) {
        cout << "Infelíz" << endl;
    } else {l
        if (EsFeliz == 1) {
            cout << "Felíz (pero no Creciente)" << endl;
        } else {
            cout << "Creciente (pero no Felíz)" << endl;
        }
    }

    return 0;
}
