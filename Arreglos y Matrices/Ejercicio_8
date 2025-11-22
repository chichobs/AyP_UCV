// Ejercicio_8

/*
Haga una función que tome como entrada un arreglo de enteros A y un número K y determine si existen dos valores de A que sumados sean iguales a K. Por ejemplo, si A = {4, −1, 6, 8, 10, 3} y K = 2, la función debe retornar verdadero ya que −1 + 3 = 2;
*/

bool sumValores(int *arr, int n, int a) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == a) return true;
        }
    }
    return false;
}