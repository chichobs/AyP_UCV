//Ejercicio_4

/*
Haga una función que reciba como entrada un mes del año y determine el número de días transcurridos desde el comienzo del año hasta el primer día del mes
*/

#include <iostream>

using namespace std;

int diasTranscurridosHastaMes(int mes) {
    int dias_acumulados = 0;
    
    if (mes <= 1 || mes > 12) {
        return 0; 
    }
    
    switch (mes) {
        case 12: dias_acumulados += 30;
        case 11: dias_acumulados += 31;
        case 10: dias_acumulados += 30;
        case 9: dias_acumulados += 31;
        case 8: dias_acumulados += 31;
        case 7: dias_acumulados += 30;
        case 6: dias_acumulados += 31;
        case 5: dias_acumulados += 30;
        case 4: dias_acumulados += 31;
        case 3: dias_acumulados += 28;
        case 2: dias_acumulados += 31;
        default: break;
    }
    
    return dias_acumulados;
}

int main() {
    int mes_prueba = 4;
    int dias_abril = diasTranscurridosHastaMes(mes_prueba);
    cout << "Días transcurridos hasta el 1 de Abril: " << dias_abril << " días (31+28+31 = 90)." << endl;
    
    mes_prueba = 1;
    int dias_enero = diasTranscurridosHastaMes(mes_prueba);
    cout << "Días transcurridos hasta el 1 de Enero: " << dias_enero << " días." << endl;
    
    return 0;
}