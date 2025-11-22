// Ejercicio_10

/*
Haga una función que tome como entrada una matriz cuadrada de N×M y retorne la matriz traspuesta de M × N. Recuerde que la matriz traspuesta es aquella en donde se intercambian filas por columnas. Por ejemplo, si la matriz original es A = {{1, 5}, {2, 3}}, la función debe retornar {{1, 2}{5, 3}};
*/

int** transpuesta(int **matriz, int n, int m){
        int **Tmatriz = new int*[m];
        for(int i = 0; i < m; i++){
                Tmatriz[i] = new int[n];
        }
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        Tmatriz[j][i] = matriz[i][j];
                }
        }

        return Tmatriz;
}