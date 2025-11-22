// Ejercicio_9

/*
Dados dos arreglos ordenados de enteros A y B, haga una función que permita obtener un tercer arreglo C que contenga todos los elementos de A y B ordenados. Por ejemplo, si A = {1, 4, 9} y B = {2, 5, 10, 12}, el resultado deberá ser C = {1, 2, 4, 5, 9, 10, 12};
*/

void concatenarArray(int *arr, int *arb, int *arc, int n, int m) {
    int aux;
    for(int i = 0; i < n; i++) {
        arc[i] = arr[i];
    }
    for(int i = n, j = 0; i < n+m; i++, j++) {
        arc[i] = arb[j];
    }
    for(int i = 0; i < n+m; i++) {
        for(int j = 0; j < n+m-1; j++) {
            if(arc[j] > arc[j+1]) {
                aux = arc[j];
                arc[j] = arc[j+1];
                arc[j+1] = aux;
            }
        }
    }
}