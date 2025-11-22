//Ejercicio_4

/*
Dada una secuencia de números terminada en cero, elaborar un algoritmo para calcular el porcentaje y la suma de los números impares, el porcentaje y la suma de los números pares, y la suma de todos los números, y cuántos números fueron ingresados.
*/

#include <iostream>

using namespace std;

int main() {
    int numero;
    int suma_total = 0;
    int suma_pares = 0;
    int suma_impares = 0;
    int contador_total = 0;
    int contador_pares = 0;
    int contador_impares = 0;
    
    cout << "Ingrese una secuencia de números enteros (termine con 0):" << endl;

    do {
        cout << "Número: ";
        if (!(cin >> numero)) {
            cerr << "Entrada inválida. Reinicie el programa." << endl;
            return 1;
        }

        if (numero != 0) {
            contador_total++;
            suma_total = suma_total + numero;

            if (numero % 2 == 0) {
                contador_pares++;
                suma_pares = suma_pares + numero;
            } else {
                contador_impares++;
                suma_impares = suma_impares + numero;
            }
        }

    } while (numero != 0);

    cout << "\n--- Resultados del Análisis ---" << endl;
    cout << "Total de números ingresados (sin contar el 0): " << contador_total << endl;
    cout << "Suma de todos los números: " << suma_total << endl;
    
    if (contador_total > 0) {
        double porcentaje_impares = (double)contador_impares / contador_total * 100.0;
        double porcentaje_pares = (double)contador_pares / contador_total * 100.0;

        cout << "\n**Números Impares:**" << endl;
        cout << "  Cantidad: " << contador_impares << endl;
        cout << "  Suma: " << suma_impares << endl;
        cout << "  Porcentaje: " << porcentaje_impares << "%" << endl;

        cout << "\n**Números Pares:**" << endl;
        cout << "  Cantidad: " << contador_pares << endl;
        cout << "  Suma: " << suma_pares << endl;
        cout << "  Porcentaje: " << porcentaje_pares << "%" << endl;
    } else {
        cout << "No se ingresaron números para analizar." << endl;
    }

    return 0;
}