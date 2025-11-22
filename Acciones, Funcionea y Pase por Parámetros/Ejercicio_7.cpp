//Ejercicio_7

/*
Usando la función desarrollada en el problema (7) haga una función que tome como entrada dos rectángulos y determine si algún vértice del 1er rectángulo está contenido en el 2do rectángulo.
*/

#include <iostream>

using namespace std;

bool estaDentro(double Xp, double Yp, double Xsi, double Ysi, double Ancho, double Altura) {
    bool condicion_X = (Xp >= Xsi) && (Xp <= (Xsi + Ancho));
    bool condicion_Y = (Yp <= Ysi) && (Yp >= (Ysi - Altura));
    return condicion_X && condicion_Y;
}

bool verticeR1EnR2(double Xsi1, double Ysi1, double W1, double H1, double Xsi2, double Ysi2, double W2, double H2) {
    double V1x = Xsi1;       double V1y = Ysi1;  
    double V2x = Xsi1 + W1;  double V2y = Ysi1;  
    double V3x = Xsi1;       double V3y = Ysi1 - H1;  
    double V4x = Xsi1 + W1;  double V4y = Ysi1 - H1;
    if (estaDentro(V1x, V1y, Xsi2, Ysi2, W2, H2)) return true;
    if (estaDentro(V2x, V2y, Xsi2, Ysi2, W2, H2)) return true;
    if (estaDentro(V3x, V3y, Xsi2, Ysi2, W2, H2)) return true;
    if (estaDentro(V4x, V4y, Xsi2, Ysi2, W2, H2)) return true;
    
    return false;
}

int main() {
    double Xsi1 = 1, Ysi1 = 1, W1 = 2, H1 = 2;
    double Xsi2 = 0, Ysi2 = 0, W2 = 10, H2 = 10;
    bool caso1 = verticeR1EnR2(Xsi1, Ysi1, W1, H1, Xsi2, Ysi2, W2, H2);
    cout << "Caso 1 (R1 parcialmente en R2): Algún vértice de R1 está en R2: " << (caso1 ? "SI" : "NO") << endl; 

    double Xsi3 = 5, Ysi3 = 5, W3 = 1, H3 = 1;
    bool caso2 = verticeR1EnR2(Xsi1, Ysi1, W1, H1, Xsi3, Ysi3, W3, H3);
    cout << "Caso 2 (R1 y R3 no se tocan): Algún vértice de R1 está en R3: " << (caso2 ? "SI" : "NO") << endl; 
    
    return 0;
}