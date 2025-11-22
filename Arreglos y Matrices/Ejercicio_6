// Ejercicio_6

/*
Haga una acción que tome como entrada un arreglo A de enteros y un número entero K y realice K desplazamientos circulares de A hacia la izquierda. Por ejemplo, si A = {4, 6, −1, 2} y K = 2, el valor final de A debe ser {−1, 2, 4, 6};
*/

void circularArray(int arr[8], int ar[8], int n) {
    for(int i = 0, j = n; i < 8-n; i++, j++) {
        ar[i] = arr[j];
    }
    for(int i = 8-n, j = 0; j < n; i++, j++) {
        ar[i] = arr[j];
    }
}