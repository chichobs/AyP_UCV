// Ejercicio_7

/*
Dado un arreglo con valores entre 0 y 100 haga una función para determinar el valor que más se repite;
*/

void valorMasRepetido(int *arr, int *a, int n, int &num, int &numr) {
    for(int i = 0; i < n; i++) {
        a[arr[i]]++;
    }
    for(int i = 0; i < 101; i++) {
        if(a[i] > num) {
            num = a[i];
            numr = i;
        }
    }
}