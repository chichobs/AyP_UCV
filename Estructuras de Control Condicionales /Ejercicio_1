//Ejercicio_1

/*
Haga un algoritmo que imprima “Capicua” si un número de entrada de 5 dígitos es capicua, o “No lo es” en caso contrario. Un número es capicua
si se escribe igual al derecho y a revés. Por ejemplo, 545 es un número capicua.
*/

#include <iostream>

using namespace std;

int main() {
    int N;
    
    //Pedir numero de 5 digitos
    cout << "Ingrese un número de 5 dígitos: ";
    cin >> N;
    
    //Sacar el primer digito
    int Cifra1 = N / 10000;
    
    //Sacar el segundo digito
    int Cifra2 = (N / 1000) % 10;
    
    //Sacar el cuarto digito
    int Cifra4 = (N / 10) % 10;
    
    //Sacar el quinto digito
    int Cifra5 = N % 10;
       
    //Caso donde el primer y último digito sean iguales y el segundo y cuarto digitos sean iguales
    if (Cifra1 == Cifra5 && Cifra2 == Cifra4)
        cout << "Es Capicua" << endl;
    //Caso contrario donde uno o ninguno sea igual
    else
        cout << "No es Capicúa" << endl;
    
    return 0;
}