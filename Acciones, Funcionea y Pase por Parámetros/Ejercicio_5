//Ejercicio_5

/*
Haga una función que utilice la función creada en el problema (4) para crear otra función que tome como entrada dos fechas (día, mes y año) y calcule el número de días transcurridos entre las fechas. Puede asumir también que existe una función para determinar si un año es bisiesto.
*/

#include <iostream>

using namespace std;

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}

int diasAcumuladosHastaMes(int mes, int anio) {
    int dias_acumulados = 0;
    
    if (mes <= 1) return 0;
    if (mes > 1) dias_acumulados += 31;
    if (mes > 2) dias_acumulados += (esBisiesto(anio) ? 29 : 28);
    
    switch (mes) {
        case 12: dias_acumulados += 30;
        case 11: dias_acumulados += 31;
        case 10: dias_acumulados += 30;
        case 9:  dias_acumulados += 31;
        case 8:  dias_acumulados += 31;
        case 7:  dias_acumulados += 30;
        case 6:  dias_acumulados += 31;
        case 5:  dias_acumulados += 30;
        case 4:  dias_acumulados += 31;
        default: break;
    }
    
    return dias_acumulados;
}

long long calcularDiasTotales(int dia, int mes, int anio) {
    long long dias_totales = 0;
    const int DIAS_ANIO_NORMAL = 365;

    for (int y = 1; y < anio; ++y) {
        dias_totales += DIAS_ANIO_NORMAL;
        if (esBisiesto(y)) {
            dias_totales += 1;
        }
    }
    
    dias_totales += diasAcumuladosHastaMes(mes, anio);
    dias_totales += dia;
    
    return dias_totales;
}

long long diasEntreFechas(int d1, int m1, int a1, int d2, int m2, int a2) {
    long long dias_totales_f1 = calcularDiasTotales(d1, m1, a1);
    long long dias_totales_f2 = calcularDiasTotales(d2, m2, a2);
    long long diferencia = dias_totales_f2 - dias_totales_f1;
    
    return abs(diferencia);
}

int main() {
    long long dias = diasEntreFechas(1, 1, 2024, 1, 1, 2025);
    cout << "Días entre 01/01/2024 y 01/01/2025: " << dias << " días (Debería ser 366)." << endl;
    dias = diasEntreFechas(10, 3, 2023, 20, 3, 2023);
    cout << "Días entre 10/03/2023 y 20/03/2023: " << dias << " días (Debería ser 10)." << endl;
    
    return 0;
}