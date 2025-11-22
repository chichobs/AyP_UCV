//Ejercicio_1

/*
Haga un algoritmo para una función que reciba dos parámetros N y K y que retorne los K dígitos más a la izquierda de N. Por ejemplo, extraerDigitos(542207, 2) debe retornar 54.
*/

#include <iostream>
#include <cmath>

using namespace std;

int contarDigitos(long long N) {
    if (N == 0) return 1;
    int contador = 0;
    long long tempN = abs(N); 
    while (tempN > 0) {
        tempN /= 10;
        contador++;
    }
    return contador;
}

long long extraerDigitos(long long N, int K) {
    if (K <= 0) {
        return 0;
    }

    int D = contarDigitos(N);

    if (K >= D) {
        return N;
    }
    
    int exponente = D - K;
    long long divisor = (long long)round(pow(10, exponente)); 
    long long resultado = N / divisor;

    return resultado;
}

int main() {
    long long N1 = 542207;
    int K1 = 2;
    long long res1 = extraerDigitos(N1, K1);
    cout << "extraerDigitos(" << N1 << ", " << K1 << ") debe retornar 54. Retorna: " << res1 << endl;
    
    long long N2 = 98765;
    int K2 = 3;
    long long res2 = extraerDigitos(N2, K2);
    cout << "extraerDigitos(" << N2 << ", " << K2 << ") debe retornar 987. Retorna: " << res2 << endl;
    
    long long N3 = 123456;
    int K3 = 7;
    long long res3 = extraerDigitos(N3, K3);
    cout << "extraerDigitos(" << N3 << ", " << K3 << ") debe retornar 123456. Retorna: " << res3 << endl;
    
    return 0;
}
