//Ejercicio_3

/*
Escriba una función o acción que reciba por parámetro 5 números y determine el máximo y mínimo entre ellos.
*/

#include <iostream>

using namespace std;

void encontrarMaxMin(int n1, int n2, int n3, int n4, int n5, int& maximo, int& minimo) {
    
    maximo = n1;
    minimo = n1;
    if (n2 > maximo) maximo = n2;
    if (n2 < minimo) minimo = n2;
    if (n3 > maximo) maximo = n3;
    if (n3 < minimo) minimo = n3;
    if (n4 > maximo) maximo = n4;
    if (n4 < minimo) minimo = n4;
    if (n5 > maximo) maximo = n5;
    if (n5 < minimo) minimo = n5;
}

int main() {
    int a=10, b=5, c=20, d=3, e=15;
    int max_val, min_val;

    encontrarMaxMin(a, b, c, d, e, max_val, min_val);

    cout << "Números de entrada: " << a << ", " << b << ", " << c << ", " << d << ", " << e << endl;
    cout << "Máximo: " << max_val << endl;
    cout << "Mínimo: " << min_val << endl;
    
    return 0;
}
