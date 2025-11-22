// Ejercicio_12

/*
Haga una acción que tome como entrada una matriz (con cantidad par de filas) e intercambie las filas pares y las impares. Por ejemplo, si la matriz es {{4, 2}, {1, 2}, {6, −1}, {3, 5}}, la matriz resultante debería ser {{1, 2}, {4, 2}, {3, 5}, {6, −1}};
*/

void intercambioFilas(int **matriz, int n, int m){
    for(int i = 0; i < n; i+=2){
        for(int j = 0; j < m; j++){
            swap(matriz[i][j], matriz[i+1][j]);
        }
    }
}