// Ejercicio_5

/*
Haga una acción que tome como entrada un arreglo de enteros A y un elemento K y coloque K en las posiciones potencia de dos del arreglo (1, 2, 4, 8, . . .);
*/

bool potenciaDeDos(int n){
    for(int i = 0; i < 100; i++){
        if(n == pow(2, i)) return true;
    }
    return false;
}

//Asumiendo que el tamaño máximo del arreglo es 100
void cambio(int *arr, int n, int k) {
    for(int i = 0; i < n; i++) {
        if(potenciaDeDos(i) == true) arr[i] = k;
    }
}
