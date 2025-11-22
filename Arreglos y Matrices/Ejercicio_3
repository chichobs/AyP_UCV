// Ejercicio_3

/*
Haga una función que tome como entrada un string y retorne verdadero si es capicúa;
*/

bool palindrome(char *tex){

    int n = size(tex);
    int cont = 0;

    for(int i = 0, j = n-1; i < n; i++, j--){
        if(tex[i] != tex[j]) cont++;
    }

    if(cont == 0) return true;
    else return false;
}