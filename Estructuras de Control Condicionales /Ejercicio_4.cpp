//Ejercicio_4

/*
En un estacionamiento la primera hora (o fracción) cuesta Bs. 100 y cada hora adicional (o fracción) Bs. 80. Haga un algoritmo que reciba como entrada la hora de entrada y hora de salida de un vehículo y calcule el monto a pagar.
*/

#include <iostream>

using namespace std;

int main() {
    int E_H, E_M;
    int S_H, S_M;
    int MinutosEntrada, MinutosSalida;
    int DuracionMinutos;
    int HorasTotales;
    int CostoTotal;
    
    const int COSTO_BASE = 100;
    const int COSTO_ADICIONAL = 80;

    cout << "Ingrese la hora de entrada (HH MM): ";
    cin >> E_H >> E_M;
    cout << "Ingrese la hora de salida (HH MM): ";
    cin >> S_H >> S_M;
    
    MinutosEntrada = (E_H * 60) + E_M;
    MinutosSalida = (S_H * 60) + S_M;

    DuracionMinutos = MinutosSalida - MinutosEntrada;
    
    if (DuracionMinutos < 0) {
        DuracionMinutos = DuracionMinutos + (24 * 60);
    }
    
    HorasTotales = (DuracionMinutos + 59) / 60;
    
    if (HorasTotales == 0) {
        CostoTotal = 0; 
    } else {
        CostoTotal = COSTO_BASE;
        if (HorasTotales > 1) {
            CostoTotal = CostoTotal + ((HorasTotales - 1) * COSTO_ADICIONAL);
        }
    }

    cout << "Duración total: " << HorasTotales << " hora(s) (o fracción)." << endl;
    cout << "Monto total a pagar: Bs. " << CostoTotal << endl;

    return 0;
}