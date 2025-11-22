//Ejercicio_2

/*
Haga un algoritmo que permita determinar si un número N de 6 dígitos contiene algún número de 3 dígitos capicúa. Por ejemplo, si N = 485992 no hay números capicúas contenidos, pero N = 106562 si contiene uno (656).
*/

#include <iostream>
#include <cmath>

using namespace std;

bool esCapicua3Digitos(int subnumero) {
    if (subnumero < 0 || subnumero > 999) {
        return false;
    }
    
    int X = subnumero / 100;
    int Z = subnumero % 10;
    
    return X == Z;
}

bool contieneCapicua(int N) {
    if (N < 100000 || N > 999999) {
        return false; 
    }

    int sub1 = N / 1000;
    int sub2 = (N / 100) % 1000;
    int sub3 = (N / 10) % 1000;
    int sub4 = N % 1000;

    if (esCapicua3Digitos(sub1)) return true;
    if (esCapicua3Digitos(sub2)) return true;
    if (esCapicua3Digitos(sub3)) return true;
    if (esCapicua3Digitos(sub4)) return true;
    
    return false;
}

int main() {
    int N1 = 485992;
    int N2 = 106562;
    int N3 = 901098;

    cout << "N = " << N1 << ". Contiene Capicúa: " << (contieneCapicua(N1) ? "SI" : "NO") << endl;
    cout << "N = " << N2 << ". Contiene Capicúa: " << (contieneCapicua(N2) ? "SI" : "NO") << endl;
    cout << "N = " << N3 << ". Contiene Capicúa: " << (contieneCapicua(N3) ? "SI" : "NO") << endl;
    
    return 0;
}