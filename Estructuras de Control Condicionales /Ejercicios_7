//Ejercicio_7

/*
Escriba un algoritmo que reciba como entrada un fecha (día y mes) del año actual e imprima por pantalla el número de días transcurridos desde el 1

ro de Enero.
*/

#include <iostream>

using namespace std;

int main() {
    int Dia, Mes;
    int DiasTranscurridos;

    cout << "Ingrese el día: ";
    cin >> Dia;
    cout << "Ingrese el mes (1-12): ";
    cin >> Mes;
    DiasTranscurridos = Dia;

    if (Mes > 1)
        DiasTranscurridos = DiasTranscurridos + 31; 
    if (Mes > 2)
        DiasTranscurridos = DiasTranscurridos + 28; 
    if (Mes > 3)
        DiasTranscurridos = DiasTranscurridos + 31;
    if (Mes > 4)
        DiasTranscurridos = DiasTranscurridos + 30;
    if (Mes > 5)
        DiasTranscurridos = DiasTranscurridos + 31;
    if (Mes > 6)
        DiasTranscurridos = DiasTranscurridos + 30;
    if (Mes > 7)
        DiasTranscurridos = DiasTranscurridos + 31;
    if (Mes > 8)
        DiasTranscurridos = DiasTranscurridos + 31;
    if (Mes > 9)
        DiasTranscurridos = DiasTranscurridos + 30;
    if (Mes > 10)
        DiasTranscurridos = DiasTranscurridos + 31;
    if (Mes > 11)
        DiasTranscurridos = DiasTranscurridos + 30;
    
    cout << "Desde el 1ro de Enero han transcurrido " << DiasTranscurridos << " días." << endl;

    return 0;
}