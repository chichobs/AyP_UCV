//Ejercicio_2

/*
Cree un algoritmo que tome como entrada la hora exacta (horas, minutos, segundos y AM/PM) e indique el número de segundos transcurridos durante ese día.
*/

#include <iostream>
using namespace std;

int main() {
    int Horas, Minutos, Segundos;
    char Ampm;
    long int TotalSegundos;
    
    //Solicitar la hora
    cout << "Ingrese la hora (formato HH MM SS A/P): ";
    cin >> Horas >> Minutos >> Segundos;
    cin >> Ampm; 
    
    //Comprobar si es Pm
    if (Ampm == 'P' || Ampm == 'p') {
        //Si son las 12 del medio dia no se sumaran las 12 horas de la mañana 
        if (Horas != 12) {
            Horas += 12;
        }
    }
    
    //Calculo para transformar las horas y minutos en segundos
    TotalSegundos = (Horas * 3600) + (Minutos * 60) + Segundos;
    
    //Imprimir el resultado
    cout << "Segundos transcurridos en el día: " << TotalSegundos << " segundos." << endl;

    return 0;
}