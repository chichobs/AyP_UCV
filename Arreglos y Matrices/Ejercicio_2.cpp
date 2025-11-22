// Ejercicio_2

/*
Haga una acción que tome como entrada un arreglo A y un entero N y retorne (usando parámetros por referencia) el número de elementos de A mayores a N y su promedio;
*/

void promedio(int *arr, int n, int a, int &elem, int &x){

    int cont = 0;
    elem = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] > a){
            elem += arr[i];
            cont++;
        }
    }

    if(cont != 0) x = elem / cont; 
}