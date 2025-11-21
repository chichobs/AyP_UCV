//Ejercicio_5

/*
Dados dos valores V1, V2 que forman un intervalo cerrado, y un valor X, haga un algoritmo para determinar si X está dentro o fuera del intervalo.
*/

#include <iostream>
using namespace std;

int main() {
    double V1, V2, X;
    
    //Solicitar datos 
    cout << "Ingrese el valor V1 del intervalo: ";
    cin >> V1;
    cout << "Ingrese el valor V2 del intervalo: ";
    cin >> V2;
    cout << "Ingrese el valor X a evaluar: ";
    cin >> X;

    double Min_V, Max_V;
    
    //Determinar valor menor y el mayor del intervalo
    if (V1 < V2) {
        Min_V = V1;
        Max_V = V2;
    } else {
        Min_V = V2;
        Max_V = V1;
    }
    
    //Imprimir la respuesta 
    cout << "El valor X está ";
    
    //Determinar si X esta dentro del intervalo
    if (X >= Min_V && X <= Max_V)
        cout << "DENTRO del intervalo [" << Min_V << ", " << Max_V << "]." << endl;
    else
        cout << "FUERA del intervalo [" << Min_V << ", " << Max_V << "]." << endl;

    return 0;
}