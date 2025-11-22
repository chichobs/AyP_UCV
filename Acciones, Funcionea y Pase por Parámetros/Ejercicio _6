//Ejercicio_6

/*
Haga una función para determinar si un punto (X, Y ) está dentro de un rectángulo. El rectángulo es definido por la coordenada del vértice superior izquierdo, su altura y su ancho.
*/

#include <iostream>

using namespace std;

// --- Función Principal ---
// Determina si un punto (Xp, Yp) está dentro de un rectángulo.
bool estaDentro(double Xp, double Yp, 
                double Xsi, double Ysi, double Ancho, double Altura) {

    // 1. Condición en el Eje X
    // El punto debe estar entre X_si y X_si + Ancho
    bool condicion_X = (Xp >= Xsi) && (Xp <= (Xsi + Ancho));

    // 2. Condición en el Eje Y
    // El punto debe estar entre Y_si - Altura y Y_si
    // Nota: Se asume que Y_si es el valor Y más alto.
    bool condicion_Y = (Yp <= Ysi) && (Yp >= (Ysi - Altura));
    
    return condicion_X && condicion_Y;
}

// --- Algoritmo Principal ---
int main() {
    // Rectángulo: VSI=(0, 10), Ancho=5, Altura=5. Límite: X=[0, 5], Y=[5, 10]
    double Xsi = 0.0, Ysi = 10.0, W = 5.0, H = 5.0;
    
    // Punto 1: (2, 7) - Debería estar dentro
    double P1x = 2.0, P1y = 7.0;
    cout << "Punto (" << P1x << ", " << P1y << ") está dentro: " 
         << (estaDentro(P1x, P1y, Xsi, Ysi, W, H) ? "SI" : "NO") << endl;
         
    // Punto 2: (6, 7) - Debería estar fuera (X > 5)
    double P2x = 6.0, P2y = 7.0;
    cout << "Punto (" << P2x << ", " << P2y << ") está dentro: " 
         << (estaDentro(P2x, P2y, Xsi, Ysi, W, H) ? "SI" : "NO") << endl;

    return 0;
}
